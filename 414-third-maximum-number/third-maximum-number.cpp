class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
     long first=LONG_MIN,sec=LONG_MIN,third=LONG_MIN;

     for(int x:nums)
     {
        if(x==first || x==sec || x==third)
         continue;

         if(x>first)
         {
            third=sec;
            sec=first;
            first=x;
         }
         else if(x>sec)
         {
            third=sec;
            sec=x;
         }else if(x>third)
         {
            third=x;
         } 
     }
      return (third==LONG_MIN)?first:third;
    }
};