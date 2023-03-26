//check if a given string is a permutaion of a palidrome
#include<iostream>
#include<string.h>
using namespace std;
bool _checkPalin(string a){

int counter1=0;
int arr[33];
std::fill_n(arr,33,0);

//filling the hash table with the frequency of charcters
for(int i=0;i<a.length();i++){
    int pos = int(a[i])-'a';
    if(a[i]==' ')
    continue; 
    //pos=32;     //ASCII for space is 32
    arr[pos]++;
    //cout<<"Value of counter at"<<pos<<" "<<arr[pos]<<"\n";
}

//checking if the frequency isn't even or if more than one charcter is appearing only once

for(int i=0;i<32;i++){
    if(counter1>1)
     return false;

    if(arr[i]%2!=0)
     { 
        counter1++;
       
     }
    
}
return true;
}

int main(){
string a;
getline(cin,a);

_checkPalin(a)==true?cout<<"True":cout<<"False";
return 0;
}