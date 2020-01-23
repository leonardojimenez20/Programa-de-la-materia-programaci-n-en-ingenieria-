#include <iostream>
using namespace std;

int main ()
{
    float b, c, d;
    int a;

    cout<<"Menu de operaciones posibles " <<endl;
    cout<<" 1. Suma " <<endl;
    cout<<" 2. Resta " <<endl;
    cout<<" 3. Multiplicacion " <<endl;
    cout<<" 4. Division " <<endl;
    cout<<" 5. Salir " <<endl;

    cout<<"Que operacion desea realizar? " <<endl;
    cin>> a;



    switch (a)
    {
        case 1:
         cout<<"Ingrese el primer numero " <<endl;
         cin>> b;
         cout<<"Ingrese el segundo numero " <<endl;
         cin>> c;
          d= b + c;
         cout<<"El resultado de la suma es " <<d <<endl;

        break;

        case 2:
        cout<<"Ingrese el primer numero " <<endl;
        cin>> b;
        cout<<"Ingrese el segundo numero " <<endl;
        cin>> c;
         d= b - c;
        cout<<"El resultado de la resta es " <<d <<endl;

        break;

        case 3:
        cout<<"Ingrese el primer numero " <<endl;
        cin>> b;
        cout<<"Ingrese el segundo numero " <<endl;
        cin>> c;
         d= b * c;
        cout<<"El resultado de la multiplicacion es " <<d <<endl;

        break;

        case 4:
        cout<<"Ingrese el primer numero " <<endl;
        cin>> b;
        cout<<"Ingrese el segundo numero " <<endl;
        cin>> c;
         d= b / c;
        cout<<"El resultado de la division es " <<d <<endl;

        break;

        case 5:
         cout<<"Hasta luego! "  <<endl;

        break;

        default:
            cout<<"El numero que ingreso no tiene ninguna operacion asignada " <<endl;



    }





    return 0;
}
