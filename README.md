# Test for leetcode 
## No.3
### Longest Substring Without Repeating Characters 
## No.209 
### Minimum Size Subarray Sum
time : 12ms  
description : 给一个数组nums和数值s，找到和大于等于s的最小长度的连续子数组，返回长度  
idea : 用了两个指针，left right，比较right指针下一格位置的值与left指针指向的值，若大于则right右移一格，left做步进while循环直到重新满足恰好sum>=s，若小于则left右移一格，right做步进while循环直到满足恰好sum>=s   
other : 用do...while和 && 来达到do...until的效果   

