#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribirFrases();

int main(){
	escribirFrases();
	
	system("pause");
	return 0;
} 

void escribirFrases(){
	ofstream documento;
	string nombredocumento;
	char rpt;
	
	cout<< "Digite el nombre que le desee dar a su documento: ";
	getline(cin,nombredocumento);
	
	documento.open(nombredocumento.c_str(), ios::out | ios::in);
	
	if(documento.fail())
	{ 
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout  << endl << " Listado de nombres " << endl << endl;

	string nombre[10];
	
	for (int i = 0; i < 10; i++) 
	{
	cout<< " Ingresa el numero " << i + 1 << " nombre completo: " ;
	getline(cin,nombre[i]);
    }
    
	documento.close(); 
	

    }
