#pragma once
#ifndef PILA_H_
#define PILA_H_
#include "Carta.h"


class Pila
{
private:

    NodoCarta* tope;

public:

    /*
     * post: instancia de Pila vacía y lista para ser usada.
     */
    Pila();

    /*
     * post: devuelve si la Pila no tiene ningún elemento.
     */
    bool estaVacia();

    /*
     * post: agrega 'elemento' en el tope de la Pila.
     */
    void apilar(int elemento);

    /*
     * pre : la Pila no está vacía.
     * post: remueve el tope de la Pila y lo devuelve.
     */
    char desapilar();

    /*
     * pre : la Pila no está vacía.
     * post: devuelve el tope de la Pila.
     */
    char obtenerTope();

    /*
     * post: remueve todos los elementos y libera
     *       los recursos tomados por la estructura de datos.
     */
    ~Pila();
};

#endif
