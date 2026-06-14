class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int i = 0;
        int k = n-1;
        while(i<k){
            if(nums[i]==0){
                int j =i;
                while(j<k){
                    swap(nums[j],nums[j+1]);
                    j++;
                }
                k--;
            }
            else    i++;
        }
    }
};