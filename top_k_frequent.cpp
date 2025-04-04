class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> mpp;
            
            for (int num : nums)
                mpp[num]++;
            
            vector<pair<int, int>> temp(mpp.begin(), mpp.end());
    
            sort(temp.begin(), temp.end(), [](pair<int, int> a, pair<int, int> b) {
                return a.second > b.second;
            });
    
            vector<int> ans;
            for (int i = 0; i < k; i++) {
                ans.push_back(temp[i].first);
            }
    
            return ans;
        }
    };
    