#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin >>a>>b;
        if(a==1&&b==1)cout<<1<<endl;
        else
        {
            cout<<(a*b)/2<<endl;
        }
        

    }
    return 0;
}