//Find the maximum and minimum element in an array

#include<bits/stdc++.h>

using namespace std;
void getMinMax(int arr[],int n){
    int mm[2];
    mm[0]=mm[1]=arr[0];
    
    for(int i=0;i<n;i++){
        if(mm[0]>arr[i])
         {mm[0]=arr[i];}
        if(mm[1]<arr[i])
         {mm[1]=arr[i];}
    }
   cout<<"Min "<<mm[0]<<" "<<"Max "<<mm[1];
}
int main(){
    int arr[10],n,*p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
getMinMax(arr,n);
    
return 0;
}