class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        vector<int> A =nums; 
        sort(A.begin(),A.end());
        vector<int>B(n,0);
        for(int x= 0;x<n;x++){
            for(int i= 0;i<n;i++){
                B[i]=A[(i+x)%n];
            }
            bool flag = true;
            for(int i = 0;i<n;i++){
                if(nums[i]==B[i]){
                    continue;
                }
                else    flag = false;
            }
            if(flag==true)  return true;
            continue;
        }
        return false;
    }

};