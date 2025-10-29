#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,s;
    cin>>a>>b>>s;
    long long x = (a + b + abs(a - b))/ 2 ;
    cout<< ((x + s + abs(x - s))/ 2) << " eh o maior" <<endl;
}
