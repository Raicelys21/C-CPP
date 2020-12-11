#include<iostream> 
#include<iomanip> //Para ejecutar caracteres que no sean de ios, como por ejemplo "std::" 
#include<algorithm> //Se utiliza para ejecutar transform y find
#include<string>
#include<limits> // Definir varias de tipo entera, en mi caso streamsize

class ahorcado //Class: sirve para definir objetos los cuales deseo mantener a un alcance limitado o ilimitado.
{
private: // Indica que no todas las funciones se pueden asociar con esta, solo las que estan unidas y las funciones que se encuentran internamente. 
    std::string palabra{ "0" };
	std:: string respcorrecta{""};
    int intentos{ 0 };
    char caracter{ 0 }; 
    bool ejecutar{ 1 }, letras{ 1 }, tipodecaracter{ 1 }; 

public: //Cualquier funcion puede ser utilizada por una que la necesite.

    bool salir{ 0 };  

ahorcado() 
{

    ejecutar = 1; 
    while (ejecutar) 
	{
		        std::cout <<  "\t\t  __________________  \n"
                      "\t\t |                  | \n"
                      "\t\t |     Ahorcado     | \n"
                      "\t\t |__________________| \n\n\n";
                      
            std::cout <<  "\t\t  __________________  \n"
                      "\t\t |                  | \n"
                      "\t\t |    Bienvenido    | \n"
                      "\t\t |__________________| \n\n\n";
			
        std::cout <<  "\t\t  __________________  \n"
                      "\t\t |                  | \n"
                      "\t\t |    Jugar = 1     | \n"
                      "\t\t |    Salir = 2     | \n"
                      "\t\t |__________________| \n\n\n"
                       "\t\t      => ";
                
                
            std::cin >> caracter;  
			
			//Abrir juego 
            if (caracter == '1') 
			{
                ejecutar = 0;
                system("cls");
                adivinapalabra(); 
            }
            //Cerrar juego 
            else if (caracter == '2') 
			{
                system("cls");
                ejecutar = 0;
                salir = 1;
            }
            else
			//Limpiar pantalla 
			{
                system("cls");
            }
    }
};

void adivinapalabra()
{
        // Elegir entre una palabra random de las diez (Utilizar un arreglo string)
        std::string plbs[] = {"hardware", "software", "microsoft", "windows", "computadora", "programa", "compilar", "ingeniero", "condicion", "laptop"};
        
        //Escoger palabra de forma aleatoria o random (Usar las funciones rand() y srand() para seleccionar un número aleatorio de 0 a 9)
         palabra = plbs[rand() % 10];
        std::transform(palabra.begin(), palabra.end(), palabra.begin(), tolower); 
        
        //Ignora un maximo de elementos, pero como el maximo no està especificado, este imprime todos.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

       //convertir letras de caracteres en rayas 
        for (unsigned i = 0; i < palabra.length(); ++i)
            respcorrecta += "_";

        //Limpiar pantalla y iniciar juego
        system("cls");
        juego();  
}

 void juego() 
{

        int i = 0;
        ejecutar = 1;

        while (ejecutar) {
            graficos();
            
            /*Mientras a la el icono desconocido de i, que permite al menos entre 16 y 22 variables,
			 va a ir acccediendo hasta imprimir todas las rayas que tiene las palabras, es el espacio donde ingresarla*/
            for (unsigned i = 0; i < palabra.length(); ++i) 
			{
                std::cout <<  respcorrecta[i] << " ";
            }
            // Imprimir la pista de las palabras
            std::cout << "\t\t   \n"
			             "   Pista: Las palabras estan asociadas a la ingenieria en sistema y computacion. ";
            //Mostrar los intentos que faltan
            std::cout << "\t\t   \n" "\t Tienes " << intentos << " de 6 intentos posibles";
            // Imprimir todas las letras usadas
            std::cout << "\t\t   \n" << "\t Ultimo caracter utilizado: " << caracter;
             
            // Lugar donde agregar tu letra
            if (letras == 1)
			{  
                std::cout << "\t\t   \n"
				"\t\t Letra = " ; std::cin >> caracter; // Esto permite ver  la letra que elegiste
            }
            //EL caracter tiene que ser mayor que 65 y menos que 90, si cumple con esos requisitos se le suma 32.
            if (caracter <= 90 && caracter >= 65)
                caracter += 32;
            //Si el caracter es de tipo numerico, el tipo de caracter que devuelve es 0
            if (caracter != '#')
                tipodecaracter = 0;
            //Si el caracter es un numer envia 1 y si es una letra envia 0 
            if (caracter == '#' && letras == 1 && tipodecaracter == 1)
			{
                caracter = palabra[0];
                letras = 0;
            }
            //Buscar si una de los caracteres se encuentra en la palabra, mientras no sea el caracter buscado que imprima 
            i = palabra.find(caracter);
            while (palabra.find(caracter, i) != std::string::npos) //Ejecuta eso hasta el final.
			//npos: Este valor, cuando se usa como el valor para un parámetro len (o sublen) en las funciones miembro de la cadena, significa "hasta el final de la cadena".
			{
                respcorrecta[palabra.find(caracter, i)] = caracter; //Por cada caracter que sea igual al de la palabra a y se aumenta una vez, hasta completar el numero de caracter que tiene la palabra.
                i++;
            }
            //Sumar las fallas del jugador
            if (palabra.find(caracter) == std::string::npos)  //Si caracter se marca como no encontrado, los intentos de van a ir aumentando.
			{
                intentos++;
                std::cout << "\a";
            }
            //Administrar fallos, si se pierde, se va a dirigir a menu de opciones.
            if (intentos == 6) 
			{
                system("cls");
                opciones();
            }
            else if (respcorrecta == palabra) 
			{
                system("cls");
                opciones();
            }
            system("cls");
        }

    }
inline void opciones() 
{
        ejecutar = 1;
        while (ejecutar) 
		{
            if (intentos == 6) // Si pierdes, va a imprimir lo siguiente y la palabra que no adivinaste.
			{

                std::cout  << std::setw(5) << 
                    "\t\t  __________________  \n"
                      "\t\t |                  | \n"
                      "\t\t |    Perdiste !    | \n"
                      "\t\t |__________________| \n\n\n"
                      "\t\t La palabra correcta era \n" 
                      "\t\t  __________________  \n"
                      "\t\t |                  | \n"
                      "\t\t |     "<< palabra <<"     | \n"
                      "\t\t |__________________| \n\n\n";
            }
            else // Si se completan todas las variables, va a entrar a opciones y va a ejecutar con la cual se cumplan los requisitos.
			{
                std::cout << std::setw(5)  <<
				      "\t\t  __________________  \n"
                      "\t\t |                  | \n"
                      "\t\t |    Ganaste!      | \n"
                      "\t\t |__________________| \n\n\n";
            }
            //Imprime nuevamente el menu, en caso de reinicar o 1 va a iniciar el juego nuevamente, de lo contrario, va a salir.
            std::cout <<"\t         ____________________\n"
                    "\t\t |                  |\n"
                    "\t\t |    Reiniciar = 1 |\n"
                    "\t\t |    Salir = 2     |\n"
                    "\t\t |__________________|\n\n\n"
                    "\t\t         => ";
                    
            //Imprimir por pantalla para que se vea que elegiste.
            std::cin >> caracter;
            
            //Reiniciar el juego
            if (caracter == '1')  
			{
                ejecutar = 0;

                system("cls");
                intentos = 0;
                letras = 1;
                tipodecaracter = 1;
                palabra = "0";
                respcorrecta = "";
                adivinapalabra();
            }
            //Cerrar juego
            else if (caracter == '2') 
			{
                system("cls");
                ejecutar = 0;
                salir = 1;
            }
            //Limpiar pantalla
            else 
			{
                system("cls");
            }
        }
}

inline void graficos() 
{
        if (intentos == 0) 
		{            std::cout <<
            "\t\t   +----+      \n"
			"\t\t   |    |      \n"
			"\t\t   |           \n"
			"\t\t   |           \n"
			"\t\t   |           \n"
			"\t\t   |           \n"
			"\t\t  =============\n";}
        else if (intentos == 1) 
		{            std::cout <<
            "\t\t   +----+      \n"
			"\t\t   |    |      \n"
			"\t\t   |    O      \n"
			"\t\t   |           \n"
			"\t\t   |           \n"
			"\t\t   |           \n"
			"\t\t  =============\n";}
        else if (intentos == 2) 
		{           std::cout <<
            "\t\t   +----+      \n"
			"\t\t   |    |      \n"
			"\t\t   |    O      \n"
			"\t\t   |    |      \n"
			"\t\t   |           \n"
			"\t\t   |           \n"
			"\t\t  =============\n";}
        else if (intentos == 3) 
		{            std::cout <<
            "\t\t   +----+      \n"
			"\t\t   |    |      \n"
			"\t\t   |    O      \n"
			"\t\t   |   /|      \n"
			"\t\t   |           \n"
			"\t\t   |           \n"
			"\t\t  =============\n"; }
        else if (intentos == 4) 
		{            std::cout <<
            "\t\t   +----+      \n"
			"\t\t   |    |      \n"
			"\t\t   |    O      \n"
			"\t\t   |   /|\\    \n"
			"\t\t   |           \n"
			"\t\t   |           \n"
			"\t\t  =============\n";}
        else if (intentos == 5) 
		{            std::cout <<
            "\t\t   +----+     \n"
			"\t\t   |    |     \n"
			"\t\t   |    O     \n"
			"\t\t   |   /|\\   \n"
			"\t\t   |     \\   \n"
			"\t\t   |          \n"
			"\t\t  ============\n";}
        else if (intentos == 6) 
		{            std::cout <<
            "\t\t   +----+      \n"
			"\t\t   |    |      \n"
			"\t\t   |    O      \n"
			"\t\t   |   /|\\    \n"
			"\t\t   |   / \\    \n"
			"\t\t   |Ahorcado   \n"
			"\t\t  ============ \n";}
}
};

int main() 
{
    std::ios::sync_with_stdio(0);
    /* sync permite sincronizar las opciones llamando nuevamente a la funcion*/
    ahorcado juego;
    if (juego.salir == 1) return 0;
    std::cin.get();
    return 0;
}
