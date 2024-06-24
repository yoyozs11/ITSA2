#include <iostream>

using namespace std;

int main()
{
    int radius_square = 10000;
    int x, y;
    while(cin>>x>>y)
    {
        if(x*x+y*y>radius_square)
            cout<<"outside\n";
        else
            cout<<"inside\n";
    }
}
