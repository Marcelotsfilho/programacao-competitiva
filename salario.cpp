#include <bits/stdc++.h>

using namespace std;

int main(){

    int NUMBER, HORAS;
    double VALOR, SALARIO;
    cin >> NUMBER >> HORAS >> VALOR;
    SALARIO = (HORAS*VALOR);
    cout << "NUMBER = " << NUMBER << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << SALARIO << endl;

    return 0;
}