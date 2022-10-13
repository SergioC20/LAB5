#include "Carta.h"


NodoCarta::NodoCarta(int dato) {
    this->dato = dato;
    this->siguiente = nullptr;
}

int NodoCarta::obtenerDato() {

    return this->dato;
}

void NodoCarta::cambiarDato(int nuevoDato) {

    this->dato = nuevoDato;
}

NodoCarta* NodoCarta::obtener_siguiente() {

    return this->siguiente;
}

void NodoCarta::cambiarSiguiente(NodoCarta* nuevoSiguiente) {

    this->siguiente = nuevoSiguiente;
}