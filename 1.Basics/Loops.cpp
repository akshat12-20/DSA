#include <iostream>
using namespace std;

int main() {

// For Loop


//CODE1
    // int i;
    // for (i = 1; i <= 10; i++) {
    //     cout << "Hey, Striver, this is the " << i << "'th iteration" << endl;
    // }
    // cout<<"The final value of i is:"<<i<<endl;


//CODE2
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << "i = " << i << ", j = " << j << endl;
    //         // Nested loop code
    //     }
    // }// depends, if we need to process column wise, we run the outer loop to the number of columns times and vice-versa for rows.

//CODE3
    // for (int i = 1; i <= 25; i += 5) {
    //     cout << "i = " << i << endl;
    // }


//While Loop

//CODE1
// int n = 5;
//     int factorial = 1;

//     while (n > 0) {
//         factorial *= n;
//         n--;
//     }

//     cout << "Factorial of 5 is: " << factorial << endl;


//CODE2
int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    // Using 'break' to exit the loop early when the target is found
    for (int num : numbers) {
        if (num == target) {
            cout << "Target found: " << target << endl;
            break; // Exit the loop immediately
        }
        cout << "Checking: " << num << endl;
    }

    // Using 'continue' to skip specific elements
    for (int num : numbers) {
        if (num % 2 == 0) {
            continue; // Skip even numbers
        }
        cout << "Odd number: " << num << endl;
    }


    return 0;
}