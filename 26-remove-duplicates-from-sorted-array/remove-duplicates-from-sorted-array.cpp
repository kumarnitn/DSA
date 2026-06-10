class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 0;
        for(int current=1 ; current < nums.size();current++){
            if(nums[unique]!=nums[current]){
                unique++;
                nums[unique]=nums[current];
            }
        }
        return unique+1;
    }
    };
