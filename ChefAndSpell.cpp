#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define pb push_back

#define mp make_pair

#define vtr vector<int>

#define vpr vector<pair<int,int>>

#define rep(i,a,b) for (int i = a; i <= b; i++)

#define rrep(i,a,b) for (int i = a; i > b; i--)

#define repit(i,a,b) for (int i = a; i >= b; i--)

#define iter(it,c) for (__typeof(c.begin()) it = c.begin(); it != c.end(); it++)

#define CIN(i,n) while(n--) {cin>>(i);}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vtr v;
        rep(i,0,2){
        cin>>n;
        v.pb(n);}
        sort(v.begin(),v.end());
        int ans= v[1]+v[2];
        cout<<ans<<endl;
    }
    return 0;
}