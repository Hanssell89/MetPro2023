#include<iostream>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2, pot;
    cout << "Dime un numero: ";
    cin >> num1;
    cout << "Dime otro numero: ";
    cin >> num2;
    cout << num1 << " elevado a " << 2 << " es " << pow(num1, 2) << endl;
    cout << num2 << " elevado a " << 3 << " es " << pow(num2, 3);

    return 0;
}
