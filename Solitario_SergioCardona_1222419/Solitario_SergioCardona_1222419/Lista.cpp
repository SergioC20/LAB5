#include "Lista.h"


void Lista::Add(int item)
{
	Node* nuevo_nodo = new Node();
	nuevo_nodo->data = item;
	nuevo_nodo->next = nullptr;

	Node* aux = header;

	if (header == nullptr) {
		header = nuevo_nodo;
	}
	else {
		while (aux->next != nullptr) {
			aux = aux->next;
		}
		aux->next = nuevo_nodo;
	}
}
void Lista::Clear()
{
	int num;
	while (header != nullptr)
	{
		if (header != nullptr) {
			Node* aux = nullptr;
			header = aux;
		}
	}

}

int Lista::Count()
{
	int cont = 0;
	Node* nuevo_nodo = header;

	while (nuevo_nodo != nullptr)
	{
		nuevo_nodo = nuevo_nodo->next;
		cont++;
	}

	return cont;
}

bool Lista::Contains(int item)
{
	//El nodo apunta a la cabeza para así recorrer desde el primer elemento hasta el últimi
	Node* nuevo_nodo = header;
	bool estado = false;
	while (nuevo_nodo != nullptr) //cuando nuevo_nodo sea null, se termina de recorrer la lista
	{
		if (nuevo_nodo->data == item) {
			estado = true;
		}
		nuevo_nodo = nuevo_nodo->next;
	}
	return estado;
}

int Lista::IndexOf(int item)
{
	int posicion = -1;
	Node* nuevo_nodo = header;//para que empiece desde la cabeza

	int indice = 0;
	while (nuevo_nodo != nullptr && posicion != item)
	{
		if (nuevo_nodo->data == item) {
			return indice;
		}
		nuevo_nodo = nuevo_nodo->next;
		indice++;
	}
	return -1;
}


void Lista::Insert(int index, int item)
{
	//se crea un nuevo nodo para agregarlo a una posición
	Node* nuevo_nodo = new Node();

	nuevo_nodo->data = item;
	nuevo_nodo->next = nullptr;

	Node* aux = header;

	int i = 0;

	if (index == 0) {
		if (header == nullptr) {
			header = nuevo_nodo;	//si la lista está vacía, la cabeza apuntará al nuevo nodo
		}
		else {
			header = nuevo_nodo;	//si no estaba vacía, la cabeza apunta al nuevo nodo, pero el nodo auxiliar apunta al valor que tenía antes la cabeza
			nuevo_nodo->next = aux;
		}
	}
	else {
		while (aux->next != nullptr && i != index - 1)
		{
			aux = aux->next;
			i++;
		}
		nuevo_nodo->next = aux->next;
		aux->next = nuevo_nodo;
	}
}

//implementado
int Lista::GetItem(int index)
{
	Node* nuevo_nodo = header; //igualado al primer nodo

	int cont = 0;

	while (nuevo_nodo != nullptr)
	{
		if (cont == index) {
			return nuevo_nodo->data;
		}
		cont++;
		nuevo_nodo = nuevo_nodo->next; //avanza

	}
}

//Implementado
void Lista::SetItem(int index, int item)
{
	Node* nuevo_nodo = new Node();
	nuevo_nodo->data = item;
	nuevo_nodo->next = nullptr;

	Node* aux = header;

	int i = 0;

	if (index == 0) {
		if (header == nullptr) {
			header = nuevo_nodo;
		}
		else
		{
			header = nuevo_nodo;
			nuevo_nodo->next = aux->next;
		}
	}
	else {
		while (aux->next != nullptr && i != index - 1)
		{
			aux = aux->next;
			i++;
		}
		nuevo_nodo->next = aux->next->next;
		aux->next = nuevo_nodo;
	}
}

int Lista::LastIndexOF(int item)
{
	int posicion = -1; //valida que no se encontró
	int indice = 0;

	Node* nuevo_nodo = header;//para que empiece desde la cabeza


	if (header != nullptr)
	{
		while (nuevo_nodo != nullptr)
		{
			if (nuevo_nodo->data == item) {
				posicion = indice;
			}
			nuevo_nodo = nuevo_nodo->next;
			indice++;
		}

		if ((indice > 0) && (nuevo_nodo == nullptr) && (posicion != -1))
		{
			return posicion;
		}
		else
		{
			return posicion;
		}
	}
	else
	{
		return posicion;
	}
}

bool Lista::Remove(int item)
{

	int posicion = -1;
	Node* nuevo_nodo = header;

	int i = 0;
	int final = 0;

	while (nuevo_nodo != nullptr && posicion != item || final == 99)
	{
		if (nuevo_nodo->data == item) {
			posicion = i;
			final == 99;
		}
		nuevo_nodo = nuevo_nodo->next;
		i++;
	}

	if (posicion == -1) {
		return false;
	}
	else {
		Node* aux;
		Node* anterior = nullptr;

		aux = header;

		while (aux != nullptr && aux->data != item)
		{
			anterior = aux;
			aux = aux->next;
		}
		if (anterior == nullptr) {
			header = header->next;
			delete(aux);
			return true;
		}
		else {
			anterior->next = aux->next;
			delete(aux);
			return true;
		}
	}
}

void Lista::RemoveAt(int index)
{
	Node* aux;
	Node* anterior = nullptr;

	aux = header;

	int indice = 0;
	while (aux != nullptr && indice != index)
	{
		anterior = aux;
		aux = aux->next;
		indice++;
	}
	if (anterior == nullptr) {
		header = header->next;
		delete(aux);
	}
	else {
		anterior->next = aux->next;
		delete(aux);
	}
}
