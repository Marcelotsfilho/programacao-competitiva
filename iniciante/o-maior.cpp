#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){

    int A, B, C, MAIOR_AB, MAIOR_AC;
    cin >> A >> B >> C;

    MAIOR_AB = ((A+B)+abs(A-B))/2;
    MAIOR_AC = ((A+C)+abs(A-C))/2;

    if(MAIOR_AB > MAIOR_AC){
        cout << MAIOR_AB << " eh o maior" << endl;
    }else{
        cout << MAIOR_AC << " eh o maior" << endl;
    }
    
    return 0;
}