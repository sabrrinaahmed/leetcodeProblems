#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int>& nums){
    int result = 0;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] == nums[j]){
                result++;
            }
        }
    }
    return result;
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    int result = solution(nums);
    cout << result << endl;
}