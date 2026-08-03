class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool isTrue=false;
        int size=nums.size();
        for(int i=0;i<size;i++){
            for(int j=0;j<i;j++){
                if(nums[i]==nums[j]){
                    isTrue=true;
                    return isTrue;
                }
            }
        }
        return isTrue;
    }
};