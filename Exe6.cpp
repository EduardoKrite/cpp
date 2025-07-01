#include <iostream>/*
Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal,
utilizando as seguintes fórmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7*/
using namespace std;

int main(){
    float altura, pesoH, pesoM;
    cout << "Digite a sua altura:....";
    cin>>altura;
    pesoH = (72.7*altura) - 58;
    pesoM = (62.1 *altura) - 44.7;

    cout << "Seu peso ideal de um Homem:......" << pesoH << endl;
    cout << "SEu peso ideal de um Mulher:....." <<pesoM <<endl;


    return 0;
}
