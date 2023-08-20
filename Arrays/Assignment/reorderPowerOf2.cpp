//It is only possible for powers of 2
/**
 * 869. Reordered Power of 2
Medium
2.1K
425
Companies
You are given an integer n. We reorder the digits in any order (including the original order) such that the leading digit is not zero.

Return true if and only if we can do this so that the resulting number is a power of two.

 

Example 1:

Input: n = 1
Output: true
Example 2:

Input: n = 10
Output: false
 

Constraints:

1 <= n <= 109
*/
class Solution {
public:
    bool reorderedPowerOf2(int n) {
         string str = to_string(n);
   sort(str.begin(),str.end());
   long long int num;
   int counter=0;
   
   while(true)
   {
      num = pow(2,counter++);
      
      string temp = to_string(num);
      
       
      if(temp.length()>str.length())
      {
          //cout<<"temp="<<temp<<endl;
          break;
      }
       
      sort(temp.begin(),temp.end());
         
      if(str == temp)
      return true;
     
   }     
   return false;   
    }
};