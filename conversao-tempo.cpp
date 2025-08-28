#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, hora, minuto, segundo;
    cin >> N;

    hora = N/3600;
    N = N % 3600;
    minuto = N/60;
    N = N % 60;
    segundo = N;

    cout << hora << ":" << minuto << ":" << segundo << endl; 

    return 0;
}