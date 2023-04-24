#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, temp;
    cout << "Dime un numero: ";
    cin >> a;
    cout << "Dime otro numero: ";
    cin >> b;
    cout << "Combinando.....";
    temp = a;
    a = b;
    b = temp;
    cout << "Nuevos valores"<<endl;
    cout << a << endl << b << endl;
    return 0;
}
