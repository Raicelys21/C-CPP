#include<iostream>
using namespace std;

int main()
{
	string variable = "Toyota";
    string * puntero1 = &variable;
    
    //Variable tipo int 
        cout << "Valor de la variable: " << variable << endl; 
    
    //Puntero de la variable 1    
        cout << "Puntero de la variable: " << &variable << endl; 
    
    //Puntero del puntero
        cout << "Puntero del puntero: " << &puntero1 << endl;
        
    //Cambio de variables
    *puntero1 = "Mercedes";
        cout << "Cambio de valor: " << variable << endl; 
    
    //Segundo puntero
    string puntero2;
    puntero2 = "Sonata";
    *puntero1 = puntero2;
    
    //Cambiar variable con segundo puntero
    cout << "Cambio de variable con segundo puntero: " << puntero1 << endl; 
}
