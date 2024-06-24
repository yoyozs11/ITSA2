#include <iostream>
#include <vector>

using namespace std;

class graph
{
public:
    int pixel;
    int is_edge;
};

int main()
{
    int N, n, m;
    cin>>N;
    while(N!=0)
    {
        cin >> n >> m;
        graph my_graph[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>my_graph[i][j].pixel;
                my_graph[i][j].is_edge = 0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(my_graph[i][j].pixel == 1)
                {
                    if(i-1 != -1)
                    {
                        if(my_graph[i-1][j].pixel == 0)
                        {
                            my_graph[i][j].is_edge = 1;
                        }
                    }
                    if(i+1 != n)
                    {
                        if(my_graph[i+1][j].pixel == 0)
                        {
                            my_graph[i][j].is_edge = 1;
                        }
                    }
                    if(j-1 != -1)
                    {
                        if(my_graph[i][j-1].pixel == 0)
                        {
                            my_graph[i][j].is_edge = 1;
                        }
                    }
                    if(j+1 != m)
                    {
                        if(my_graph[i][j+1].pixel == 0)
                        {
                            my_graph[i][j].is_edge = 1;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(my_graph[i][j].is_edge == 1)
                {
                    cout<<"0";
                }
                else
                {
                    cout<<"_";
                }
                cout<<" ";
            }
            if(i != n-1)
                cout<<endl;
        }
        if(N!=1)
            cout<<endl<<endl;
        else
            cout<<endl;
        N--;
    }
}
