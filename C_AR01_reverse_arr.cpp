#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> my_vector;
    int input;
    while(cin>>input)
    {
        my_vector.push_back(input);
    }
    for(auto rit = my_vector.rbegin() ; rit != my_vector.rend() ; rit++)
    {
        if(next(rit) == my_vector.rend())
        {
            cout<<*rit<<endl;
        }
        else
        {
            cout<<*rit<<" ";
        }
    }
    //cout<<endl;
}
