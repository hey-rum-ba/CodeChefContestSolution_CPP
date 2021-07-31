#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define pb push_back

#define mp make_pair

#define vtr vector<int>

#define vpr vector<pair<int,int>>

#define rep(i,a,b) for (int i = a; i < b; i++)

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
        int n,d,h;
        cin>>n>>d>>h;
        int height=0;
        bool x=true;
        rep(i,0,n)
        {
            int a;
            cin>>a;
            if(a==0) height=max(0,height-d);
            height+=a;
            if(height>h) x=false;
        }
        if(x==false)
            {
                cout<<"YES"<<endl;}
            else
            {
                cout<<"NO"<<endl;}
    }
    return 0;
}