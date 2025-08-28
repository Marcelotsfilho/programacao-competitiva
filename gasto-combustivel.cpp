#include <bits/stdc++.h>

using namespace std;

int main(){

    int tempo, velocidade;
    cin >> tempo >> velocidade;
    float distancia;
    distancia = velocidade*tempo;
    
    cout << fixed << setprecision(3) << distancia/12 << endl;

    return 0;
}