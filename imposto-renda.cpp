#include <bits/stdc++.h>

/*
Titulo: Imposto de renda - BEE 1051
link: https://judge.beecrowd.com/pt/problems/view/1051
*/

using namespace std;

int main(){

    float salario;
    cin >> salario;

    if(salario <= 2000.00){
        cout << "Isento" << endl;
    }else if(salario >= 2000.01 && salario <= 3000.00){
        cout << "R$ " << fixed << setprecision(2) << (salario - 2000.00)*0.08 << endl;
    }else if(salario >= 3000.01 && salario <= 4500.00){
        cout << "R$ " << fixed << setprecision(2) << (1000.00*0.08)+((salario - 3000.00)*0.18) << endl;
    }else if(salario > 4500.00){
        cout << "R$ " << fixed << setprecision(2) << (1000.00*0.08)+(1500.00*0.18)+((salario - 4500.00)*0.28) << endl;
    }

    return 0;
}