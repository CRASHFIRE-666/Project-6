#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите числа"<<endl;
    int n,s,k;
    cin>>n>>k;
    s=(n+k)%7+1;
    cout<<s<<endl;
    return 0;
}
