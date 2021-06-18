#include <iostream>
using namespace std;
int main() {

//Ejercicio 4:  Se ingresa un entero por teclado. Se desea determinar
//si el número ingresado es primo o no. Utilice bucles "while".

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
