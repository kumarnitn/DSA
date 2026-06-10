class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int current  = 0;
        int unique = 0;
        while(current<n){
            while( current <n && nums[current] == nums[unique]){// here condition also can be for this question nums[current] == nums[unique]
                current++;
            }
            if(current>=n)  return unique+1;
            else{
                unique++;
                int temp = nums[current];
                nums[current] = nums[unique];
                nums[unique]= temp;
                current++;
            }
        }
        return unique+1 ;
    }
};