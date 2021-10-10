#include <iostream>

using namespace std;

// Estructura del nodo
struct  nodo{
    int data;
    nodo* next;
}  *first;

// Funciones
void insertarNodo();
void desplegarNodo();
void buscarNodo();
void modificarNodo();
void eliminarNodo();

// Funcion incial
int main(){
    int opmenu = 0;
    do{
        cout << endl << " 1. Insertar  | 2. Buscar   | 3. Desplegar ";
        cout << endl << " 4. Modificar | 5. Eliminar | 6. Salir ";
        cout << endl << endl << "Seleccione una opcion: ";
        cin >> opmenu;
    switch (opmenu)
    {
    case 1:
        cout << endl << "Inserta del nodo: ";
        insertarNodo();
        break;
    case 2:
        cout << endl << "Busca el nodo: ";
        buscarNodo();
        break;
    case 3:
        cout << endl << "Depliega los nodos: " << endl ;
        desplegarNodo();
        break;
    case 4:
        cout << endl << "Modifica el nodo ";
        modificarNodo();
        break;
    case 5:
        cout << endl << "Elimina el nodo: ";
        eliminarNodo();
        break;
    case 6:
        cout << endl << "Salir del compilador.";
        break;
    default:
        cout << endl << "No existe la opcion seleccionada";
        break;
    }
    }
    while(opmenu != 0);
     return 0;
}
// Insertar nodo
void insertarNodo(){
    nodo* nuevo = new nodo();
    cout << "Ingrese el dato para el nodo: ";
    cin >> nuevo->data;
    nuevo->next = first;
    first = nuevo;
    cout << "Nodo ingresado" << endl;
}
//Buscar nodo
void buscarNodo(){
    nodo* actual = new nodo();
    actual = first;
    int nodobuscado = 0;
    bool encontrado = false;
    cout << "Ingrese el dato del nodo que desea buscar: ";
    cin >> nodobuscado;
    if (first != NULL){
        while (actual != NULL && encontrado != true){
           if (actual->data == nodobuscado){
               cout << "Nodo: (" << nodobuscado << ") fue encontrado " << endl;
               encontrado = true;
           }
           actual = actual->next;
        }
        if(encontrado == false){
            cout << "Nodo NO encontrado";
        }     
    } else {
        cout << "La pila esta vacia" << endl;
    }
}
//Desplegar pila
void desplegarNodo(){
    nodo* actual = new nodo();
    actual = first;
    if (first != NULL){
        while (actual != NULL){
        cout << actual->data << endl;
        actual = actual->next;
        }     
    } else {
        cout << "La pila esta vacia" << endl;
    }
}
// Modificar nodo
void modificarNodo(){
    nodo* actual = new nodo();
    actual = first;
    int nodobuscado = 0;
    bool encontrado = false;
    cout << "Ingrese el dato del nodo que quiere modificar: ";
    cin >> nodobuscado;
    if (first != NULL){
        while (actual != NULL && encontrado != true){
           if (actual->data == nodobuscado){
               cout << "Nodo: (" << nodobuscado << ") fue encontrado " << endl;
               cout << "Ingrese el nuevo nodo: ";
               cin >> actual->data;
               cout << "Nodo moficado.";
               encontrado = true;
           }
           actual = actual->next;
        }
        if(encontrado == false){
            cout << "Nodo NO encontrado";
        }     
    } else {
        cout << "La pila esta vacia" << endl;
    }
}
// Eliminar nodo
void eliminarNodo(){
    nodo* actual = new nodo();
    actual = first;
    nodo* nodoant = new nodo();
    nodoant = NULL;
    int nodobuscado = 0;
    bool encontrado = false;
    cout << "Ingrese el dato del nodo para eliminar: ";
    cin >> nodobuscado;
    if (first != NULL){
        while (actual != NULL && encontrado != true){
           if (actual->data == nodobuscado){
               cout << "Nodo: (" << nodobuscado << ") fue encontrado " << endl;

               if (actual == first){
                   first = first->next;
               } else {
                   nodoant->next = actual->next;
               }
               cout << "Nodo elimininado." << endl;
               encontrado = true;
           }
           nodoant = actual;
           actual = actual->next;
        }
        if(encontrado == false){
            cout << "Nodo NO encontrado.";
        }     
    } else {
        cout << "La pila esta vacia." << endl;
    }
}