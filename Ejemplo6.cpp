/* Elabore un programa que permita realizar las siguientes operaciones:
    1. Leer un numero y obtener la tabla de multiplicar
    2. Leer dos numeros y decir el mayor de dichos #
    3. Leer x cantidad de numeros e imprimir el mas alto
    4. Salir
*/
#include <iostream>
using namespace std;
   
void obtTabla(int num);
int obtMayor(int num1, int num2);
int obtMasAlto(int vector[], int tam);

void menu(){
    cout << "1. Leer un numero y obtener la tabla de multiplicar\n";
    cout << "2. Leer dos numeros y decir el mayor de dichos #\n";
    cout << "3. Leer x cantidad de numeros e imprimir el mas alto\n";
    cout << "4. Salir\n";
    cout << "Digite su opcion: ";
} 

main(){
    int op = 0;
    int vector[500];
    int tam =0;
    do{
        system("cls");
        system("color A5");
        menu();
        cin >> op;
        switch (op);
        {
            case 1:
                /* code */
                system("cls");
                cout << "Dime un #: ";
                cin >> num;
                obtTabla(num);
                break;
                case 2:
                cout << "Dime un num ";
                cin >> num1;
                cout << "Dime otro num: ";
                cin >> num2;
                cout << "Calculo del mayor de dos numeros "<<endl;
                break;
                case 3:
                break;
                case 4:
                break;
                default:
                cout << " "

        }    
    }
}

void obtTabla(int num){
    cout << "La tabla del " << num << " es \n";
    system("color A1");
    for(int i = 1, i <= 12; i++){
        cout << num << " + " << i << " = " << num +i << endl;
    }
    system("pause");
}

int obtMayor(int num1, int num2){
    if(num1 > num2) return num1;
    else if(num2 > num1) return num2;
    else{
    cout << "Ambos numeros son iguales. \n";
    return 0;
    }
}

int obtMasAlto(int vector[], int tam){
    int mayor = vector[0];
    for (int i = 1; i < tam; i++){
    if(vector[i]> mayor) mayor = vector[i];
    }
    return mayor;
}