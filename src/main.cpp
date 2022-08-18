// https://leetcode.com/problems/product-of-array-except-self/

#include<iostream>
#include"../inc/solution.hpp"


void PrintVec(std::vector<int>&& vec)
{
	for(int i : vec){ std::cout << i << ' '; }
	std::cout << '\n';
}

int main()
{
	std::vector<int> vec{1,2,3,4};
	std::vector<int> vec2{-1,1,0,-3,3};
	PrintVec(Solution().productExceptSelf(vec));  // 24 12 8 6
	PrintVec(Solution().productExceptSelf(vec2));  // 0 0 9 0 0
	return 0;
}

