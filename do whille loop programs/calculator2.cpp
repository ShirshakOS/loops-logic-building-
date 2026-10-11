// calculator 2
// using do while loop
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "---CALCULATOR---\n";
    do
    {
        cout << "Number 1: ";
        cin >> a;
        cout << "Number 2: ";
        cin >> b;
        cout << "Press:\n1 FOR ADDITION\n2 FOR SUBTRACTION\n3 FOR DIVISION\n4 FOR MULTIPLICATION\n0 TO EXIT\n";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "SUM: " << (a + b) << endl;
        }
        else if (choice == 2)
        {
            cout << "DIFFERENCE: " << (a > b) ? (a - b) : (b - a)) << endl;
        }
        else if (choice == 3)
        {
            cout << "QUOTIENT: " << ((a > b) ? (a / b) : (b / a)) << endl;
        }
        else if (choice == 4)
        {
            cout << "PRODUCT: " << (a * b) << endl;
        }
        else if (choice == 0)
        {
            break;
        }
    } while (true);
    return 0;
}