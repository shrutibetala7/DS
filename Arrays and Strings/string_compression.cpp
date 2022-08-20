//compress string by displaying character with frequency
#include<iostream>
#include<string.h>
using namespace std;
string _compresString(string a){
string result;
int arr[27]={0};
for(int i=0;i<a.length();i++){
    int pos =int(a[i])-'a';
    arr[pos]++;
}
for(int i=0;i<27;i++){
    if(arr[i]>0){
        result.append(1,char(i+'a'));
        result.append(std::to_string(arr[i]));
    }
}

return result;
}
int main(){
  string a;
  cin>>a;
  cout<<_compresString(a);
  return 0;
}