class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        stack<int> s1;
        int maxi = 0;
        int co = 0;
        for (int i = prices.size() - 1; i >= 0; i--)
        {
            if (co == 0)
            {
                s1.push(prices[i]);
                co += 1;
            }
            else
            {
                while (!s1.empty() && s1.top() < prices[i])
                {
                    s1.pop();
                    co--;
                }
                if (!s1.empty())
                {
                    maxi = max(maxi, s1.top() - prices[i]);
                }
                else
                {
                    s1.push(prices[i]);
                    co += 1;
                }
            }
        }
        return maxi;
    }
};