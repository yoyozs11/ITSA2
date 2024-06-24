#include <iostream>

using namespace std;

int main()
{
    int power_arr[31];
    power_arr[0] = 1;
    for(int i=1;i<31;i++)
    {
        power_arr[i] = 2*power_arr[i-1];
    }
    int tmp;
    while(cin>>tmp)
    {
        if(tmp>=31)
            cout<<"Value of more than 31\n";
        else
            cout<<power_arr[tmp]<<endl;
    }

}
