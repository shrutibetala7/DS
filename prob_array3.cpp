//Find the kth maximum and minimum element in an array

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int arr[10],n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
sort(arr,arr+n);
cin>>k;

cout<<arr[k-1]<<endl;
cout<<arr[n-k];
    
return 0;
}