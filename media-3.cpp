#include <bits/stdc++.h>

/*
Titulo: Média 3 - BEE 1040
link: https://judge.beecrowd.com/pt/problems/view/1040
*/

using namespace std;

int main(){

    double n1, n2, n3, n4, media, exame;
    cin >> n1 >> n2 >> n3 >> n4;

    media = (n1*2 + n2*3 + n3*4 + n4)/10;

    cout << "Media: " << fixed << setprecision(1) << media << endl;
    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if(media < 5.0){
        cout << "Aluno reprovado." << endl;
    }else if(media >= 5.0 && media <= 6.9){
        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        media = (media + exame)/2;
        if(media >= 5.0){
            cout << "Aluno aprovado." << endl;
        }else if(media < 5.0){
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << media << endl;
    }

    return 0;
}