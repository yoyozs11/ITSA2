#include <iostream>

using namespace std;

int cutting(int length)
{
    if(length==1)
        return 1;
    int length_value = length;
    int cnt=0;
    for(int i=1;i<length_value;i++)
    {
        if((length-i)>=0)
        {
            length-=i;
            cnt++;
        }
        else
            break;
    }
    return cnt;
}

int main()
{
    int n;
    while(cin>>n)
        cout<<cutting(n)<<endl;
}
