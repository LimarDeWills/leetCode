#include <vector>

#include "DurationTime.h"

//the pivot index

//test cases:
//{ 0 } = -1
//{ 0, 1, 2 } = -1
//{ 2, 1, 2 } = 1
//{ 1, 7, 3, 6, 5, 6 } = 3
//{ 6, 6, 6, 6, 0, 8, 8, 8, 0 } = 4

int pivotIndex(std::vector<int>& nums)
{
    DurationTime dt(__func__);
    int sum = 0;
    int leftSum = 0;
    for (auto& el : nums)
        sum += el;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (leftSum == (sum - leftSum - nums[i]))
            return i;

        leftSum += nums[i];
    }

    return -1;
}

int main()
{
    std::vector<int> nums = { 0, 1, 2 };

    return pivotIndex(nums);
}