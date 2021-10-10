#include <iostream>
using namespace std;

struct nodo
{
    int datas;
    nodo* next;
} *first, *last;

void insertar();
void desplegar();
void eliminar();
void modificar();
void buscar();

int main(){

    cout << "Ingresar" << endl;
    insertar();
    cout << "Lista" << endl;
    desplegar();
    
    return 0;
}

void insertar(){
    nodo* nuevo = new nodo();
    cout << "Ingrese el dato: ";
    cin >> nuevo->datas;

    if(first != NULL){
        first = nuevo;
        first->next = NULL;
        last = nuevo;
    } else {
        last->next = nuevo;
        nuevo->next = NULL;
        last = nuevo;
    } 
        cout << "Dato ingresado. " << endl;
}

void desplegar(){
    nodo* actual = new nodo();
    actual = first;
    if(first != NULL){
        while (actual != NULL){
        cout << " " + actual->datas << endl;
        actual = actual->next;
        }
    } else {
        cout << "La lista esta vacia." << endl;
    }
}

void eliminar(){

}

void modificar(){

}

void buscar(){

}