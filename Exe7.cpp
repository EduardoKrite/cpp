#include <iostream>
/*Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento di�rio de seu trabalho.

Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo
(50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.

Jo�o precisa que voc� fa�a um programa que leia a vari�vel peso (peso de peixes) e calcule o excesso.

Gravar na vari�vel excesso a quantidade de quilos al�m do limite e na vari�vel multa
o valor da multa que Jo�o dever� pagar. Imprima os dados do programa com as mensagens adequadas.*/
using namespace std;

int main(){
    float pescado, media;

    cout << "Digite a quantidade de peixe pescado:......";
    cin >> pescado;

    if(pescado>=51){
        media=pescado*4;
        cout<< "vc exedeu o limite de peixe vc vai pagar:...." << media<<"R$ de imposto" <<endl;
    }else
        cout << "Parabens vc n�o exedeu o limite ";

    return 0;
}
