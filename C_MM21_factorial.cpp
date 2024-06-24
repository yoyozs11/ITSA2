#include <iostream>

using namespace std;

int main()
{
    long long arr[20];
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2;i<20;i++)
    {
        arr[i] = i*arr[i-1];
    }
    int tmp;
    while(cin>>tmp)
    {
        cout<<arr[tmp]<<endl;
    }
}
