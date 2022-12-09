#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if (islower(c)) {           // c>='a' && c<='z"
        return c-'a'+1;
    }
    if (isupper(c)) {           // c>='A' && c<='Z"
        return c-'A'+27;
    }
    return 0;
}

int puzzle1() {
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
                break;                                      //because it stop at the first occurence (not sum 2 times the same commom letter)
            }
        }
        first_compartment.clear();
    }

    return sum;
}


// similar to set_intersection() 
char findCommon(string str1, string str2, string str3) {    // O(n1 + n2 + n3) + [ O(n*log(n)) for each sort string]
    sort(str1.begin(),str1.end());                          //sort to use the algorithm
    sort(str2.begin(),str2.end());
    sort(str3.begin(),str3.end());
    int i=0, j=0, k=0;
    char common;
    while (i < str1.size() && j < str2.size() && k < str3.size()) { // contiune until all string are ends
        // if all three char are equal => find common
        if (str1[i] == str2[j] && str2[j] == str3[k]) {
            common=str1[i];                                 // save the last char in common (not all)
            i++;
            j++;
            k++;
        }
        // if char1 < char2 => char1++
        else if (str1[i] < str2[j])
            i++;

        // if char2 < char3 => char2++
        else if (str2[j] < str3[k])
            j++;
 
        // here when char1 > char2 > char3 => char3 is the smallest => char3++
        else
            k++;
    }

    return common;
}

int puzzle2() {
    ifstream cin("input.txt");
    string rucksack1, rucksack2, rucksack3;
    int sum=0;

    while(cin>>rucksack1>>rucksack2>>rucksack3) {
        sum+= priority( findCommon(rucksack1,rucksack2,rucksack3) );
    }
    
    return sum;
}


int main() {
    //cout<<puzzle1()<<endl;
    cout<<puzzle2()<<endl;
    
    return 0;
}