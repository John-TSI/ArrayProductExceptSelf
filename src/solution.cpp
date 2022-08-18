#include"../inc/solution.hpp"


std::vector<int> Solution::productExceptSelf(std::vector<int>& nums)
{
    int n = nums.size();
    std::vector<int> result(n,1);  // initialise elements of result with multiplicative identity
    for(int i{0}; i<n; ++i)  // for each element in result
    {
        int j{ (i+1)%n };  // start with its corresponding successor in nums 
        while(j != i)  // iterate through the required n-1 elements of nums 
        {
            result[i] *= nums[j];  // update the element of result
            ++j %= n;  // iterating must wrap back to start of nums once j == n
        }
    }
    return result;
}