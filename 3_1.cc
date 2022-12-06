#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if(c>='a' && c<='z') {
        return c-'a'+1;
    }
    if(c>='A' && c<='Z') {
        return c-'A'+27;
    }
    return 0;
}

int main() {
    ifstream cin("input.txt");
    string rucksack;
    set<char> first_compartment;                             // set = no duplicates
    int sum=0;

    while(cin>>rucksack) {
        for(int i=0; i<rucksack.size()/2; i++) {
            first_compartment.insert(rucksack[i]);          // add only new elements
        }
        for(int i=rucksack.size()/2; i<rucksack.size(); i++) {
            if(first_compartment.count(rucksack[i])) {      // search if rucksack[i] is in first_compartment (return 1 or 0)
                sum+=priority(rucksack[i]);
                break; 
            }
        }
        first_compartment.clear();
    }
    cout<<sum<<endl;

    return 0;
}