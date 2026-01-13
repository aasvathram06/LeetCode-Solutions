class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int,int>hm;
        for(int i=0;i<nums.size();i++){
            hm[nums[i]] +=1;
        }
        for(int i=0;i<nums.size();i++){
           if(hm[nums[i]]>(nums.size()/2)){
            return nums[i];
           }

        }
    return 0;
    }
};