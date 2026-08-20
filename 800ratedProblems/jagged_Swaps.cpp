#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        if (temp == nums)
        {
            cout << "Yes" << "\n";
            continue;
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
            {
                if (nums[i - 1] > nums[i + 1])
                {
                    cout << "No" << "\n";
                    break;
                }

                swap(nums[i], nums[i + 1]);
            }

            else if (nums[i] < nums[i - 1])
            {
                cout << "No" << "\n";
                break;
            }
        }

        if (nums == temp)
        {
            cout << "Yes" << "\n";
        }
    }

    return 0;
}
