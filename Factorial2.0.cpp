
#include <iostream>

using namespace std;

int main ()
{
    int numero;
	int factorial = 1;
	
    cout  << " Introduzce tu numero: ";
         cin >> numero;
    
	for (int n = 1; n <= numero; n++) 
        { 
		factorial  *= n;        
        }
        
    for (int n = 1; n <= numero; n++)  
            {   
              int resultado = n++;
            } 
		cout  << " El factorial de " << numero << " es: " << factorial << endl;
		
    return 0;
    }
