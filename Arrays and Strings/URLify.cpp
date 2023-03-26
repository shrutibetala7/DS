// Create URL from string i.e. add %20 in place of whitespaces, in place
// eg -> my name -> my%20name%20

#include<iostream>
#include<string>
#include <sstream>

using namespace std;

//adding character by character
// string URLify(string a){
//     string result;
//     for(int i=0;i<=a.length();i++){
//         if(a[i]==' ')  //||a[i]=='\0'
//         {
//            result.append("%20");

//         }
//         else{
//           result.append(1,a[i]);
//         }
//     }
// return result;
// }

string URLify(string str){
stringstream ss(str);
string word,result;
while(ss>>word){
 result.append(word);
 result.append("%20");
}
return result.erase(result.length()-3);
}


int main(){
string input;
getline(cin,input);
cout<<URLify(input)<<" ";
return 0;
}
