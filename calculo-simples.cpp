#include <bits/stdc++.h>

using namespace std;

int main(){

    int PECA_1, CONT_1, PECA_2, CONT_2;
    double VALOR_1, VALOR_2, TOTAL;
    
    cin >> PECA_1 >> CONT_1 >> VALOR_1;
    cin >> PECA_2 >> CONT_2 >> VALOR_2;
    TOTAL = ((CONT_1*VALOR_1) + (CONT_2*VALOR_2));

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << TOTAL << endl;

    return 0;
}