// #include<iostream>
// #include<math.h>
// #include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
string name; 
cout<<"Enter your name:";
//cin>>name;// only take input upto the whitespace.
getline(cin, name);// will take the entire string
cout<<"your name is:"<<name;

return 0;
}
