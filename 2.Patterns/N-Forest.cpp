#include <bits/stdc++.h>
using namespace std;

void pattern1(int N)
{
    // This is the outer loop which will loop for the rows.
    for(int lines=0; lines<N; lines++){
        // This is the inner loop which here, loops for the columns
        // as we have to print a rectangular pattern.
        for(int col=0; col<N; col++){
            cout << "* ";
        }
       
        // As soon as N stars are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    // int N = 5;
    // pattern1(N);

int testcases;
cout<<"Input the number of test cases:"<<endl;
cin>>testcases;
for(int i=0; i<testcases; i++){
int n;
cout<<"For the "<<(i+1)<<"th test case:"<<endl;
cout<<"enter the value of n:"<<endl;
cin>>n;
pattern1(n);
}

    return 0;
}