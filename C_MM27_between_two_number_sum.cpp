#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int sum;
    while(cin>>a>>b)
    {
        sum=0;
        if(a<b)
        {
            int n = b-a+1;
            sum = (a+b)*n/2;
            /*for(int i=a;i<=b;i++)
                sum+=i;*/
        }
        else
        {
            int n = a-b+1;
            sum = (a+b)*n/2;
            /*for(int i=b;i<=a;i++)
                sum+=i;*/
        }
        cout<<sum<<endl;
    }
}
