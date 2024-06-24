#include <iostream>

using namespace std;

int det_val(int arr[])
{
    int value=0;
    value += arr[0]*arr[4]*arr[8];
    value += arr[1]*arr[5]*arr[6];
    value += arr[2]*arr[3]*arr[7];
    value -= arr[2]*arr[4]*arr[6];
    value -= arr[1]*arr[3]*arr[8];
    value -= arr[0]*arr[5]*arr[7];
    return value;
}

int main()
{
    int input_arr[9];
    for(int i=0;i<9;i++)
    {
        cin>>input_arr[i];
    }
    cout<<det_val(input_arr)<<endl;
}
