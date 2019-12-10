#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите число"<<endl;
    int a,n;
    cin>>a;
    n=((a-1)/100)+1;
    cout<<"Столетие="<<n<<endl;
    return 0;
}
