#include <bits/stdc++.h>

/*
Titulo: Aumento Salário - BEE 1048
link: https://judge.beecrowd.com/pt/problems/view/1048
*/

using namespace std;

int main(){

    float inicial, final;
    cin >> inicial;

    if(inicial >= 0 && inicial <= 400.00){
        final = inicial + inicial*0.15;
        cout << "Novo salario: " << fixed << setprecision(2) << final << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << inicial*0.15 << endl;
        cout << "Em percentual: 15 %" << endl;
    }else if(inicial > 400.00 && inicial <= 800.00){
        final = inicial + inicial*0.12;
        cout << "Novo salario: " << fixed << setprecision(2) << final << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << inicial*0.12 << endl;
        cout << "Em percentual: 12 %" << endl; 
    }else if(inicial > 800.00 && inicial <= 1200.00){
        final = inicial + inicial*0.10;
        cout << "Novo salario: " << fixed << setprecision(2) << final << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << inicial*0.10 << endl;
        cout << "Em percentual: 10 %" << endl;
    }else if(inicial > 1200.00 && inicial <= 2000.00){
        final = inicial + inicial*0.07;
        cout << "Novo salario: " << fixed << setprecision(2) << final << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << inicial*0.07 << endl;
        cout << "Em percentual: 7 %" << endl;
    }else if(inicial > 2000.00){
        final = inicial + inicial*0.04;
        cout << "Novo salario: " << fixed << setprecision(2) << final << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << inicial*0.04 << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}