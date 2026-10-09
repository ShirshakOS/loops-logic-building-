// calculator using do while looop
// calculator using do while loop
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, choice;
    char ch;
    do
    {
        cout << "\nEnter num1 and num2: \n";
        cin >> num1 >> num2;
        cout << "Enter:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n0 to exit\n";
        cin >> choice;
        if (choice == 1)
        {
            cout << "SUM: " << (num1 + num2);
        }
        else if (choice == 2)
        {
            cout << "Difference: " << (num1 > num2) ? (num1 - num2) : (num2 - num1);
        }
        else if (choice == 3)
        {
            cout << "Product: " << num1 * num2;
        }
        else if (choice == 4)
        {
            cout << "Quotient: " << (num1 > num2) ? (num1 / num2) : (num2 / num1);
        }
        else if(choice==0)
        {
            break;
        }
    } while (1);
    return 0;
}