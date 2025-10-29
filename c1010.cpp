#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long c1,u1,c2,u2;
    float p1,p2;
    cin>>c1>>u1>>p1;
    cin>>c2>>u2>>p2;
    cout<< fixed << setprecision(2) << "VALOR A PAGAR: R$ " << ((u1 * p1) + (u2 * p2)) << endl;
}
