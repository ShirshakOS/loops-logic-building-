#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {1, 2, 3,
                   4, 5, 6,
                   7, 8, 9};
    int row[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        row[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            row[i] += a[i][j];
        }
    }
    cout << "Sum of row 1: " << row[0] << endl;
    cout << "Sum of row 2: " << row[1] << endl;
    cout << "Sum of row 3: " << row[2] << endl;
    int column[3];
    for (int i = 0; i < 3; i++)
    {
        column[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            column[i] += a[j][i];
        }
    }
    cout << "Sum of column 1: " << column[0] << endl;
    cout << "Sum of column 2: " << column[1] << endl;
    cout << "Sum of column 3: " << column[2] << endl;
    return 0;
}