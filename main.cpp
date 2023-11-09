#include <vector>
#include "twoSum.cpp"

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