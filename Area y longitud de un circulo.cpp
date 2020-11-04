#include  <iostream>

using namespace std;

int main ()
{
    cout << " Calcula el area y longitud de un circulo " << endl << endl;
    cout  << " Introduzce tu radio: ";

       //Nombrar cada variables
         double radio = 0 ;
         
    cin >> radio;
    
    //Buscar el area
    double area = 3.14 * (radio * radio) ;
    cout << endl << " El area del circulo es: " << area << endl << endl;

    //Realizar la longitud
    double longitud = 2 * 3.14 * radio;
     cout << " La longitud del circulo es: " << longitud << endl << endl;
     
     cout << endl << " Gracias por calcular con nosotros " << endl;

    return 0;
    }
    
    
