#include <bits/stdc++.h>
using namespace std;

bool plaindrome(int a)
{
    int rs =0;
    int s=a;
    while(s>0)
    {
        rs = rs*10 + s%10;
        s=s/10;
    }
    return rs==a;
}
bool div(int b)
{
    if(b%12==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    //number of queries/test cases
    int q=0;
    int n=0;
    cin >> q;
    while(q>0)
    {
        cin >> n;
        for(int i=0;i<=n;i++)
        {
            int a =i;
            int b=n-a;
            if(plaindrome(a)&&div(b))
            {
                cout << a << " " << b << "\n";
                break;
            }
        }
        q--;
    }
}