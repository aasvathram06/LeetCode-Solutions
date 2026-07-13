class Solution {
public:
    bool possible(vector<int>& bloomDay,int day,int x,int y){
        int count=0;
        int bouq=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count ++;
            }
            else{
                bouq += count/y;
                count=0;
            }
        }
        bouq += count/y;
        return bouq>=x;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = 1LL* m*k;
        int n=bloomDay.size();
        if(n< val){
            return -1;
        }

        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
           mini =min(mini,bloomDay[i]);
           maxi =max(maxi,bloomDay[i]);
        }

        int low=mini;
        int high=maxi;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(possible(bloomDay,mid,m,k)){
                high =mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};