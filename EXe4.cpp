#include <iostream>
/*
Faça um Programa que verifique se uma letra digitada é vogal ou consoante.
*/
using namespace std;

int main(){
    char nome;
    cout << "Digite um nome:.......";
    cin >> nome;

    if (nome=='a'||nome=='e'||nome=='i'||nome=='o'||nome=='u'||nome=='A'||nome=='E'||nome=='I'||nome=='O'||nome=='U'){
        cout  << "Esse são vagais:......."<<nome;
    }else
        cout << nome << "Essa são a consuantes:.......";



    return 0;
}
