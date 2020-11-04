#include <iostream>  

using namespace std;  
int main()  
{  
// Imprimir asteriscos  
int asterisco = 1;  
int espacio = 5; 

for (int r = 0; r < 11; r++)  
{  
   for (int a = 0; a < espacio; a++)  
   {  
     cout << " "; 
   }  
          for (int a = 0; a < asterisco; a++)  
           {  
             cout << "*";  

           }  
           
// Nivelacion de los asteriscos  
    if (r < 5)  
    {  
        asterisco += 2;  
        espacio -= 1; 
    }  
            else  
            {  
               asterisco -= 2;  
               espacio += 1; 
            }  
            
cout << endl;  

}  

return 0;  
} 

 

 
