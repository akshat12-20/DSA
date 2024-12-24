#include<bits/stdc++.h>
using namespace std;

//Array is always passed by reference.
void doSomething(int arr[], int n){
arr[0]+=100;
cout<<"Value inside function of 1st element: "<<arr[0]<<endl;
}


//pass by reference: passing the address
// void doSomething(int &number){
// cout<<number<<endl;
// number++;
// cout<<number<<endl;
// number++;
// cout<<number<<endl;
// }

//pass by value: making a copy
// void doSomething(int number){
// cout<<number<<endl;
// number++;
// cout<<number<<endl;
// number++;
// cout<<number<<endl;
// }
//pass by value: making a copy
void printName(string n){
cout<<"Hey "<<n<<endl;
}


int main(){

//CODE1
// string name;
// cout<<"what's your name:";
// getline(cin, name);
// //passing by value
// printName(name);

//CODE2
// int num1, num2;
// cout<<"Enter two numbers:";
// cin>>num1>>num2;
// int minimum=min(num1,num2);//pre-defined/in-built function in maths class.
// cout<<"Minimum of those numbers is:"<<minimum<<endl;


//CODE3-->Pass by value
// int num=10;
// doSomething(num);
// cout<<"The number:"<<num<<endl;// will still give 10, not the incremented one by the function. Since, only its copy was passed not the actual one(address).



//CODE4-->Pass by reference: passing the actual address.
// int num=10;
// doSomething(num);
// cout<<"The number:"<<num<<endl;

//CODE4
int size=5;
int arr[size];
for(int i=0; i<size; i++){
    cout<<i<<"th element is: ";
    cin>>arr[i];
}
//arrays are always passed by reference.
doSomething(arr, size);
cout<<"Value inside main of 1st element: "<<arr[0]<<endl;

return 0;
}