#include <iostream>

using namespace std;

int main()
{
    int money;
    cin>>money;
    int ten, five, one;
    ten = money/10;
    money%=10;
    five = money/5;
    money%=5;
    one = money;
    cout<<"NT10="<<ten<<endl<<"NT5="<<five<<endl<<"NT1="<<one<<endl;
}
