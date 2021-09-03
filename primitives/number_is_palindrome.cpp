// Check if a given number is palindrome

class Solution {
  public:
    bool isPalindrome(int x) {

      if(x <= 0) {
        return false;
      }

      int revNum = 0, num = x;
      vector<int>numArr;
      
      while(x != 0) {
        int r = x % 10;
        numArr.push_back(r);
        x = x / 10;
      }
      for(int i = 0; i < numArr.size(); i++) {
        revNum = (revNum * 10) + numArr[i];
      }
      if(revNum == num) 
        return true;
      return false;
    }
};