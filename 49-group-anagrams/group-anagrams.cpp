class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>mpp;
       for(int i =0;i<strs.size();i++){                  //n 
        string str=strs[i];
        int fre[26]={0};
        for(int j=0;j<str.size();j++){                   //k
            fre[str[j]-'a']++;
        }
        string key="";
        for(int k=0;k<26;k++){                           //26
            key+='#'+to_string(fre[k]);
        }
          mpp[key].push_back(str);
       }
        vector<vector<string>>result;
        for(auto it =mpp.begin();it !=mpp.end(); it++){
          result.push_back(it->second);
        }
        return result;
    }
};