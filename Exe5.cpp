#include <iostream>
/*Tendo como dados de entrada a altura de uma pessoa,
 construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58*/
using namespace std;

int main(){
    float altura , peso;
    cout<< "Digite a sua altura:......";
    cin >> altura;

    peso = (72.2*altura) -58;

    cout<< "SEu peso ideal e:......" <<peso<<"KG";

    return 0;
}
