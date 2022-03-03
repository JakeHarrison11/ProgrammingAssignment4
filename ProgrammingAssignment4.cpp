#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int option;
    double p = 0.0;
    const double GOLD = 0.01;
    const double SILVER = 0.02;
    const double BRONZE = 0.04;
    double BASEFEE = 1200.0;

    cout << "Rhoda's Strikeforce Gym\n";

    cout << "Option 1-4: ";
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
        cout << "bye bitch";
        exit(0);
    }
    for (double i = 1.0; i <= 10.0; i += 1.0) {
        cout << "Year " << i << "    " << p * (i - 1.0) * BASEFEE + BASEFEE << endl;
    }
}
