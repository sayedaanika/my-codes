#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long m = -10;
    for (int i = 1; i <= n; i++)
    {
        long long a;
        cin >> a;

        if (a > m)
            m = a;
    }
    cout << m << endl;
}
