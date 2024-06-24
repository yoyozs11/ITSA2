#include <iostream>
#define max 25

using namespace std;

int main()
{
    int n, output;
    int has_car;
    cin>>n;
    int schedule_arr[n][2];
    for(int i=0;i<n;i++)
    {
        //0: start time, 1:end time
        cin>>schedule_arr[i][0]>>schedule_arr[i][1];
    }
    output = 0;
    for(int i=0;i<n;i++)
    {
        has_car = 0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(schedule_arr[i][0]>=schedule_arr[j][1])
                {
                    schedule_arr[j][1] = max;
                    has_car=1;
                    break;
                }

            }
        }
        if(!has_car)
            output+=1;
    }
    printf("%d\n", output);
}
