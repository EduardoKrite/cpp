#include <iostream>
/*

Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e
apresentar: A mensagem "Aprovado", se a média alcançada for maior ou igual a sete; A mensagem "Reprovado",
 se a média for menor do que sete; A mensagem "Aprovado com Distinção", se a média for igual a dez.
*/
using namespace std;

int main(){
    float nota1, nota2, nota3, nota4, media;
    cout << "Digite a Primeira nota:.....";
    cin >>nota1;

    cout << "Digite a Segundo nota:.....";
    cin >>nota2;

    cout << "Digite a Terceira nota:.....";
    cin >>nota3;

    cout << "Digite a Quarta nota:.....";
    cin >>nota4;

    media = (nota1+nota2+nota3+nota4)/4;
    if(media >=7){
        cout << "Sua nota foi:  "<<media<< "  Parabens você passou";
    } else if(media>=6){
        cout << "Sua nota foi:  "<<media<< "  Você ficou em recuperação";

    }else if(media >=5){
        cout << "Sua nota foi:  "<<media<< "  Você foi reprovado";
    }

    return 0;
}
