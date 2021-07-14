#include<iostream>

using namespace std;

void checker()
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    int b;
    cin>>b;
    int check;
    int count=0;
    for(int i=0;i<n;i++)
    {
        check=a%10;
        a /=10;
        
    }
    if(count%2==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) checker();
    return 0;
}