class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, res = 0;

        for(int num : nums){
            cnt = num ? cnt + 1 : 0;
            res = max(res, cnt);
        }
        res = max(res, cnt);
        return res;
    }
};