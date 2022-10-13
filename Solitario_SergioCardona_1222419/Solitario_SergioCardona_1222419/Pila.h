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
     * post: instancia de Pila vac�a y lista para ser usada.
     */
    Pila();

    /*
     * post: devuelve si la Pila no tiene ning�n elemento.
     */
    bool estaVacia();

    /*
     * post: agrega 'elemento' en el tope de la Pila.
     */
    void apilar(int elemento);

    /*
     * pre : la Pila no est� vac�a.
     * post: remueve el tope de la Pila y lo devuelve.
     */
    char desapilar();

    /*
     * pre : la Pila no est� vac�a.
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
