// EJ1_LAB5_SergioCardona_1222419.cpp 

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "List.h"


using namespace std;


List* list = new List();

//variables
// Add
int dato_agregar;
// Count
int contador;
// Contains
int buscador;
bool buscar_numero;
// IndexOf
int posicion_inicial;
// LastIndexOf
int buscar;
//setItem
int agregar_posicion;
//Remove
int dato_eliminar;
bool eliminado;
//RemoveAt
int eliminar_posicion;
//Insert
int index;
int dato;
//GetItem
int resultado;
int indexbusqueda;


// Inicializar funcion
void Menu();



int main()
{
    Menu();

    return 0;

}

void Menu() {
   
    int seleccionar;
    do
    {
       

        cout << "------Ejercicio #1 Laboratorio: Estrucruras de datos lineales--------\n";
        cout << "\n";
        cout << "Seleccione una opcion: \n";
        cout << "1. Agregar datos a la lista\n";
        cout << "2. Eliminar todos los datos de la lista\n";
        cout << "3. Contar elementos de la lista\n";
        cout << "4. Buscar elemento en la lista\n";
        cout << "5. Buscar la posicion del elemento en la lista\n";
        cout << "6. Insertar elemento en posicion específica de la lista\n";
        cout << "7. Obtener elemento de la lista\n";
        cout << "8. Cambiar elemento de posicion en la lista\n";
        cout << "9. Ultimo dato de la lista\n";
        cout << "10. Eliminar primer dato de la lista\n";
        cout << "11. Eliminar dato de la lista\n";
        cout << "12. Cerrar programa\n";
        cout << "\n";
        cout << "Seleccionar la opcion: ";
        cin >> seleccionar;

        switch (seleccionar)
        {
        case 1:
            cout << "Agregue un dato a la lista: ";
            cin >> dato_agregar;
            list->Add(dato_agregar);
            cout << "\n";
            system("pause");
            break;

        case 2:
            list->Clear();
            cout << "\n";
            system("pause");
            break;

        case 3:
            contador = list->Count();
            cout << "La cantidad de elementos en la lista es de: " << contador;
            cout << "\n";
            system("pause");
            break;

        case 4:
            cout << "Ingrese el numero que desea buscar: ";
            cin >> buscador;
            buscar_numero = list->Contains(buscador);

            if (buscar_numero == true)
            {
                cout << "El numero " << buscador << " esta en la lista";
            }
            else
            {
                cout << "El numero " << buscador << " no esta en la lista";
            }
            cout << "\n";
            system("pause");
            break;

        case 5:
            cout << "Ingrese el numero que desea buscar: ";
            cin >> buscador;
            posicion_inicial = list->IndexOf(buscador);
            cout << "El numero " << buscador << " se encuentra en la posicion: " << posicion_inicial;
            cout << "\n";
            system("pause");
            break;

        case 6:
            cout << "Ingrese numero a insertar en la lista: ";
            cin >> dato;
            cout << "Ingrese la posicion donde desea guardar el numero: ";
            cin >> index;
            list->Insert(index, dato);
            cout << "\n";
            system("pause");
            break;

        case 7:
            cout << "Posicion a obtener en la lista: ";
            cin >> indexbusqueda;
            resultado = list->GetItem(indexbusqueda);
            cout << "El elemento en la posicion " << indexbusqueda << " es: " << resultado;
            cout << "\n";
            system("pause");
            break;

        case 8:
            cout << "Numero a cambiar: ";
            cin >> dato_agregar;
            cout << "Modificar a la posicio: ";
            cin >> agregar_posicion;

            list->SetItem(agregar_posicion, dato_agregar);
            cout << "\n";
            system("pause");
            break;

        case 9:
            cout << "Elemento a buscar: ";
            cin >> buscador;
            buscar = list->LastIndexOf(buscador);

            cout << "La posición del elemento " << buscador << " es : " << buscar;
            cout << "\n";
            system("pause");
            break;

        case 10:
            cout << "Elimenar numero: ";
            cin >> dato_eliminar;
            eliminado = list->Remove(dato_eliminar);

            if (eliminado == true)
            {
                cout << "El elemento " << dato_eliminar << " se elimino correctamente";
            }
            else
            {
                cout << "El elemento " << dato_eliminar << " no se encontro en la lista";
            }
            cout << "\n";
            system("pause");
            break;

        case 11:
            cout << "Posicion a elminar: ";
            cin >> eliminar_posicion;
            list->RemoveAt(eliminar_posicion);
            cout << "\n";
            system("pause");
            break;
        }
        system("cls");
    } while (seleccionar != 12);

}


