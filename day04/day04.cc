#include <bits/stdc++.h>
using namespace std;

void conversion(string buffer,int& min1,int& max1,int& min2,int& max2) {

    min1=stoi(buffer.substr(0, buffer.find("-")));
    max1=stoi(buffer.substr(buffer.find("-")+1,buffer.find(",")));
    min2=stoi(buffer.substr(buffer.find(",")+1,buffer.find_last_of("-")));
    max2=stoi(buffer.substr(buffer.find_last_of("-")+1,string::npos));

}

int puzzle1() {
    ifstream cin("input.txt");
    string buffer;
    int min1, max1;
    int min2, max2;
    int result=0;
    while(cin>>buffer) {
        
        // works only for one digit numbers
        //min1=stoi(string(1,buffer[0]));       //create a substring of one char and use stoi()
        //max1=stoi(buffer.substr(2,3));        //create a substring from 2 to 3 position
        //min2=atoi(&buffer[4]);                //take the address of buffer[4] because atoi require a pointer: char* c=&buffer[4]
        //max2=atoi(buffer.c_str()+6));         //use .c_str() or .data() to return a char* 

        conversion(buffer,min1,max1,min2,max2); //min e max passati per riferimento


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

    return 0;
}

int main() {
    cout<<puzzle1()<<endl;
    //cout<<puzzle2()<<endl;
    
    return 0;
}