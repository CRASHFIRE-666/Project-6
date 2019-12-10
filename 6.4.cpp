#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите числа"<<endl;
    int a, b, c, k, S;
    cin>>a>>b>>c;
    k=(a/c)*(b/c);
    S=(a*b)-k;
    cout<<"Количество квадратов="<<k<<", Остаток="<<S<<endl;
}
