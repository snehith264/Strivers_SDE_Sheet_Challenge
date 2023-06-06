class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        int n = numRows;
        vector<vector<int>> dp;
        vector<int> v(1, 1);
        dp.push_back(v);
        if (n == 1)
        {
            return dp;
        }
        vector<int> v1(2, 1);
        dp.push_back(v1);
        if (n == 2)
        {
            return dp;
        }
        for (int i = 2; i < n; ++i)
        {
            vector<int> dp1(i + 1, 1);
            int s = 0;
            int e = 1;
            while (e < dp[i - 1].size())
            {
                dp1[e] = dp[i - 1][s] + dp[i - 1][e];
                e++;
                s++;
            }
            dp.push_back(dp1);
        }
        return dp;
    }
};