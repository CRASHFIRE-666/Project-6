#include <iostream>
using namespace std;
int main()
{
    int a, b, c, n, r;
    
    cin >> a >> b >> c;
    
    n = (a / c) * (b / c);
    
    r = a * b - c * c * n;
    
    cout << n << " " << r << endl;
    
    return 0;
}
