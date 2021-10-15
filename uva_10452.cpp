#include <bits/stdc++.h>
#define ll long long
//#define lim  10005
const int lim = 21;
using namespace std;
vector<int> vec[lim];
bool vis2[lim][lim];
bool vis[lim];
char arr[lim][lim];
ll row,col;
// ll cnt=0;

ll arr1[]={-1,0,0};// 1 1 -1 -1 ->corner case
ll arr2[]={0,1,-1};// 1 -1 1 -1 -> corner case

bool isValid(ll x, ll y)
{
    if (x < 1 || x > row || y < 1 || y > col)
        return 0;
    else if (vis2[x][y] == 1)
        return 0;
    else
        return 1;
}
void dfs2(ll x, ll y)
{
    vis2[x][y] = 1;
    // cnt++;
    //cout << x << " " << y << endl;
    // direction array alternate of those 4 condition which are given below
    
    if(isValid(x-1,y) and (arr[x-1][y]=='#' or arr[x-1][y]=='I' or arr[x-1][y]=='E' or arr[x-1][y]=='H' or arr[x-1][y]=='O' or arr[x-1][y]=='V' or arr[x-1][y]=='A' ))
    {
        if(arr[x-1][y]=='#')
        cout<<"forth";
        else
        cout<<"forth ";

        dfs2(x-1,y);
    }
    else if(isValid(x,y+1) and (arr[x][y+1]=='#' or arr[x][y+1]=='I' or arr[x][y+1]=='E' or arr[x][y+1]=='H' or arr[x][y+1]=='O' or arr[x][y+1]=='V' or arr[x][y+1]=='A' ))
   {
       if(arr[x][y+1]=='#')
       cout<<"right";
       else
       cout<<"right ";

       dfs2(x,y+1);
   }
   else if(isValid(x,y-1) and (arr[x][y-1]=='#' or arr[x][y-1]=='I' or arr[x][y-1]=='E' or arr[x][y-1]=='H' or arr[x][y-1]=='O' or arr[x][y-1]=='V' or arr[x][y-1]=='A' ))
   {
       if(arr[x][y-1]=='#')
       cout<<"left";
       else
       cout<<"left ";
       dfs2(x,y-1);
   }
    // for(ll i=0;i<3;i++)
    // {
    //     ll xx = x+arr1[i];
    //     ll yy = y+arr2[i];
    //     if(isValid(xx,yy) and arr[xx][yy]=='.')

    //     dfs2(xx,yy);
    // }
//     if (isValid(x - 1, y) and arr[x-1][y]=='.')
//     {
        
//         dfs2(x - 1, y);
//     }

//     if (isValid(x, y - 1) and arr[x][y-1]=='.')
//     {
        
//         dfs2(x, y - 1);
//     }

//     if (isValid(x + 1, y) and arr[x+1][y]=='.')
//     {
       
//         dfs2(x + 1, y);
//     }

//     if (isValid(x, y + 1) and arr[x][y+1]=='.')
//     {
        
//         dfs2(x, y + 1);
//     }
   }
int main()
{
   // #ifndef ONLINE_JUDGE
    //     freopen("D:/Code_c++/input.txt", "r", stdin);
    //     freopen("D:/Code_c++/output.txt", "w", stdout);
    // #endif

    ll t;
    cin>>t;
    ll cnt=0;
    for(ll k=1;k<=t;k++)
    {
       // cnt=0;
         ll n, m;
        memset(vis2,0,sizeof(vis2));
    cin >> row >> col;
    for (ll i = 1; i <= row; i++)
    {
      
        for (ll j = 1; j <= col; j++)
        {
            cin>>arr[i][j];
            
        }
    }
     for (ll i = 1; i <= row; i++)
    {
      
        for (ll j = 1; j <= col; j++)
        {
            if(arr[i][j]=='@')
            {
                dfs2(i,j);
                // cnt++;
                // break;
            }
            
        }
        // if(cnt==1)
        // break;
    }
   // dfs2(n,m);
    
    
    //  cout<<"Case "<<k<<": "<<cnt<<endl;
    //   cnt=0;    
    cout<<"\n";
     }

    return 0;
}
