#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
                int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] == A[i + 1])
                continue;
            int cnt = 0;
            for (int j = i; j < N; j++)
            {
                if (A[j] != A[j + 1])
                    cnt++;
                if (cnt > K)
                    break;
                ans = max(ans, j);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
       