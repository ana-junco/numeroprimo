#include <iostream>
using namespace std;
int main() {

//Ejercicio 4:  Se ingresa un entero por teclado. Se desea determinar
//si el número ingresado es primo o no. Utilice bucles "while".

//1)Inicio
//2)Leer numero, n=2, band
//3)Ingresar un numero
//4)numero
//5)while (band && n< numero)
//6)Si(numero % n== 0)
//6.1) band = false
//7)caso contrario
//8) n = n+1
//9)Imprimir si el numero es primo o no
//10)Fin


        int numero, n=2;
        bool band = true;

        cout<<"Ingresar un numero: ";
        cin>>numero;

        while (band && n < numero) {
            if (numero % n == 0)
                band = false;
            else
                n = n + 1;
        }
        if(band)

            cout<<"El numero es primo";

        else
            cout<<"El numero no es primo";

    return 0;
}
