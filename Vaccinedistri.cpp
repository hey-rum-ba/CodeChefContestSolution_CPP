#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        long long d;
        cin>>n>>d;
        vector<int> v;
        while(n--) {int i;cin>>i; v.push_back(i);}
        float count =0;
        for(int i:v)
        {
            if(i>=80||i<=9)
            {
                count++;
            }
        }

        long long l = v.size();
        float ans,m=(l-count);
        ans = ceil(count/d)+ceil(m/d);
        cout<<l<<endl;
        cout<<m<<endl;
        cout<<count<<endl;
        cout<<ans<<"\n"<<endl;

    }
    return 0;
}