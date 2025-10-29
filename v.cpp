#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long A,B;
    char x;
    cin>> A >> x >> B;
    if((x == '<' && A < B)||(x == '>' && A > B)||(x == '=' && A == B))5>
        cout << "Right" << endl;
    else
        cout << "Wrong" << endl;
}
