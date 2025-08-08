#include <bits/stdc++.h>

using namespace std;

int main(){

    double valor;
    cin >> valor;
    int N = (int)valor;
    int centavos = (int)round((valor - N) * 100);

    cout << "NOTAS:" << endl;
    cout << N/100 << " nota(s) de R$ 100.00" << endl;
    N = N%100;
    cout << N/50 << " nota(s) de R$ 50.00" << endl;
    N = N%50;
    cout << N/20 << " nota(s) de R$ 20.00" << endl;
    N = N%20;
    cout << N/10 << " nota(s) de R$ 10.00" << endl;
    N = N%10;
    cout << N/5 << " nota(s) de R$ 5.00" << endl;
    N = N%5;
    cout << N/2 << " nota(s) de R$ 2.00" << endl;
    N = N%2;

    cout << "MOEDAS:" << endl;
    cout << N << " moeda(s) de R$ 1.00" << endl;
    cout << centavos/50 << " moeda(s) de R$ 0.50" << endl;
    centavos = centavos%50;
    cout << centavos/25 << " moeda(s) de R$ 0.25" << endl;
    centavos = centavos%25;
    cout << centavos/10 << " moeda(s) de R$ 0.10" << endl;
    centavos = centavos%10;
    cout << centavos/5 << " moeda(s) de R$ 0.05" << endl;
    centavos = centavos%5;
    cout << centavos/1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}