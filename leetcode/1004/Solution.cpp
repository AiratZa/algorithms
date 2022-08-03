#include <algorithm>
#include <vector>

int fn(std::vector<int>& nums, int k)
{
    int tmpK = k;
    int max, tmpMax = 0;

    for (const int num: nums)
    {
        if (num == 0)
        {
            --tmpK;
            if (tmpK < 0)
            {
                tmpMax = 0;
                tmpK = k;
                continue;
            }
        }

        max = std::max(max, ++tmpMax);
    }
    return max;
}
