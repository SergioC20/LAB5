// Solitario_SergioCardona_1222419.cpp 

#include <iostream>
#include <time.h>
#include <string.h>
#include <string>
#include <array>
#include "Pila.h"
#include "Lista.h"

using namespace std;




string mazo_origen[52];
string mazo_random[52];
string mazo_random2[52];
string mazo_mostrado[24];

Lista* lista = new Lista();

Pila* pila = new Pila();
Pila* pila1 = new Pila();
Pila* pila2 = new Pila();
Pila* pila3 = new Pila();
Pila* pila4 = new Pila();
Pila* pila5 = new Pila();
Pila* pila6 = new Pila();
Pila* pila7 = new Pila();
Pila* PilaMostrada = new Pila();

//variables
string P1;
string P2;
string P3;
string P4;
string P5;
string P6;
string P7;
string Mostrar;

int numeroaleatorio;
int GrupoOrigen;
int GrupoDestino;
int posicionar; 
int valorCarta; 

int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
char carta = 'r';


// inicializar 
void barajear();
void nuevo_vector();
void mandar_cartas();



int main()
{
	int op;

	do
	{
		
		cout << "Solitario\n";
		cout << "Para empezar oprima la letra (r)";
		cout << "Oprima el numero (2) para salir del juego";
		switch (carta)
		{
		case 'r':
			for (int i = 0; i < mazo_origen->length(); i++)
			{
				//Se hace el ingreso de 13 en 13 porque el mayor valor de cartas en una baraja a alcanzar es de 13, que equivale a "A" la mayor

				if (i >= 0 && i <= 12) {
					lista->Add(i + 1); //Aquí es donde interviene el valor del índice, es el que acompaña a la carta
					mazo_origen[i] = "R";
				}
				else if (i >= 13 && i <= 25) {
					lista->Add(i - 12);	//Aquí es donde interviene el valor del índice, es el que acompaña a la carta
					mazo_origen[i] = "R";
				}
				else if (i >= 26 && i <= 38) {
					lista->Add(i - 25);
					mazo_origen[i] = "N";
				}
				else if (i >= 39 && i <= 52) {
					mazo_origen[i] = "N";
					lista->Add(i - 38);
				}

			}
			barajear();
			break;

		default:
			cout << "OPRIMA LA LETRA (r)";
			break;
		}

	} while (op != 2);
}




void barajear() {
	for (int j = 0; j< mazo_origen->length(); j++)
	{
		srand(time(NULL));
		numeroaleatorio = rand() % mazo_origen->length();

		pila->apilar(lista->GetItem(numeroaleatorio));
		mazo_random[j] = pila->desapilar() + mazo_origen[numeroaleatorio];
		mazo_random2[j] = mazo_origen[numeroaleatorio];

		nuevo_vector(mazo_origen);
	}

}

void mandar_cartas(string mazo_rep[]) {
	string elemento;
	int numero;
	for (int c = 0; c < mazo_rep->length(); c++)
	{
		if (c < 1)
		{
			elemento = mazo_rep[c];

			if (elemento.length() > 2)
			{
				numero = stoi(elemento.substr(0, 2));
				pila1->apilar(numero);
				P1 += mazo_rep[c];
			}
			else
			{
				numero = stoi(elemento.substr(0, 1	));
				pila1->apilar(numero);
				P1 += mazo_rep[c];
			}
			cout << mazo_rep[c];
		}
		if (c > 2 && c < 6)
		{
			elemento = mazo_rep[c];
			if (elemento.length() > 2) {
				numero = stoi(elemento.substr(0, 2));
				pila3->apilar(numero);
				P3 += mazo_rep[c];
			}
			else {
				numero = stoi(elemento.substr(0, 1));
				pila3->apilar(numero);
				P3 += mazo_rep[c];
			}
			cout << mazo_rep[c];
		}
		if (c > 5 && c < 10) 
		{
			elemento = mazo_rep[c];
			if (elemento.length()> 2) {
				numero = stoi(elemento.substr(0, 2));
				pila4->apilar(numero);
				P4 += mazo_rep[c];
			}
			else {
				numero = stoi(elemento.substr(0, 1));
				pila4->apilar(numero);
				P4 += mazo_rep[c];
			}
			cout << mazo_rep[c];

		}
		if (c > 9 && c < 15) 
		{
			elemento = mazo_rep[c];
			if (elemento.length() > 2) {
				numero = stoi(elemento.substr(0, 2));
				pila5->apilar(numero);
				P5 += mazo_rep[c];
			}
			else {
				numero = stoi(elemento.substr(0, 1));
				pila5->apilar(numero);
				P5 += mazo_rep[c];
			}
			cout<< mazo_rep[c];

		}
		if (c > 14 && c < 21) 
		{
			elemento = mazo_rep[c];;
			if (elemento.length() > 2) {
				numero = stoi(elemento.substr(0, 2));
				pila6->apilar(numero);
				P6 += mazo_rep[c];
			}
			else {
				numero = stoi(elemento.substr(0, 1));
				pila6->apilar(numero);
				P6 += mazo_rep[c];
			}
			cout << mazo_rep[c];
		}
		if (c > 20 && c < 28) 
		{
			elemento = mazo_rep[c];
			if (elemento.length() > 2) {
				numero = stoi(elemento.substr(0, 2));
				pila7->apilar(numero);
				P7 += mazo_rep[c];
			}
			else {
				numero = stoi(elemento.substr(0, 1));
				pila7->apilar(numero);
				P7 += mazo_rep[c];
			}
			cout <<"\t" << mazo_rep[c];
		}
		if (c > 27 && c < 51) //solo para agregar las que sobran al mazo que se muestra
		{
			elemento = mazo_rep[c];
			if (elemento.length() > 2) {
				numero = stoi(elemento.substr(0, 2));
				PilaMostrada->apilar(numero);
				mazo_mostrado[c - 28] = mazo_random2[c] + (PilaMostrada->desapilar());
			}
			else {
				numero = stoi(elemento.substr(0, 1));

				PilaMostrada->apilar(numero);
				mazo_mostrado[c - 28] = mazo_random[c] + (PilaMostrada->desapilar());
			}
			
		}
	}
}


void nuevo_vector( string mazoOr[]) {
	for (int k = 0; k <( mazoOr->length()-1); k++)
	{
		mazoOr[k] = mazoOr[k + 1];
	}
	mazoOr->resize(mazoOr->length(), mazoOr->length() - 1);
}
