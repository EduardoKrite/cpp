#include <iostream>
/*
As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus colaboradores
e lhe contrataram para desenvolver o programa que calcular� os reajustes.

Fa�a um programa que recebe o sal�rio de um colaborador e o reajuste segundo o seguinte crit�rio, baseado no sal�rio atual:
*/
using namespace std;

int main(){
    float salario,aumento,proc;
    cout << "Digite o seu salario:....";
    cin >> salario;

    if(salario<=280){
        aumento = (0.20*salario)+salario;
        proc = (0.20*salario);
        cout << "Seu salario e:....."<<salario<<endl;
        cout << "O procental foi de:.......20%"<<endl;
        cout << "O valor aumentado:......"<<proc<<endl;
        cout << "Seu salario reajusrado para:....."<<aumento<<endl;


    } else if(salario<=700){
        aumento = (0.15*salario)+salario;
        proc = (0.15*salario);
        cout << "Seu salario e:....."<<salario<<endl;
        cout << "O procental foi de:.......15%"<<endl;
        cout << "O valor aumentado:......"<<proc<<endl;
        cout << "Seu salario reajusrado para:....."<<aumento<<endl;
    }else if (salario<=1500){
        aumento = (0.10*salario)+salario;
        proc = (0.10*salario);
        cout << "Seu salario e:....."<<salario<<endl;
        cout << "O procental foi de:.......10%"<<endl;
        cout << "O valor aumentado:......"<<proc<<endl;
        cout << "Seu salario reajusrado para:....."<<aumento<<endl;
    }else if (salario>=1500){
        aumento = (0.05*salario)+salario;
        proc = (0.05*salario);
        cout << "Seu salario e:....."<<salario<<endl;
        cout << "O procental foi de:.......5%"<<endl;
        cout << "O valor aumentado:......"<<proc<<endl;
        cout << "Seu salario reajusrado para:....."<<aumento<<endl;
    }



    return 0;
}
