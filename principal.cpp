/*Elabore un programa que permita
leer id y la pw de un usuario, si sus
credenciales son validas mostrar el siguiente menu:
1. Agregar edades 
2. Evaluar edades mayores de edad
3. Calcular el promedio de las edades
4. Salir
*/

#include <iostream>
#include "funciones.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int op=0, edad, idU, pw, cont=0;
    bool isOK=false;
    do{
        system("cls");
        system("color 0F");
        cout << "ID: ";
        cin >> idU;
        cout << " password: ";
        cin >> pw;

        isOK = validarUsuario(idU, pw);
        if (isOK == false){
            cont++;
            system("color cf");
            cout << "\nCredenciales invalidas";
        }
        if(cont == 3) return 0;
        system("pause");
    }while (isOK != true);
    do{
        op = menu();
        switch (op)
        {
        case 1:
            /* code */
            cout << "Ingresa la edad: ";
            cin >> edad;
            ingresarEdad(edad);
            system("pause");
            break;
        case 2:    
            evaluarEdadesMayores();
            system("pause");
            break;
        case 3:
            cout << "El promedio de las edades es: ";
            cout << calcularPromedio();
            system("pause");
            break;
        case 4:  
            cout << "Adios..." << endl;
            system("pause");
            break;      
        default:
            break;
        }
    }while(op != 4); 
    return 0;
}
