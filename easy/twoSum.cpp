#include <iostream>
using namespace std;

int* solution(int nums[], int target){
    int result[2];
    int size = sizeof(nums);
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
            }
        }
    }
    return result;
}

int main(){
    int nums[4] = {2,7,11,15};
    int target = 9;
    int *end = solution(nums, target);
    int size = sizeof(end);
    for(int i = 0; i < size; i++){
        cout << end[i] << " ";
    }

}