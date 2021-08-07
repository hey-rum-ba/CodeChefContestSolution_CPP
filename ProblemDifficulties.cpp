#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pai
#define vi vector<int>
#define vl vector<ll>
#define vii vector<vector<int>>
#define vpi vector<pair<int,int>
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rrep(i,a,b) for (int i = a; i > b; i--)
#define repit(i,a,b) for (int i = a; i >= b; i--)
#define iter(it,c) for (__typeof(c.begin()) it = c.begin(); it != c.end(); it++)
#define CIN(n) int n;cin>>n;while(n--)

int main()
{
         int t;
         cin>>t;
         while(t--)
         {
         int a[4];
         cin>>a[0]>>a[1]>>a[2]>>a[3];
         sort(a,a+4);
         if(a[0]!=a[1]&&a[1]!=a[2]&&a[2]!=a[3])
         {
          cout<<2<<endl;
         }
         else
          if(a[0]!=a[1]&&a[1]!=a[2]&&a[2]==a[3]||a[0]!=a[1]&&a[1]==a[2]&&a[2]!=a[3]||a[0]==a[1]&&a[1]!=a[2]&&a[2]!=a[3]||a[0]==a[1]&&a[1]!=a[2]&&a[2]==a[3])
          {
            cout<<2<<endl;
          }
          else if(a[0]!=a[1]&&a[1]==a[2]&&a[2]==a[3]||a[0]==a[1]&&a[1]==a[2]&&a[2]!=a[3])
          {
            cout<<1<<endl;
          }
          else
          {
            cout<<0<<endl;
          }
    return 0;
}