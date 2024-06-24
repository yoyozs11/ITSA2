#include <iostream>
#include <string>

using namespace std;

int main()
{
    //A123456789
    //P = x1 + 9*x2 + 8*n1 + 7*n2 + 6*n3 + 5*n4 + 4*n5 + 3*n6 + 2*n7 + n8 +n9
    string input_string;
    cin>>input_string;
    char letter = input_string[0];
    int n1, n2, n3, n4, n5, n6, n7, n8, n9;
    int P = 0;
    int mul = 8;
    for(int i=1;i<=9;i++)//n1 to n9
    {
        string tmp_str;
        tmp_str = input_string[i];
        int tmp_int = stoi(tmp_str);
        if(i == 9)
        {
            P+=tmp_int;
        }
        else
        {
            P+=mul*tmp_int;
            mul--;
        }
    }

    int x1, x2;
    switch (letter) {
    case 'A':
        x1 = 1;
        x2 = 0;
        break;
    case 'B':
        x1 = 1;
        x2 = 1;
        break;
    case 'C':
        x1 = 1;
        x2 = 2;
        break;
    case 'D':
        x1 = 1;
        x2 = 3;
        break;
    case 'E':
        x1 = 1;
        x2 = 4;
        break;
    case 'F':
        x1 = 1;
        x2 = 5;
        break;
    case 'G':
        x1 = 1;
        x2 = 6;
        break;
    case 'H':
        x1 = 1;
        x2 = 7;
        break;
    case 'J':
        x1 = 1;
        x2 = 8;
        break;
    case 'K':
        x1 = 1;
        x2 = 9;
        break;
    case 'L':
        x1 = 2;
        x2 = 0;
        break;
    case 'M':
        x1 = 2;
        x2 = 1;
        break;
    case 'N':
        x1 = 2;
        x2 = 2;
        break;
    case 'P':
        x1 = 2;
        x2 = 3;
        break;
    case 'Q':
        x1 = 2;
        x2 = 4;
        break;
    case 'R':
        x1 = 2;
        x2 = 5;
        break;
    case 'S':
        x1 = 2;
        x2 = 6;
        break;
    case 'T':
        x1 = 2;
        x2 = 7;
        break;
    case 'U':
        x1 = 2;
        x2 = 8;
        break;
    case 'V':
        x1 = 2;
        x2 = 9;
        break;
    case 'X':
        x1 = 3;
        x2 = 0;
        break;
    case 'Y':
        x1 = 3;
        x2 = 1;
        break;
    case 'W':
        x1 = 3;
        x2 = 2;
        break;
    case 'Z':
        x1 = 3;
        x2 = 3;
        break;
    case 'I':
        x1 = 3;
        x2 = 4;
        break;
    case 'O':
        x1 = 3;
        x2 = 5;
        break;
    }
    P += x1 + 9*x2;
    int check = 0;
    if(P%10 == 0)
    {
        check = 1;
    }
    if(check)
    {
        cout<<"CORRECT!!!"<<endl;
    }
    else
    {
        cout<<"WRONG!!!"<<endl;
    }
}
