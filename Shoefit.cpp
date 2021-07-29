#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        stack<int> s;
        int n;
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> n;
            if (s.empty())
            {
                s.push(n);
            }
            if (!s.empty())
            {
                if (s.top() != n)count++;    
            }
            else
                {
                    s.push(n);
                }
        }
        if(count ==2)count=1;
        cout << count << endl;
    }
    return 0;
}