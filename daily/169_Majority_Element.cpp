class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> mymap;
        for(int& i:nums) mymap[i]++;
        int ans=0;
        for (auto a : mymap) {
            if (a.second > nums.size()/2) {
                ans = a.first; 
            }
        }
        return ans;
   }
};