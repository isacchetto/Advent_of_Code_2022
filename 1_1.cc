#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream cin("input.txt");
    int cal=0, massimo=0;               //int non e' di default 0
    string buffer;
    while(getline(cin,buffer)) {        //leggi una riga da cin e la mette in buffer  
        try {
            cal+=stoi(buffer);          //prova a trasformarlo in int, se non chi riesce (la tringa e' vuota) lancia una exeption
        }
        catch (invalid_argument& err) {
            massimo=max(massimo,cal);
            cal=0;
        }
    }
    massimo=max(massimo,cal);
    cout<<"massimo: "<<massimo<<endl;
    return 0;
}