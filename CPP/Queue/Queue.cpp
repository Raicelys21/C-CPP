#include <iostream>
using namespace std;

struct nodo
{
    int datas;
    nodo* next;
} *first, *last;

void pushNode();
void popNode();
void deleteNode();
void searchNode();
void modifyNode();

int main(){
    int number = 0;
    do
    {
       cout << endl << "1. Push | 2. Pop | 3. Delete | 4. Search | 5. Modify | 6. Exit ";
       cout << endl << "Select a option: ";
       cin >> number;

       switch (number)
       {
       case 1:
           cout << endl << "Push the node: ";
           pushNode();
           break;
       case 2:
           cout << endl << "Pop the nodes: ";
           popNode();
           break;
        case 3:
           cout << endl << "Detele the node: ";
           deleteNode();
           break;
        case 4:
           cout << endl << "Search the node: ";
           searchNode();
           break;
        case 5:
           cout << endl << "Modify the node: ";
           modifyNode();
           break;
        case 6:
           cout << endl << "Exit the app";
           break;
       default:
           cout << endl << "Use other options.";
           break;
       }
    } while (number != 6);
    
    return 0;
}

//Insertar nodo
void pushNode(){
    nodo* newnode = new nodo();
    cout << "Insert or push your node: ";
    cin >> newnode->datas;

    if (first == NULL)
    {
        first = newnode;
        first->next = NULL;
        last = first;
    } else {
        last->next = newnode;
        newnode->next = NULL;
        last = newnode; 
    }   
    cout << "Nodo insert!" << endl;
}

//Desplegar nodo
void popNode(){
    nodo* actual = new nodo();
    actual = first;
    if (first != NULL){
        while(actual != NULL){
            cout << endl << " " << actual->datas;
            actual = actual->next;
        }
    } else{
        cout << "The queue is void.";
    }
}

//Modificar nodo
void modifyNode(){
    nodo* actual = new nodo();
    actual = first;
    bool state = false;
    int nodoSearch = 0;
    cout << "Insert the node that you want change: ";
    cin >> nodoSearch;
    if (first != NULL){
        while(actual != NULL && nodoSearch != true){
            if (actual->datas == nodoSearch){
                cout << "Yes, exist the node ("<< nodoSearch <<")!" << endl;
                    cout << "Insert the new node: ";
                    cin >> actual->datas;
                    cout << "Node modificated." << endl;
                nodoSearch = true;
            }
            actual = actual->next; //Recording
        } if (!nodoSearch){
            cout << "Node NO found." << endl;
        }
    } else{
        cout << "The queue is void." << endl;
    }
}

//Buscar nodo
void searchNode(){
    nodo* actual = new nodo();
    actual = first;
    bool state = false;
    int nodoSearch = 0;
    cout << "Insert the node that you want search: ";
    cin >> nodoSearch;
    if (first != NULL){
        while(actual != NULL && nodoSearch != true){
            if (actual->datas == nodoSearch){
                cout << "Yes, exist the node ("<< nodoSearch <<")!" << endl;
                cout << "Nodo found!" << endl;
                nodoSearch = true;
            }
            actual = actual->next; //Recording
        } if (!nodoSearch){
            cout << "Node NO found." << endl;
        }
    } else{
        cout << "The queue is void." << endl;
    }
}

//Borrar nodo
void deleteNode(){
nodo* actual = new nodo();
    actual = first;
    bool state = false;
    int nodoSearch = 0;
    nodo* befNode = new nodo();
    befNode = NULL;
    cout << "Insert the node that you want delete: ";
    cin >> nodoSearch;
    if (first != NULL){
        while(actual != NULL && nodoSearch != true){
            if (actual->datas == nodoSearch){
                if(actual == first){
                    first = first->next;

                } else if(actual == last){
                    befNode->next = NULL;
                    last = befNode;

                } else{
                    befNode->next = actual->next;
                }
                cout << "Node deleted.";
                nodoSearch = true;
            }
            befNode = actual;
            actual = actual->next; //Recording
        } if (!nodoSearch){
            cout << "Node NO found." << endl;
        }
    } else{
        cout << "The queue is void." << endl;
    }
}
