#include <iostream>

using namespace std;

int edades[1000];
int tam=0;

bool validarUsuario(int idU, int pw);
int menu();
void ingresarEdad(int edad);
void evaluarEdadesMayores();
float calcularPromedio();

int menu(){
    int op;
    cout << "1. Agregar edades " << endl;
    cout << "2. Evaluar edades mayores de edad " << endl;
    cout << "3. Calcular el promedio de las edades " << endl;
    cout << "4. Salir " << endl;
    cout << "Digite su opcion: ";
    cin >> op;
    return op;
}

void ingresarEdad(int edad){
    edades[tam] = edad;
    tam++;
}

void evaluarEdadesMayores(){
    for(int i = 0; i < tam; i++){
        if(edades[i] >= 18){
            cout << edades[i] << endl;
        }
    }
}

float calcularPromedio(){
    int suma = 0;
    float prom = 0;
    for(int i=0; i < tam; i++){
        suma += edades [i];
        //suma = suma + edades[i];
    }
    prom = suma / tam;
    return prom;
}

bool validarUsuario(int idU, int pw){
    if(idU ==13 && pw==123) return true;
    return false;
}