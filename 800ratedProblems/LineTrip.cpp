#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, x;
        cin >> n >> x;
        vector<int> path(n + 2);
        path[0] = 0;
        path[n + 1] = x;
        for (int i = 1; i <= n; i++)
        {
            cin >> path[i];
        }
      
        int max_vol = INT_MIN;
        vector<int> diff(n + 2);
        diff[0] = path[0];
        for (int i = 1; i < n + 2; i++)
        {
            diff[i] = abs(path[i] - path[i - 1]);
            max_vol = max(max_vol, diff[i]);
        }
       

        if (max_vol < 2 * diff[n + 1])
        {
            max_vol = 2 * diff[n + 1];
        }

        cout<<max_vol<<endl;

    }

    return 0; // End of the program
}
