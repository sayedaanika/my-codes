#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long sum = 1;
        for (int i = 2; i <= n; i++)
            {
               sum = sum * i;
            }
        cout << sum <<endl;
    }
}
