class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            // we have to use hash-table somehow to get the optimal answer
            //find function in the hash table will be used to get the answer
            unordered_map<int, int> hash;
            vector<int>ans(2,0);
            for(int i = 0 ;  i < nums.size(); i++){
                int comp = target - nums[i];
                if(hash.find(comp) != hash.end())
                {
                    ans[0] = i;ans[1] = hash[comp];
                }
    
                hash[nums[i]] = i;
            }
    
    
            return ans;
        }
    };