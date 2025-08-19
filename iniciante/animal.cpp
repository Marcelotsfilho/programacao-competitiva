#include <bits/stdc++.h>

/*
Titulo: Animal - BEE 1049
link: https://judge.beecrowd.com/pt/problems/view/1049
*/

using namespace std;

int main(){

    string sub_reino, classes, alimentar, especie;
    cin >> sub_reino >> classes >> alimentar;

    if(sub_reino == "vertebrado" && classes == "ave" && alimentar == "carnivoro"){
        cout << "aguia" << endl;
    }else if(sub_reino == "vertebrado" && classes == "ave" && alimentar == "onivoro"){
        cout << "pomba" << endl;
    }else if(sub_reino == "vertebrado" && classes == "mamifero" && alimentar == "onivoro"){
        cout << "homem" << endl;
    }else if(sub_reino == "vertebrado" && classes == "mamifero" && alimentar == "herbivoro"){
        cout << "vaca" << endl;
    }else if(sub_reino == "invertebrado" && classes == "inseto" && alimentar == "hematofago"){
        cout << "pulga" << endl;
    }else if(sub_reino == "invertebrado" && classes == "inseto" && alimentar == "herbivoro"){
        cout << "lagarta" << endl;
    }else if(sub_reino == "invertebrado" && classes == "anelideo" && alimentar == "hematofago"){
        cout << "sanguessuga" << endl;
    }else if(sub_reino == "invertebrado" && classes == "anelideo" && alimentar == "onivoro"){
        cout << "minhoca" << endl;
    }

    return 0;
}