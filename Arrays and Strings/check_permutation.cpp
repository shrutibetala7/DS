//to check if a given string is the permutation of other
//approach 1 -> sort thr strings and compare
//approach 2 -> adding the ASCII values and comparing the sum
//approach 3 -> using hashmap|hashtable  || Edge case -> the no. of times a letter repeats can't be checked

#include<iostream>
#include<algorithm>
using namespace std;
bool _checkPerm(string a,string b){
    // int arr[127];
    // std:fill_n(arr,127,0);
    int count=0,count2=0;
    for(int i=0;i<a.length();i++){
        // int pos=int(a[i]);
        // arr[pos]=arr[pos]+1;

        count= count +int(a[i]);
    }

    for(int i=0;i<b.length();i++){

       
        int pos=int(b[i]);
        count2=count2+pos;
        // if(arr[pos]==0)
        // {
        //     return false;
        // }
        // arr[pos]=arr[pos]+1;
    }
if(count2==count)
return true;
else return false;
}
int main(){
    string a,b;
    cin>>a>>b;
    _checkPerm(a,b)==true?cout<<"True":cout<<"False";
    return 0;

}