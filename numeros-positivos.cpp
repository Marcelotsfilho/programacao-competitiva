#include <bits/stdc++.h>

/*
Titulo: Numeros positivos - BEE 1060
link: https://judge.beecrowd.com/pt/problems/view/1060
*/

using namespace std;

int main(){

    vector<float> numeros(6);
    int cont = 0;
    for(int i = 0; i < 6; i++){
        cin >> numeros[i];
        if(numeros[i] > 0){
            cont++;
        }
    }
    cout << cont << " valores positivos" << endl;

    return 0;
}