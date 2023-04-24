//Leer el nombre de una persona y saludarla.
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char nombre[30];
    cout << "Dime cual es tu nombre: "; 
    cin >> nombre;
    cout << "Hola " << nombre << ", mucho gusto" << endl;
    return 0;
}
