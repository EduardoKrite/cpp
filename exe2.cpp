#include <iostream>
/*
Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
*/
using namespace std;

int main(){
    float num, neg;
    cout << "Digite o seu numero:........";
    cin >> num;
    neg = num *(-1);

    cout << "Numero Positivo:......."<<num<<endl;

    cout << "Numero Negativo:......."<<neg<<endl;


    return 0;
}
