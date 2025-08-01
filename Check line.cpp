#include <iostream>

using namespace std;

int main()
{
    int number;
    int programming = 0;
    int football = 0;
    int chess = 0;


    while (true) {
        cout << "Enter number : ";
        cin >> number;

        if (number == 0) {
            cout << "Line ended." << endl;
            break;
        }

        switch (number) {
        case 1:
            programming += 1;
            cout << "Programming = " << programming << endl;
            break;
        case 2:
            football += 1;
            cout << "Football = " << football << endl;
            break;
        case 3:
            chess += 1;
            cout << "Chess = " << chess << endl;
            break;
        default:
            cout << "Invalid" << endl;
            break;
        }
    }

    return 0;
}
