// given two strings check if they have a single edit or not
//three edits can be performed. insert,remove or replace a character
#include<iostream>
#include<string.h>
using namespace std;
bool _checkEdit(string a,string b){
int arr[27];
std::fill_n(arr,27,0);

int counter=0; //for checking replacement

for(int i=0;i<a.length();i++){
    int pos=int(a[i])-'a';
    arr[pos]++;
}

for(int i=0;i<b.length();i++){
    int pos=int(b[i])-'a';
    if(arr[pos]==0)
    {
        arr[pos]++;
        counter++;
    }
    //allowing only one replacement
    if(counter>1)
     return false;   
}

  return true;  
}
int main(){
    string a,b;
    cin>>a>>b;
    _checkEdit(a,b)==true?cout<<"True":cout<<"False";

    return 0;
}