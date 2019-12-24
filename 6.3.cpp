#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int k, n;
    
    cin >> k >> n;
    
    if (k > 0 && k < 366 && n > 0 && n < 8)
    {
        cout << (k - 2 + n) % 7 + 1;
    }
    else
    {
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
    }
    
    
    
    return 0;
}
