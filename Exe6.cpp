#include <iostream>
/*
Fa�a um Programa que leia tr�s n�meros e mostre o maior deles.
e
Fa�a um Programa que leia tr�s n�meros e mostre o maior e o menor deles.
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
        cout << "Digite o numero maior �:....."<<num1<<endl;

    }else if (num2>num1&&num2>num3){
        cout << "Digite o numero maior �:....."<<num2<<endl;

    }else if (num3>num1&&num3>num2){
        cout << "Digite o numero maior �:....."<<num3<<endl;

    }

    if (num1<num2&&num1<num3){
        cout << "Digite o numero menor �:....."<<num1;

    }else if (num2<num1&&num2<num3){
        cout << "Digite o numero menor �:....."<<num2;

    }else if (num3<num1&&num3<num2){
        cout << "Digite o numero menor �:....."<<num3;

    }
    return 0;
}
