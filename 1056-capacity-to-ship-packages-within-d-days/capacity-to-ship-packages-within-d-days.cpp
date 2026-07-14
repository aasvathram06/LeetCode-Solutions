class Solution {
public:
int findD(vector<int>& weights, int cap){
    int day=1;
    int load=0;
    int n=weights.size();
    for(int i=0;i<n;i++){
        if(weights[i]+load > cap){
            day+=1;
            load = weights[i];
        }
        else{
            load +=weights[i];
        }
    }
    return day;
}
int sumW(vector<int>& weights){
    int n=weights.size();
    int sum=0;
    for(int i=0;i<n;i++){
       sum += weights[i];
    }
    return sum;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low= *max_element(weights.begin(),weights.end());
        int high= sumW(weights);
        while(low<=high){
            int mid=low+(high-low)/2;
            int noofD = findD(weights,mid);
            if(noofD<=days){
                high =mid-1;
            }
            else{
                low =mid+1;
            }
        }
        return low;
    }
};