
/* Mayor
   Nahuel de Campos
   19/05/15
*/

#include <iostream>
using namespace std;

int num;
int mayor = 0;

int main()
{
    cout << "\n TRABAJO PRACTICO #6";
    cout << "\n -------------------\n";
    do{
        cout << "\n Ingrese un numero (o 0 para terminar): ";
        cin >> num;
        if (num > mayor)
            mayor = num;
    }
    while (num !=0);
    cout << "El numero mayor es: " << mayor << "\n\n";
}
