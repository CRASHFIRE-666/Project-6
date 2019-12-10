#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите число"<<endl;
    int k,s;
    cin>>k;
    s=k%7;
    cout<<s<<endl;
    return 0;
}
