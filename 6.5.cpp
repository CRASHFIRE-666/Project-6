#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if (year % 100 > 0)
    {
        cout << year / 100 + 1<< endl;
    }
    else
    {
        cout << year / 100 << endl;
    }
    return 0;
}
