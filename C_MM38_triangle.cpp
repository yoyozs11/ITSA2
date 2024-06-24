#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    while(cin>>A>>B>>C)
    {
        int fit=0;
        if(A+B>C && B+C>A && A+C>B)
            fit = 1;
        if(fit)
            cout<<"fit\n";
        else
        cout<<"unfit\n";
    }
}
