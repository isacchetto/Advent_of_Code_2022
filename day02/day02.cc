#include <bits/stdc++.h>
using namespace std;

int puzzle1() {
    // A=X=sasso=1 -> 0
    // B=Y=carta=2 -> 1
    // C=Z=forbici=3 -> 2
    // sconfitta=0 pareggio=3 vittoria=6
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

    return score;
}

int puzzle2() {
    // A=sasso=1 -> 0
    // B=carta=2 -> 1
    // C=forbici=3 -> 2
    // X=perdere
    // Y=pareggiare
    // Z=vincere
    // sconfitta=0 pareggio=3 vittoria=6
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

    return score;
}

int main() {
    cout<<puzzle1()<<endl;
    //cout<<puzzle2()<<endl;
    
    return 0;
}