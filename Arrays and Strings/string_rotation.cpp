//Method _isSubstring checks if one word is substring of other
//Given two strings, check if s2 is rotaion of s1 using one call to _isSubstring, rotation here refers to shift of chracters 
//like waterbottle and erbottlewat

#include<iostream>
#include<string>

using namespace std;
bool _isRotation(string a, string b){
 
   if(a.length()!=b.length()) return false;
   if(a==b) return false;

    //concatenate string a with a, and check if b is the substring of that concatenation
   string temp=a.append(a);
   //find returns the index if substring found or string::npos if not found
return (temp.find(b)!=string::npos);

}
int main(){
    string a,b;
    cin>>a>>b;
    _isRotation(a,b)==true?cout<<"True":cout<<"False";
    return 0;

}