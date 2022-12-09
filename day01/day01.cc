#include <bits/stdc++.h>
using namespace std;

int puzzle1() {
    ifstream cin("input.txt");          // non è necessario chiudere gli ifstream
    int cal=0, massimo=0;               // int non e' di default 0
    string buffer;
    while(getline(cin,buffer)) {        // leggi una riga da cin e la mette in buffer  
        try {
            cal+=stoi(buffer);          // prova a trasformarlo in int, se non chi riesce (la tringa e' vuota) lancia una exeption
        }
        catch (invalid_argument& err) {
            cal=0;
        }
        massimo=max(massimo,cal);
    }
    
    return massimo;
}

int puzzle2() {
    ifstream cin("input.txt");
    int cal=0, massimo=0;
    vector<int> massimi;
    string buffer;
    while(getline(cin,buffer)) {
        try {
            cal+=stoi(buffer);
        }
        catch (invalid_argument& err) {
            massimi.push_back(cal);             // inserisci 'cal' in fondo al vettore 'massimi'
            cal=0;
        }
    }
    massimi.push_back(cal);
    sort(massimi.begin(),massimi.end());

    return massimi[massimi.size()-1]+massimi[massimi.size()-2]+massimi[massimi.size()-3];   // somma 3 massimi
}

int main() {
    cout<<puzzle1()<<endl;
    //cout<<puzzle2()<<endl;
    
    return 0;
}