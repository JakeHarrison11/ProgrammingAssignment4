// Jake Harrison
// Gym Membership Calculator
// 3/2/22
// COP2000

/*
PSEUDOCODE:
1. Make variables happen
2. Main loop starts
    a. Display menu
    b. start another loop with a switch statement that checks input as well as makes an option selection
    c. set the "answer" variable to the basefee static double (this helps us with our calculations and the main loop looping)
    d. calculate how the membership adds up over 10 years with a for loop and display it
    e. set some variables back to their default values and loop it back again
    f. make some whitespace
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int option;
    double answer = 0.00;
    double p = 0.00;
    static double GOLD = 1.01;
    static double SILVER = 1.02;
    static double BRONZE = 1.04;
    static double BASEFEE = 1200.00;

    while (1) {
        cout << "Rhoda's Strikeforce Gym Membership Fee Calculator\n------------------------------------------------------\n\n1. Gold\n2. Silver\n3. Bronze\n4. Quit\n\n";

        //do some selecting
        while (p == 0) {
            cout << "Please select one of the above options. > ";
            cin >> option;
            switch (option) {
            case 1:
                p = GOLD;
                break;
            case 2:
                p = SILVER;
                break;
            case 3:
                p = BRONZE;
                break;
            case 4:
                cout << "Thank you for using the calculator. Goodbye!";
                exit(0);
            default:
                cout << "Invalid input detected. Please try again.\n";
            }
        }

        //do the math
        answer = BASEFEE;
        for (double i = 1; i <= 10; i++) {
            cout << setprecision(0) << "Year" << setw(4) << i;
            cout << setw(4) << fixed << setprecision(2) << "$" << answer << endl;
            answer *= p;
        }

        //do some resetting
        p = 0;
        option = NULL;
        cout << endl << endl;
    }
}
