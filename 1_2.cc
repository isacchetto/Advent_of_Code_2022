#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("input.txt");
    int cal=0, massimo=0;
    vector<int> massimi;
    string buffer;
    while(getline(cin,buffer)) {
        try {
            cal+=stoi(buffer);
        }
        catch (invalid_argument& err) {
            massimi.push_back(cal);
            cal=0;
        }
    }
    massimi.push_back(cal);
    sort(massimi.begin(),massimi.end());
    cout<<"Somma 3 massimi: "<<massimi[massimi.size()-1]+massimi[massimi.size()-2]+massimi[massimi.size()-3]<<endl;
    return 0;
}