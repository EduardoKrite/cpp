#include <iostream>
/*Faça um Programa que peça dois números e imprima o maior deles.*/
using namespace std;

int main(){

    int num1,num2;

    cout<< "Digite o primeiro numero:.....";
    cin >> num1;

    cout << "Digite o segundo numero:.....";
    cin>> num2;

    if(num1>num2){
        cout << "O primeiro numero e maior:......"<< num1 << " que " << num2 << " O segundo";
    }else   if(num2>num1){
        cout << "O segundo numero e maior:........"<< num2 << " que " << num1 << " O primeiro";

        }else
                cout << "Os numero são igual";

    return 0;
}
