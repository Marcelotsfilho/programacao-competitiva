#include <bits/stdc++.h>

using namespace std;

int main(){

    string NOME;
    double SALARIO, TOTAL_VENDAS;

    cin >> NOME;
    cin >> SALARIO >> TOTAL_VENDAS;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << (SALARIO + (0.15*TOTAL_VENDAS));

    return 0;
}