// Add two strings as their integer sum and return back as string


class Solution {
  public:
    string addStrings(string s1, string s2) {

      string ans; 
      int n1 = s1.size(), n2 = s2.size(), carry = 0;
      while(n1 || n2) {
        if(n1 > 0 && n2 > 0) {
          int sum = ((s1[n1-1] - '0') + (s2[n2-1] - '0')) + carry;
          if(sum < 10) {
            ans += to_string(sum);
            carry = 0;
          }
          else {
            ans += to_string(sum % 10);
            carry = sum / 10;
          }
          n1--;
          n2--;
        }
        else if(n1 > 0 && n2 <= 0) {
          int sum = (s1[n1-1] - '0') + carry;
          if(sum < 10) {
            ans += to_string(sum);
            carry = 0;
          }
          else {
            ans += to_string(sum % 10);
            carry = sum / 10;
          }
          n1--;
        }
        else if(n2 > 0 && n1 <= 0) {
          int sum = (s2[n2-1] - '0') + carry;
          if(sum < 10) {
            ans += to_string(sum);
            carry = 0;
          }
          else {
            ans += to_string(sum % 10);
            carry = sum / 10;
          }
          n2--;
        }
      }
      if(carry > 0) {
        ans += to_string(carry);
      }
      reverse(ans.begin(), ans.end());

      return ans;
      
    }
};