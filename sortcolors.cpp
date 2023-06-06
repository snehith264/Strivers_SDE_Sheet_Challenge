class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int z_c = 0;
        int o_c = 0;
        int t_c = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
            {
                z_c++;
            }
            else if (nums[i] == 1)
            {
                o_c++;
            }
            else
            {
                t_c++;
            }
        }

        int i = 0;
        while (z_c > 0)
        {
            nums[i] = 0;
            z_c--;
            i++;
        }

        while (o_c > 0)
        {
            nums[i] = 1;
            o_c--;
            i++;
        }

        while (t_c > 0)
        {
            nums[i] = 2;
            t_c--;
            i++;
        }
    }
};