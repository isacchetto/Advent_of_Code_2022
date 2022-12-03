#include <bits/stdc++.h>

using namespace std;
// A=sasso=1 -> 0
// B=carta=2 -> 1
// C=forbici=3 -> 2
// X=perdere
// Y=pareggiare
// Z=vincere
// sconfitta=0 pareggio=3 vittoria=6

int main() {
    ifstream cin("input.txt");
    char a,b;
    int enemy,score=0;

    while(cin>>a>>b) {
        // change char->int    (-1) to use '%3'
        enemy=a-'A';
        switch(b) {
            case 'X': 
                score+=((enemy+2)%3)+1;
                break;
            case 'Y': 
                score+=(enemy+1)+3;
                break;
            case 'Z':
                score+=6+((enemy+1)%3)+1;
                break;
        }
    }
    cout<<score<<endl;
    return 0;
}