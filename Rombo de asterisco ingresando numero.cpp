 #include <iostream>  
using namespace std;  

int main()  
{  //Introducir datos 
int lineas = 0; 
cout << "Intoduce el tamano de tu rombo: "; 
cin >> lineas; 

if (lineas&2 == 0) 
{  lineas++; }  

if (lineas < 0) 
   lineas * -1;   
  
int asterisco = 1;  
int espacio = lineas/2; 

for (int r = 0; r < lineas; r++)  
{ for (int a = 0; a < espacio; a++)  
   { cout << " "; }  

   for (int a = 0; a < asterisco; a++)  
    {  cout << "*";  }  

// Nivelacion de los asteriscos  

if (r < lineas/2)  
{  asterisco += 2;  
   espacio -= 1; }  

else  
{  asterisco -= 2;  
   espacio += 1; }  

cout << endl;  
}  

return 0;  

}  
