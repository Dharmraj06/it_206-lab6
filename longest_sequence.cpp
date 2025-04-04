class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            map<int, int> mpp;
            int size = 0;
            for (int i = 0; i < nums.size(); i++) {
                mpp[nums[i]] += 1;
                //cout << mpp[nums[i]] << " " << nums[i] << endl;
            }
            int max = 0;
            int prev_key = -1; 
    
            for (auto it = mpp.begin(); it != mpp.end(); it++) {
                if (abs(it->first - prev_key) == 1) {
                    size++; 
                } else {
                    size = 1; 
                }
                max = max(max, size); 
                prev_key = it->first;      
            }
    
            return max;
        }
    };