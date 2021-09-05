
class Solution {
  public:
    bool powerOfFour(int input) {

      if(input == 0) {
        return false;
      }
      if(input == 1) {
        return true;
      }
      while(input != 1) {
        int r = input % 4;
        if(r != 0) {
          return false;
        }
        input = input / 4;
      }
      return true;
      
    }
};