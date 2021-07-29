#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for (ll i = 0; i < n; ++i) {
            cin>>a[i];
        }
        map<ll,ll> v;
        ll count =0;
        for(int i=0;i<n;i++){
            if(v.find(a[i])==v.end()) { v[a[i]]++;count++; }
            else{
                if(v[a[i]]<a[i]-1){
                    count++;
                    v[a[i]]++;
                }
            }
        }
        cout << count << "\n";
    }
}