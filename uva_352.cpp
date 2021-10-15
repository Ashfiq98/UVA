#include <bits/stdc++.h>
#define ll long long
//#define lim  10005
const int lim = 26;
using namespace std;
vector<int> vec[lim];
bool vis2[lim][lim];
bool vis[lim];
char arr[lim][lim];
ll node, edge,cnt=0;

ll arr1[]={1,-1,0,0,1,1,-1,-1};// 1 1 -1 -1 ->corner case
ll arr2[]={0,0,1,-1,1,-1,1,-1};// 1 -1 1 -1 -> corner case

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
    
    for(ll i=0;i<8;i++)
    {
        ll xx = x+arr1[i];
        ll yy = y+arr2[i];
        if(isValid(xx,yy) and arr[xx][yy]=='1')
        dfs2(xx,yy);
    }
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
   #ifndef ONLINE_JUDGE
        freopen("C:/C++ Code/input.txt", "r", stdin);
        freopen("C:/C++ Code/output.txt", "w", stdout);
    #endif
  ll t=1;
   while(cin>>node)
    {
        if(node>25)
        break;
       // cnt=0;
         ll n, m;
        memset(vis2,0,sizeof(vis2));
        memset(arr,0,sizeof(arr));
   // cin >> node;
    
    for (ll i = 1; i <= node; i++)
    {
        
        for (ll j = 1; j <= node; j++)
        {
            cin>>arr[i][j];
            
        }
    }
   // cnt=0;
    for (ll i = 1; i <= node; i++)
    {
        
        for (ll j = 1; j <= node; j++)
        {
           if(vis2[i][j]==0 and arr[i][j]=='1')
           {
               dfs2(i,j);
               cnt++;
           }
    //    cout<<arr[i][j];
            
        }
      //  cout<<endl;
    }
  //  dfs2(n,m);
    
//    Image number 1 contains 3 war eagles.
     cout<<"Image number "<<t<<" contains " <<cnt<<" war eagles."<<endl;
       cnt=0;    
       t++;
     }

    return 0;
}
