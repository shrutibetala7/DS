//Implement an algorithm to determine if a sting has all unique characters
#include<iostream>
#include<stdio.h>
using namespace std;

bool isUnique(string s){
    int arr[127];
    std::fill_n(arr,127,0);

    for(int i=0;i<s.length();i++){
         int index=int(s[i]);
         arr[index]=arr[index]+1;
        if(arr[index]>1)
        {return false;}
}
return true;}
int main(){
    string s;
    cin>>s;
    bool _isUnique = isUnique(s);
    _isUnique==true?cout<<"True":cout<<"False";

}