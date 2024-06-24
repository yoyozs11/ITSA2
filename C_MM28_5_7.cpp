#include <iostream>

using namespace std;

int main()
{
    int N;
    int tmp;
    while(cin>>N)
    {
        tmp=35;
        while(tmp<=N)
        {
            cout<<tmp;
            if(N-tmp>=35)
                cout<<" ";
            tmp+=35;
        }
        cout<<endl;
    }
}
