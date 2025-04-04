class Solution {
    public:
        int firstUniqChar(string s) {
            
            vector<int> umap(26,0);
    
            for(char c: s){
                umap[c-'a']++;
            }
    
            for(int i=0; i<s.length(); i++){
                if(umap[s[i]-'a']==1){
                    return i;
                }
            }
    
            return -1;
        }
    };