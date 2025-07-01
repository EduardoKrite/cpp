#include <iostream>
/* Fa�a um Programa que pe�a a temperatura em graus Farenheit,
transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).*/
using namespace std;

int main(){
    float ce, fr;
    cout << "Digite a sua temperatura Frareheit:...";
    cin >> fr;
    ce = (5*(fr-32)/9);

    cout<<  "Grau Celsius e:...."<<ce<<"\n\n";

    cout<< "Digite o seu grau Celsius:...";
    cin>> ce;

    fr = (ce *9/5)+32;

    cout << "Grau Frareheit:...."<<fr;


    return 0;
}
