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
    int sum = 0;
    for(auto it = my_vector.begin() ; it != my_vector.end() ; it++)
    {
        int tmp;
        tmp = *it;
        tmp = tmp*tmp*tmp;
        sum+=tmp;
    }
    cout<<sum<<endl;
}
