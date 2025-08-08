#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){

    int RAIO;
    cin >> RAIO;
    double VOLUME = (4.0/3)*pow(RAIO, 3)*3.14159;
    cout << "VOLUME = " << fixed << setprecision(3) << VOLUME <<endl;

    return 0;
}