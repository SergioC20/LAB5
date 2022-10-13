#pragma once

#ifndef NODO_H_
#define NODO_H_

#ifndef NULL
#define NULL 0
#endif

class NodoCarta
{
private:

    int dato;

    NodoCarta* siguiente;

public:

    /*
     * post: el Nodo resulta inicializado con el dato dado
     *       y sin un Nodo siguiente.
     */
    NodoCarta(int dato);
    /*
     * post: devuelve el valor del dato.
     */
    int obtenerDato();
    /*
     * post: cambia el valor del dato.
     */
    void cambiarDato(int nuevoDato);
    /*
     * post: devuelve el siguiente Nodo.
     */
    NodoCarta* obtener_siguiente();
    /*
     * post: cambia el siguiente Nodo por nuevoSiguiente.
     */
    void cambiarSiguiente(NodoCarta* nuevoSiguiente);
};

#endif