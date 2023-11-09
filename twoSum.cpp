#include <vector>
#include <iostream>

using std::vector, std::cout;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0, length = nums.size(); i < length; i++){
            for (int j = i+1; j < length; j++){
                if (nums[j] == target - nums[i]){
                    return vector<int>({i, j});
                }

            }
        }

        return vector<int>();

    }
};

int main(){

    Solution t;

    vector<int> nums = {3,2,4};
    int target = 7;

    vector<int> s = t.twoSum(nums, target);

    for (int i = 0, length = s.size(); i < length; i++){
        cout << s[i] << " ";
    }

    cout << "\n";

}