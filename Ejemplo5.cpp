//Funciones
/* Leer un numero cualquiera y elevarlo al cubo si este es multiplo de 4 */
#include <iostream>
#include <math.h>
using namespace std;

//prototipo de funcion
bool esMultiplo4(int num);

int main(int argc, char const *argv[])
{
    /* code */
    int num;
    cout << "Dime un #: ";
    cin >> num;
    if(esMultiplo4(num)){
        cout << num << " elevado al cubo es " << pow(num, 3) << endl;
    }else{
        cout << num << " no es multiplo de 4" << endl;
    }
    return 0;
}

//funcion
bool esMultiplo4(int num){
    return num % 4== 0;
}