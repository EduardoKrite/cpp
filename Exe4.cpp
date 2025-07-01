#include <iostream>
/*
Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
o produto do dobro do primeiro com metade do segundo.
a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.*/
using namespace std;

int main(){
    int num1,num2;
    float num3,a,b,c;
    cout << "Digite o seu 1 numero interiro:.....";
    cin>> num1;

    cout << "Digite o seu 2 numero interiro:.....";
    cin>> num2;

    cout << "Digite o seu numero real:.....";
    cin>> num3;

    a= (num1*2)+(num2/2);

    b= (num1*3) +num3;

    cout<< "Primeira respota:....." << a << "\n";

    cout << "Segunda resposta:....." << b;

    return 0;
}
