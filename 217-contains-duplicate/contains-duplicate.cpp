class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        map<int,int>hm;
        for (int i=0;i<nums.size();i++){
             hm[nums[i]] +=1;
        }
        for(auto it: hm){
            cout<< it.first << " " << it.second << endl;
            if(it.second >=2){
                return true;
            }
        }
        return false;
    } 
};