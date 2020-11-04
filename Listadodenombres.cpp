#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

// Creacion de escritura
void escribir();

int main()
{
	escribir();
	
	system("pause");
	return 0;
} 

void escribir()
{
	//Permitir nombrar el documento 
	ofstream documento;
	string nombredocumento,nombre;
	char rpt;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombredocumento);
	
	//Crear el documento con su respectivo nombre
	documento.open(nombredocumento.c_str(),ios::out); 
	
	//Ejecutar en caso de que haya ocurrido algun error
	      if(documento.fail())
	      { 
	    	cout<<"No se pudo abrir el archivo";
		     exit(1);
	      }
	      
	// Imprimir titulo por pantalla
	cout<<" Listado de nombres " << endl;
	
	
	// Ingresar los nombres
	for (int i = 0; i < 10; i++) 
	{
	cout<< " Ingresa el numero " << i + 1 << " nombre completo: ";
	getline(cin,nombre);
	documento << nombre << endl;
    }
    
    // Imprimir los nombres antes de ejecutar
            cout << " El listado de nombre comprende de los siguientes: " << endl;
	        
	        for (int b = 1; b < 11; b++) 
    	    {
        	documento << b << "- " << nombre << endl ;
            }
	
	// Cerrar el archivo	
	documento.close();
}
