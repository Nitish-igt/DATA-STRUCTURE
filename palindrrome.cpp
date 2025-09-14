#include<iostream>
using namespace std;
bool palindrome( const string&s, int st, int end){
    // base 
    if(st>=end){
        return true;
    }
    // ek solve
    if(s[st]!=s[end]){
        return false;
    }
    // recusrion
     return palindrome(s,st+1, end-1);
}
int main(){
    string s;
    cout<<"enter the s"<<endl;
    cin>>s;
   bool ans= palindrome(s,0, s.size()- 1);
    if(ans){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
    
}