#include <bits/stdc++.h>
using namespace std;

void conversion(string buffer,int& min1,int& max1,int& min2,int& max2) {
    // create a substring that start from 1argoument (included) to 2argoument (not included)
    min1=stoi(buffer.substr(0, buffer.find("-")));                          // .find() return the pos of the first occ. of "-"
    max1=stoi(buffer.substr(buffer.find("-")+1,buffer.find(",")));          // +1 for non include "-"
    min2=stoi(buffer.substr(buffer.find(",")+1,buffer.find_last_of("-")));  // .find_last_of() return the pos of the last occ. of one of this char "-"
    max2=stoi(buffer.substr(buffer.find_last_of("-")+1,string::npos));      // string::npos = -1 , in unsigned int, "until the end of the string"

}

int puzzle1() {
    ifstream cin("input.txt");
    string buffer;
    int min1, max1;
    int min2, max2;
    int result=0;

    while(cin>>buffer) {

        // works only for one digit numbers
        //min1=stoi(string(1,buffer[0]));       // create a substring of one char and use stoi()
        //max1=stoi(buffer.substr(2,3));        // create a substring from 2 to 3 position
        //min2=atoi(&buffer[4]);                // take the address of buffer[4] because atoi require a pointer: char* c=&buffer[4]
        //max2=atoi(buffer.c_str()+6));         // use .c_str() or .data() to return a char* 

        conversion(buffer,min1,max1,min2,max2); // min e max passed by reference


        if(min1<=min2 && max1>=max2) {          // if 1 contain or equal to 2
            result++;
        }
        else if(min1>=min2 && max1<=max2) {     // if 2 contain or equal to 1
            result++;
        }
    }

    return result;
}

int puzzle2() {
    ifstream cin("input.txt");
    string buffer;
    int min1, max1;
    int min2, max2;
    int result=0;

    while(cin>>buffer) {
        conversion(buffer,min1,max1,min2,max2);
        if(min1>=min2 && min1<=max2 || min2>=min1 && min2<=max1) {  //min1 between 2 || min2 between 1
            result++;
        
        }
    }

    return result;
}

int main() {
    //cout<<puzzle1()<<endl;
    cout<<puzzle2()<<endl;
    
    return 0;
}