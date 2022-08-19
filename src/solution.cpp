#include"../inc/solution.hpp"


std::vector<int> Solution::productExceptSelf(std::vector<int>& nums)
{
    int n = nums.size();
    std::vector<int> result(n,1);  // initialise elements of result with multiplicative identity

    // --- method one: O(n^2) TC ---
/*     
    for(int i{0}; i<n; ++i)  // for each element in result
    {
        int j{ (i+1)%n };  // start with its corresponding successor in nums 
        while(j != i)  // iterate through the required n-1 elements of nums 
        {
            result[i] *= nums[j];  // update the element of result
            ++j %= n;  // iterating must wrap back to start of nums once j == n
        }
    } 
*/

    // --- method two: O(n) TC ---
    int leftProd{1}, rightProd{1};  // store the product of elements of nums, starting from left/right respectively
    for(int i{0}; i<n; ++i)
    {
        // at start of final loop iteration, leftProd/rightProd is product of first/last n-1 elements of nums
        result[i] *= leftProd;
        result[n-1-i] *= rightProd;
        leftProd *= nums[i];  // leftProd is the product of the first i+1 elements of nums
        rightProd *= nums[n-1-i];  // rightProd is the product of the last i+1 elements of nums 
    }

    return result;
}