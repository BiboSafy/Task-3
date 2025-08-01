#include <iostream>

using namespace std;

int main()
{
    int people;
    int icecream = 0;
    int input;
    int refused = 0;

    cout << "Icecream with Sara ?\n";
    cin >> icecream ;
    cout << "No. of people in line ?\n";
    cin >> people ;

    for (int i = 0 ; i < people ; i ++ )
        {
            cout << "Enter received/needed : ";
            cin >> input ;

            if (input > 0)
            {
                icecream = icecream + input;
                refused = refused;
                people -- ;
                cout << "Icecream left = " << icecream <<endl;
                cout << "People left = " << people <<endl;
                cout << "Refused = " << refused <<endl;
            }
            else if ( input < 0 && abs(input) > icecream)
            {
                icecream = icecream + input;
                refused++ ;
                cout << "Refused "  <<endl;
                cout << "Refused = " << refused <<endl;
                break;
            }
            else
            {
                icecream = icecream + input;
                people--;
                cout << "Icecream left = " << icecream <<endl;
                cout << "People left = " << people <<endl;
                cout << "Refused = " << refused <<endl;
            }
        }

    return 0;
}
