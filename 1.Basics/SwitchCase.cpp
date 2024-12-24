#include <iostream>
using namespace std;

int main() {
    //CODE1
    // int day = 4;

    // switch (day) {
    //     case 1:
    //         cout << "Monday";
    //         break;
    //     case 2:
    //         cout << "Tuesday";
    //         break;
    //     case 3:
    //         cout << "Wednesday";
    //         break;
    //     case 4:
    //         cout << "Thursday";
    //         break;
    //     case 5:
    //         cout << "Friday";
    //         break;
    //     case 6:
    //         cout << "Saturday";
    //         break;
    //     case 7:
    //         cout << "Sunday";
    //         break;
    //     default:
    //         cout << "Invalid";
    // }



//CODE2
    const int x = 10;
    const int y = 5;
    

    switch (x + y) {
        case 15:
            cout << "Result is 15." << endl;
            break;
        case 20:
            cout << "Result is 20." << endl;
            break;
        default:
            cout << "No match found." << endl;
    }

    return 0;
}