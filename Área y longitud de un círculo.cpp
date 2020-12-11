#include <iostream>
using namespace std;

int main ()
{
    cout << " Calcula el area y longitud de un circulo " << endl << endl;
    cout  << " Introduzce tu radio: ";

       //Nombrar cada variables
         double radio = 0 ; 
         cin >> radio;
    
    //Realizar operación para el area
    double area = 3.14 * (radio * radio) ;
    cout << endl << " El area del circulo es: " << area << endl << endl;

    //Realizar operación para la longitud
    double longitud = 2 * 3.14 * radio;
    
    cout << " La longitud del circulo es: " << longitud << endl << endl;
    cout << endl << " Gracias por utilizar!" << endl;

    return 0;
    }
