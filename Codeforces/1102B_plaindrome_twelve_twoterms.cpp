#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long pal[12]={0,1,2,3,4,5,6,7,8,9,22,11};

    int q=0;
    cin >> q;

    while(q>0)
    {
        long long n =0;
        cin >> n;

        int rem = n%12;
        long long a = pal[rem];
        long long b = n-a;
        if(b>=0)
        {
            cout << a << " "<< b << "\n";

        }
        else{
            cout <<"-1\n";
        }
        q--;
    }
    return 0;
}