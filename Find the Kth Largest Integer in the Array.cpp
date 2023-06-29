class Solution {
public:
    static bool comparator(string &first,string &second)
    {
        if(first.size()==second.size())
        {
            return first<second;
        }
        return first.size()<second.size();
    }
    string kthLargestNumber(vector<string>& nums, int k) 
    {
        sort(nums.begin(),nums.end(),comparator);
        int a=nums.size();
        return nums[a-k];
    }
};
