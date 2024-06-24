#include <iostream>

using namespace std;

int main()
{
    int a, b, r;
    cin>>b>>r;
    do
    {
        a=b;
        b=r;
        r=a%b;
    }
    while(r);
    cout<<b<<endl;
}
