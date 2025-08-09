#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){

    double a, b, c, delta;
    cin >> a >> b >> c;

    delta = pow(b, 2) - 4*a*c;
    if(delta < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }else{
        cout << "R1 = " << fixed << setprecision(5) << (-b + sqrt(delta))/(2*a) << endl;
        cout << "R2 = " << fixed << setprecision(5) << (-b - sqrt(delta))/(2*a) << endl;
    }
    return 0;
}