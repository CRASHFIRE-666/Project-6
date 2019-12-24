#include <iostream>
using namespace std;
int main()
{
    
    setlocale(LC_ALL, "Russian");
    int k;
    
    cin >> k;
    
    if (k > 0 && k < 366)
    {
        cout << k % 7 << endl;
    }
    else
    {
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
    }
    
    
    
    return 0;
}
