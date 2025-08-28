#include <bits/stdc++.h>

/* 
Titulo: Lanche - BEE 1038
link: https://judge.beecrowd.com/pt/problems/view/1038
*/

using namespace std;

int main(){

    int cod, qtde;
    float total;
    cin >> cod >> qtde;

    if(cod == 1){
        total = qtde*4.0;
    }else if(cod == 2){
        total = qtde*4.5;
    }else if(cod == 3){
        total = qtde*5.0;
    }else if(cod == 4){
        total = qtde*2.0;
    }else{
        total = qtde*1.5;
    }
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}