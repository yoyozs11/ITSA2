#include <iostream>

using namespace std;

int main()
{
    int x, y;
    while(cin>>x>>y)
    {
        if(x>=0 && x<=100 && y>=0 && y<=100)
            cout<<"inside\n";
        else
            cout<<"outside\n";

    }
}
