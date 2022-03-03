#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int option;
    double p = 0.00;
    double GOLD = 0.01;
    double SILVER = 0.02;
    double BRONZE = 0.04;
    double BASEFEE = 1200.01;

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

    for (double i = 1.00; i <= 10.00; i += 1.00) {
        cout << "Year " << i << "    " << fixed << setprecision(2) << p * (i - 1.00) * 1200.00 + 1200.00 << endl;
    }
}
