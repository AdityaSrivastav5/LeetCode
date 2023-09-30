class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;

        for(auto it : mp) {
            minHeap.push({it.second,it.first});

            if(minHeap.size() > k) {
                minHeap.pop();
            }
        }

        vector<int> result;

        while(!minHeap.empty()) {
            auto p = minHeap.top();
            result.push_back(p.second);
            minHeap.pop();
        }

        return result;
    }
};