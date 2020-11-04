#include <iostream>

using namespace std;

int main ()
{
    cout << " Equivalencia en letra de tus calificaciones " << endl << endl;
    cout  << " Ingresa tu calificacion ";
    
     //Nombrar cada variables
         int calf;
         cin >> calf ;
         
    // Procedimiento de calculo de letras
    
       if (90 <= calf && calf <= 100) {
       cout << "Tu letra es: A"; }
       
       else if (80 <= calf && calf <= 89) 
	   { cout << "Tu letra es: B"; }
	   
       else if (70 <= calf && calf <= 79) 
	   { cout << "Tu letra es: C"; }
       
       else if (60 <= calf && calf <= 69) 
	   { cout << "Tu letra es: D"; }
       
       else if (0 <= calf && calf <= 59) 
	   {cout << "Tu letra es: F"; }
	   
	   
           
    return 0;
    }
    

