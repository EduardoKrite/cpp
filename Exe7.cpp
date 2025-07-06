#include <iostream>
/*
Faça um programa que pergunte o preço de três produtos e
informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
*/
using namespace std;

int main(){
    int Arroz, Feijao,Batata;
    cout << "digite do arroz e o valor:.....";
    cin>> Arroz;

    cout << "digite do Feijao e o valor:.....";
    cin>> Feijao;

    cout << "digite do Batata e o valor:....";
    cin>> Batata;

    if(Arroz<Feijao&& Arroz<Batata){
        cout << "O valor do arroz esta parado  compre primeiro:....."<< Arroz;
    }else if(Feijao<Arroz&& Feijao<Batata){
        cout << "O valor do feijao esta parado  compre primeiro:....." <<Feijao;
    }else if(Batata<Arroz&& Batata<Feijao){
        cout << "O valor do batata esta parado  compre primeiro:....."<<Batata;
    }

    return 0;
}
