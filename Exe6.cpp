#include <iostream>
/*
Faça um Programa que leia três números e mostre o maior deles.
e
Faça um Programa que leia três números e mostre o maior e o menor deles.
*/
using namespace std;

int main(){
    int num1,num2,num3;
    cout << "Digite um numero:......";
    cin >> num1;

    cout << "Digite um numero:......";
    cin >> num2;

    cout << "Digite um numero:......";
    cin >> num3;

    if (num1>num2&&num1>num3){
        cout << "Digite o numero maior é:....."<<num1<<endl;

    }else if (num2>num1&&num2>num3){
        cout << "Digite o numero maior é:....."<<num2<<endl;

    }else if (num3>num1&&num3>num2){
        cout << "Digite o numero maior é:....."<<num3<<endl;

    }

    if (num1<num2&&num1<num3){
        cout << "Digite o numero menor é:....."<<num1;

    }else if (num2<num1&&num2<num3){
        cout << "Digite o numero menor é:....."<<num2;

    }else if (num3<num1&&num3<num2){
        cout << "Digite o numero menor é:....."<<num3;

    }
    return 0;
}
