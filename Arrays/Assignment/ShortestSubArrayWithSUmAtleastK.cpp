/**
 * 862. Shortest Subarray with Sum at Least K
Hard
3.9K
106
Companies
Given an integer array nums and an integer k, return the length of the shortest non-empty subarray of nums with a sum of at least k. If there is no such subarray, return -1.

A subarray is a contiguous part of an array.

 

Example 1:

Input: nums = [1], k = 1
Output: 1
Example 2:

Input: nums = [1,2], k = 4
Output: -1
Example 3:

Input: nums = [2,-1,2], k = 3
Output: 3
 

Constraints:

1 <= nums.length <= 105
-105 <= nums[i] <= 105
1 <= k <= 109
*/

class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        int N = A.size(), res = N + 1;
        vector<long long int> A1(A.size(),INT_MIN);
        A1[0] = A[0];
        deque<long> d;
        for (int i = 0; i < N; i++) {
            if (i > 0)
                A1[i] = A[i] + A1[i - 1];
            if (A1[i] >= K)
                res = min(res, i + 1);
            while (d.size() > 0 && A1[i] - A1[d.front()] >= K)
                {res = res<(i-d.front())?res:(i-d.front());//  min(res, i - d.front());
                 d.pop_front();}
            while (d.size() > 0 && A1[i] <= A1[d.back()])
                d.pop_back();
            d.push_back(i);
        }
        return res <= N ? res : -1;
    }
};