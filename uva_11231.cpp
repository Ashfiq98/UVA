#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==0 and b==0 and c==0)
            break;
        if(c==0)
            cout<<(a-7)*(b-7)/2<<endl;
        else
            cout<<((a-7)*(b-7)+1)/2<<endl;
    }

    return 0;
}
