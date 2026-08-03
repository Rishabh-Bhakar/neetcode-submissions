class Solution {
public:
    bool isAnagram(string s, string t) {
        bool isTrue=true;
        if(s.length()!=t.length()){
            isTrue=false;
            return isTrue;
        }
        int hash1[26]={0};
        int hash2[26]={0};
        for(int i=0;i<s.length();i++){
        hash1[s[i]-'a']++;
        hash2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hash1[i]!=hash2[i]){
        isTrue=false;
        return isTrue;
            }
        }
        return isTrue;
    }
};
