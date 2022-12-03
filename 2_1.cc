#include <bits/stdc++.h>

using namespace std;
// A=X=sasso=1 -> 0
// B=Y=carta=2 -> 1
// C=Z=forbici=3 -> 2
// sconfitta=0 pareggio=3 vittoria=6

int main() {
    ifstream cin("input.txt");
    char a,b;
    int enemy,me,score=0;

    while(cin>>a>>b) {
        // change char->int    (-1) to use '%3'
        enemy=a-'A';
        me=b-'X';
        score+=(me+1);
        if(enemy==me)
            score+=3;
        else if((enemy+1)%3==me)
            score+=6;
    }
    cout<<score<<endl;
    return 0;
}