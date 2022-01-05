//Problem link - https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/
class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
       if(N==1){
           return 1;
       }
       return (M+K-1)%N ==0?N:(M+K-1)%N;
    }
};
