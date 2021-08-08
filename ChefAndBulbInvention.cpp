#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pai
#define vi vector<int>
#define vl vector<ll>
#define vii vector<vector<int>>
#define vpi vector < pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i > b; i--)
#define repit(i, a, b) for (int i = a; i >= b; i--)
#define iter(it, c) for (__typeof(c.begin()) it = c.begin(); it != c.end(); it++)
#define CIN(n) \
    int n;     \
    cin >> n;  \
    while (n--)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, k;
        cin >> n >> p >> k;
        int ans = 0;

        int q = p % k;
        q--;

        int s = (((n - 1) / k) * k);
        s = n - 1 - s;
        if (q > s)
        {
            ans += (s + 1) * ((n - 1) / k + 1) + (q - s) * ((n - 1) / k);
        }
        else
        {
            ans += ((n - 1) / k + 1) * (q + 1);
        }
        for (int i = q + 1; i <= n - 1; i += k)
        {
            ans++;
            if (i == p)
            {
                cout << ans << endl;
                break;
            }
        }
        return 0;
    }