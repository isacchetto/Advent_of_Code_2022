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
    vector<int> first_compartment;
    int sum=0;

    while(cin>>rucksack) {
        for(int i=0; i<rucksack.size()/2; i++) {
            first_compartment.push_back(rucksack[i]);           // add elements at the end of vector
        }
        for(int i=rucksack.size()/2; i<rucksack.size(); i++) {
            if(count(first_compartment.begin(),first_compartment.end(),rucksack[i])) {          // 
                sum+=priority(rucksack[i]);
            }
        }
        first_compartment.clear();
    }
    cout<<sum<<endl;

    return 0;
}