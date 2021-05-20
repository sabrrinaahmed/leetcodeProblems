#include <iostream>
#include <vector>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> result;
    for(int i = 0; i < nums.size(); i += 2){
        for(int j = 0; j < nums[i]; j++){
            result.push_back(nums[i+1]);
        }
    }
    return result;
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<int> result = decompressRLElist(nums);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
}