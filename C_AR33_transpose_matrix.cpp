#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin>>N>>M;
    if(N != 0 && M != 0)
    {
        int input_arr[N][M];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                cin>>input_arr[i][j];
            }
        }
        for(int j=0;j<M;j++)
        {
            for(int i=0;i<N;i++)
            {
                cout<<input_arr[i][j];
                if(i!=N-1)
                    cout<<" ";
                else
                    cout<<endl;
            }
        }
    }
}
