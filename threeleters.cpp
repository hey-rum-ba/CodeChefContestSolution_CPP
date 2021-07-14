#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void checker()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}

int main()
{
    int y;
    cin>>y;
    while(y--) checker();
    return 0;
}