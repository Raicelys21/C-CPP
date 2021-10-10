#include <iostream>
using namespace std;

int main ()

{
    cout << " Volumen de un cilindro " << endl << endl;
    cout  << " Introduzce tu diametro: " ;
    

       //Nombrar cada variables
       
         double diametro = 0 ;
         
    cin >> diametro;
    
    cout  << " Introduzce tu altura: " ;
    
        //Nombrar cada variables
         double altura = 0 ;
         
    cin >> altura;
    
    //Buscar el area
    double volumen = (3.14 * (diametro * diametro) * (altura)) / 4;
    cout << endl << " El volumen es: " << volumen << endl << endl;

    return 0;
}
