#include <iostream>
/*
Fa�a um Programa que verifique se uma letra
digitada � "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inv�lido.
*/
using namespace std;

int main(){
 char sexo;
 cout << "Digite o seu sexo [M]ou [F]:.......";
 cin >> sexo ;

 if(sexo== 'm'||sexo=='M'){
    cout << "Mesculino" <<endl;
 }else if (sexo=='f'||sexo=='F'){
    cout<< "feminino"<<endl;
 }else
    cout << "Error de sexo digite de novo";

    return 0;
}
