#include <iostream>
/*
Fa�a um Programa que verifique se uma letra digitada � vogal ou consoante.
*/
using namespace std;

int main(){
    char nome;
    cout << "Digite um nome:.......";
    cin >> nome;

    if (nome=='a'||nome=='e'||nome=='i'||nome=='o'||nome=='u'||nome=='A'||nome=='E'||nome=='I'||nome=='O'||nome=='U'){
        cout  << "Esse s�o vagais:......."<<nome;
    }else
        cout << nome << "Essa s�o a consuantes:.......";



    return 0;
}
