#include <bits/stdc++.h>
#define ll long long
//#define lim  10005
const int lim = 101;
using namespace std;
vector<int> vec[lim];
bool vis2[lim][lim];
bool vis[lim];
char arr[lim][lim];
ll node, edge,cnt=0;

ll arr1[]={1,-1,0,0};// 1 1 -1 -1 ->corner case
ll arr2[]={0,0,1,-1};// 1 -1 1 -1 -> corner case

bool isValid(ll x, ll y)
{
    if (x < 1 || x > node || y < 1 || y > node)
        return 0;
    else if (vis2[x][y] == 1)
        return 0;
    else
        return 1;
}
void dfs2(ll x, ll y)
{
    vis2[x][y] = 1;
    //cnt++;
    //cout << x << " " << y << endl;
    // direction array alternate of those 4 condition which are given below
    
    for(ll i=0;i<4;i++)
    {
        ll xx = x+arr1[i];
        ll yy = y+arr2[i];
        if(isValid(xx,yy) and (arr[xx][yy]=='x' or arr[xx][yy]=='@'))
        dfs2(xx,yy);
    }

   }
int main()
{
   // #ifndef ONLINE_JUDGE
    //     freopen("D:/Code_c++/input.txt", "r", stdin);
    //     freopen("D:/Code_c++/output.txt", "w", stdout);
    // #endif

    ll t;
    cin>>t;
    for(ll k=1;k<=t;k++)
    {
       // cnt=0;
         ll n, m;
        memset(vis2,0,sizeof(vis2));
    cin >> node;
    for (ll i = 1; i <= node; i++)
    {
        //char ch;
        for (ll j = 1; j <= node; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for (ll i = 1; i <= node; i++)
    {
        //char ch;
        for (ll j = 1; j <= node; j++)
        {
            if(vis2[i][j]==0 and arr[i][j]=='x')
            {
                dfs2(i,j);
                cnt++;
            }
        }
    }
    
    
     cout<<"Case "<<k<<": "<<cnt<<endl;
       cnt=0;    
     }

    return 0;
}
