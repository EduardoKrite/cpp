#include <iostream>
/*Faça um Programa que leia três números e mostre-os em ordem decrescente.
*/
using namespace std;

int main(){
    int num1,num2,num3, temp;
    cout << "Digite o numero:.....";
    cin>> num1;
     cout << "Digite o numero:.....";
    cin>> num2;
     cout << "Digite o numero:.....";
    cin>> num3;

    if(num1<num2){
        temp<=num1;
        num1<=num2;
        num2<=temp;
    }
    if(num1<num3){
        temp<=num1;
        num1<=num3;
        num3<=temp;
    }
    if(num2<num3){
        temp<=num2;
        num2<=num3;
        num3<=temp;
    }
    cout << num1 << ">" <<num2 << ">" <<num3;

    return 0;
}
