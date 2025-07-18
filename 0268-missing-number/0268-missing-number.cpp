class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xornum=0;
        int xorsum=0;
        for(int i=0;i<=n;i++)
        xornum=xornum^i;
        for(auto i:nums)
        xorsum=xorsum^i;
        return xornum^xorsum;
    }
};