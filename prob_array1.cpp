
#include<iostream>
using namespace std;

int* revArray(int a[],int n){
int p1=0,p2=n-1,temp;
while(p1<n/2){
temp=a[p1];
a[p1]=a[p2];
a[p2]=temp;
    p1++;
    p2--;
}  
return a;
}

int main(){
int n,a[10];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int *p;
// 1 2 3 4 5 6 7 8
p=revArray(a,n);
cout<<"New array:";
for(int i=0;i<n;i++){
    cout<<" "<<p[i];
}

return 0;