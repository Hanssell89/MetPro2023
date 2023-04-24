//Elabore un programa que permita leer
//un numero y muestre el antecesor y sucesor de
//dicho numero
#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int num;
    cout <<"Ingrese un numero:";
    cin >> num;
    cout << "El antecesor de " << num << " es: " << num-1 << "y el sucesor es:" << num+1 << endl;
    return 0;
}