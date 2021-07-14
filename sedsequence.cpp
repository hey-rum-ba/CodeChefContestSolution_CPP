#include<iostream>

using namespace std;

void check()
{
    int n,k;
    int arr[10000],sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+= arr[i];
    }
    if(sum%k==0) cout<<"0"<<endl;
    else cout<<"1"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) check();
    
    return 0;
}