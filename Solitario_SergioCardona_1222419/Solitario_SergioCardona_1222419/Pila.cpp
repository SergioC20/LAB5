#include "Pila.h"
#define ELEMENTO_INVALIDO 0;

Pila::Pila() {

    this->tope = nullptr;
}

bool Pila::estaVacia() {

    return (this->tope == nullptr);
}

void Pila::apilar(int elemento) {

    NodoCarta* nuevoTope = new NodoCarta(elemento);
    nuevoTope->cambiarSiguiente(this->tope);
    this->tope = nuevoTope;
}

char Pila::desapilar() {

    int elemento = ELEMENTO_INVALIDO;

    if (!this->estaVacia()) {

        /* remueve el tope de la estructura */
        NodoCarta* topeAnterior = this->tope;
        this->tope = topeAnterior->obtener_siguiente();

        /* devuelve el elemento y libera los recursos asociados */
        elemento = topeAnterior->obtenerDato();
        delete topeAnterior;
    }

    return elemento;
}

char Pila::obtenerTope() {

    int elemento = ELEMENTO_INVALIDO;

    if (!this->estaVacia()) {

        elemento = this->tope->obtenerDato();
    }

    return elemento;
}

Pila::~Pila() {

    while (!this->estaVacia()) {

        this->desapilar();
    }
}