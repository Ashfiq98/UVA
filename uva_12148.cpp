///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define ld long double
#define pll pair<ll, ll>
#define vpp vector<pair<ll, ll>>
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a, b) memset(a, b, sizeof(a))
#define all(vtor) vtor.begin(), vtor.end()
#define rall(vtor) vtor.rbegin(), vtor.rend()

#define pi 2 * acos(0.0)
#define tani(a) atan(a) / (pi / 180)
#define sini(a) asin(a) / (pi / 180)
#define cosi(a) cos(a) / (pi / 180)
#define cos(a) cos(a *pi / 180)
#define sin(a) sin(a *pi / 180)
#define tan(a) tan(a *pi / 180)
const ll mod = 1e9 + 7;

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

#define EPS 1e-13
#define maxii 32000
ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }
 bool leap_year(ll n)
 {
     if(n%400==0 or (n%4==0 and n%100!=0))
     return 1;
     else
     return 0;
 }

int main()
{
    // ll c=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // avoiding collision using unordered_map only in CF
    //map_name.load_factor(0.25);
    //map_name.reserve(1024);

    // #ifndef ONLINE_JUDGE
    //     freopen("D:/Code_c++/input.txt", "r", stdin);
    //     freopen("D:/Code_c++/output.txt", "w", stdout);
    // #endif
    ll t;
    while(cin>>t)
    {
        if(t==0)
        break;
        ll pd,pm,py,pc,d,m,y,c;
        ll sum=0,day=0;
     for(ll i=1;i<=t;i++)
     { 
        cin>>d>>m>>y>>c;
        if(i==1)
        {
            pd = d;
            pm = m;
            py = y;
            pc = c;
        }
        else
        {
            if(m==pm and py==y and d-pd==1)
            {
              sum+=(c-pc);
              day++;
            }
            else if(y-py==1 and pm==12 and m==1 and pd==31 and d==1)
            {
                 sum+=(c-pc);
                 day++;
            }
            else if(pm==2 and m-pm==1 and py==y and pd==29 and d==1)
            {
                 sum+=(c-pc);
                 day++;
            }
            else if(pm==2 and m-pm==1 and py==y and pd==28 and d==1)
            {
                if(!leap_year(py))
                {
                     sum+=(c-pc);
                    day++;
                }
            }
            else if((pm==1 or pm==3 or pm==5 or pm==7 or pm==8 or pm==10 or pm==12) and (m-pm==1) and (pd==31 and d==1) and y==py)
            {
                 sum+=(c-pc);
                day++;
            }
            else if((pm==4 or pm==6 or pm==9 or pm==11) and (m-pm==1) and (pd==30 and d==1) and y==py)
            {
                 sum+=(c-pc);
              day++;
            }

            pd = d;
            pm = m;
            py = y;
            pc = c;
        }

     }
     cout<<day<<" "<<sum<<endl;
    }

    return 0;
}
