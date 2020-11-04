#include <iostream>  
using namespace std;  

char tabladedatos[3][3] =  { '1', '2', '3', '4', '5', '6','7', '8', '9' };  
char jugador = 'X';
int r;

void imprimirtabladedatos() 
{
	system ("cls");
    cout << "Bienvenidos a Tic Tac Toe" << endl; 
    
    for (int a = 0; a < 3; a++)  
    { 
       for (int b = 0; b < 3; b++)  
       { 
	   cout << tabladedatos[a][b] << " "; 
	   } 
	    cout << endl;
    } 
} 

void insertarvariable () 
{  

  int num;
  cout << "Es el turno de " << jugador << " , inserta el numero de la posicion donde quieras colocar tu signo";
  cin >> num;
  
  
	if (num == 1)
	{
		if (tabladedatos[0][0] == '1')
			 tabladedatos[0][0] = jugador;
	    else
		{
			cout << "YA ESTE LUGAR ESTA EN USO, INTENTA CON OTRO" << endl;
			insertarvariable();
		}
	}
	
	else if (num == 2)
	{
		if (tabladedatos[0][1] == '2')
			tabladedatos[0][1] = jugador;
		else
		{
			cout << "YA ESTE LUGAR ESTA EN USO, INTENTA CON OTRO" << endl;
			insertarvariable();
		}
	}
	
	else if (num == 3)
	{
		if (tabladedatos[0][2] == '3')
			tabladedatos[0][2] = jugador;
		else
		{
			cout << "YA ESTE LUGAR ESTA EN USO, INTENTA CON OTRO" << endl;
			insertarvariable();
		}
	}
	
	else if (num == 4)
	{
		if (tabladedatos[1][0] == '4')
			tabladedatos[1][0] = jugador;
		else
		{
			cout << "YA ESTE LUGAR ESTA EN USO, INTENTA CON OTRO" << endl;
			insertarvariable();
		}
	}
	
	else if (num == 5)
	{
		if (tabladedatos[1][1] == '5')
			tabladedatos[1][1] = jugador;
		else
		{
			cout << "YA ESTE LUGAR ESTA EN ESO, INTENTA CON OTRO" << endl;
			insertarvariable();
		}
	}
	
	else if (num == 6)
	{
		if (tabladedatos[1][2] == '6')
			tabladedatos[1][2] = jugador;
		else
		{
			cout << "YA ESTE LUGAR ESTA EN USO, INTENTA CON OTRO" << endl;
			insertarvariable();
		}
	}
	
	else if (num == 7)
	{
		if (tabladedatos[2][0] == '7')
			tabladedatos[2][0] = jugador;
		else
		{
			cout << "YA ESTE LUGAR ESTA EN USO, INTENTA CON OTRO" << endl;
			insertarvariable();
		}
	}
	
	else if (num == 8)
	{
		if (tabladedatos[2][1] == '8')
			tabladedatos[2][1] = jugador;
		else
		{
			cout << "YA ESTE LUGAR ESTA EN USO, INTENTA CON OTRO" << endl;
			insertarvariable();
		}
	}
	
	else if (num == 9)
	{
		if (tabladedatos[2][2] == '9')
			tabladedatos[2][2] = jugador;
		else
		{
			cout << "YA ESTE LUGAR ESTA EN USO, INTENTA CON OTRO" << endl;
			insertarvariable();
		}
	}
} 

void tipodejugador()
{  
 if (jugador == 'X' )
    jugador = 'O'; 
    else 
    jugador = 'X';
       
} 

char ganador()
{
	// CON X
	// Vertical
   if (tabladedatos[0][0] == 'X' && tabladedatos[0][1] == 'X' && tabladedatos[0][2] == 'X')
   return 'X';
   if (tabladedatos[1][0] == 'X' && tabladedatos[1][1] == 'X' && tabladedatos[1][2] == 'X')
   return 'X';
   if (tabladedatos[2][0] == 'X' && tabladedatos[2][1] == 'X' && tabladedatos[2][2] == 'X')
   return 'X';
   
   // Horizontal
   if (tabladedatos[0][0] == 'X' && tabladedatos[1][0] == 'X' && tabladedatos[2][0] == 'X')
   return 'X';
   if (tabladedatos[0][1] == 'X' && tabladedatos[1][1] == 'X' && tabladedatos[2][1] == 'X')
   return 'X';
   if (tabladedatos[0][2] == 'X' && tabladedatos[1][2] == 'X' && tabladedatos[2][2] == 'X')
   return 'X';
   
   //De lado
    if (tabladedatos[0][0] == 'X' && tabladedatos[1][1] == 'X' && tabladedatos[2][2] == 'X')
   return 'X';
   if (tabladedatos[0][2] == 'X' && tabladedatos[1][1] == 'X' && tabladedatos[2][0] == 'X')
   return 'X';

   
   // AHORA CON LA O
   
   	// Vertical
   if (tabladedatos[0][0] == 'O' && tabladedatos[0][1] == 'O' && tabladedatos[0][2] == 'O')
   return 'O';
   if (tabladedatos[1][0] == 'O' && tabladedatos[1][1] == 'O' && tabladedatos[1][2] == 'O')
   return 'O';
   if (tabladedatos[2][0] == 'O' && tabladedatos[2][1] == 'O' && tabladedatos[2][2] == 'O')
   return 'O';
   
   // Horizontal
   if (tabladedatos[0][0] == 'O' && tabladedatos[1][0] == 'O' && tabladedatos[2][0] == 'O')
   return 'O';
   if (tabladedatos[0][1] == 'O' && tabladedatos[1][1] == 'O' && tabladedatos[2][1] == 'O')
   return 'O';
   if (tabladedatos[0][2] == 'O' && tabladedatos[1][2] == 'O' && tabladedatos[2][2] == 'O')
   return 'O';
   
   //De lado
    if (tabladedatos[0][0] == 'O' && tabladedatos[1][1] == 'O' && tabladedatos[2][2] == 'O')
   return 'O';
   if (tabladedatos[0][2] == 'O' && tabladedatos[1][1] == 'O' && tabladedatos[2][0] == 'O')
   return 'O';
   
  return '/';
   
}

  
int main () 
{  
     r = 0;
     imprimirtabladedatos();
     while (1)
     {
     	r++;
     	insertarvariable();
     	imprimirtabladedatos();
     	
     	if (ganador() == 'X')
     	{ 
		   cout << " X ES EL GANADOR " << endl;
     	   break;
		}  
	    	else if (ganador() == 'O')
     	    { 
		       cout << " O ES EL GANADOR " << endl;
     	        break;
	      	} 
		
	             	else if (ganador() == '/' && r == 9)
	            	{ 
		              cout << " NADIE GANO, INTENTEN DE NUEVO " << endl;
     	              break;
	             	} 
		
		tipodejugador();
} 
     system("pause");
	 return 0; 

} 
 
    
    

