
#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,result;
    char s,q;
    cin >> a>> s>> b>> q>> c;
    if(s == '+' )
        if(a + b == c)
            cout << "Yes" <<endl;
        else
            cout << a + b <<endl;


    else if(s == '-')
        if(a - b == c)
        cout << "Yes" <<endl;
        else
            cout << a - b <<endl;


    else if(s == '*')
        if(a * b == c)
        cout << "Yes" <<endl;
        else
            cout << a * b << endl;
    else
        cout<< result <<endl;

}
