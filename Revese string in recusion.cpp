#include<iostream>
using namespace std;

void reveseString(string&s, int start, int end){
    // base case
    if(start>=end){
        return;
    }
    // ek solve
    swap(s[start], s[end]);
    // baaki ka recursion solve 
    reveseString(s,start+1, end-1);

}


int main(){
    string s;
    cout<<"enter the string : ";
    cin>>s;
    reveseString(s,0,s.size()-1);

    cout<<"S : "<<s;
}