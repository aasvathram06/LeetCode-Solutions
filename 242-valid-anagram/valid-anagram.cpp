class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()){
            return false;
        }
        
        map<char,int>hm;
        for(int i=0;i<s.size();i++){
            hm[s[i]] +=1;
        }
        map<char,int>hm1;
        for(int i=0;i<t.size();i++){
            hm1[t[i]] +=1;
        }
       for(int i=0;i<s.size();i++){
        if(hm[s[i]]!=hm1[s[i]]){
            return false;
        }

        }

       return true; 
    }
   
};