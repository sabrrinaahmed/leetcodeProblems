#include <iostream>
#include <vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums){
    vector<int> result;
    int total = 0;
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size(); j++){
            if(i == j){
                continue;
            }
            if(nums[i] > nums[j]){
                total++;
            }
        }
        result.push_back(total);
        total = 0;
    }
    return result;
}

int main(){
    vector<int> input;
    input.push_back(7);
    input.push_back(7);
    input.push_back(7);
    input.push_back(7);
    vector<int> result = smallerNumbersThanCurrent(input);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
}