#include <iostream>
#include <vector>
using namespace std;

vector<bool> solution(vector<int>& candies, int extraCandies){
    vector<bool> result;
    vector<int> newCandies;
    int max = 0;

    for(int i = 0; i < candies.size(); i++){
        if(candies[i] > max){
            max = candies[i];
        }
    }

    for(int i = 0; i < candies.size(); i++){
        if(candies[i] + extraCandies >= max){
            result.push_back(true);
        } else {
            result.push_back(false);
        }
    }
    return result;
}

int main(){
    vector<int> input;
    input.push_back(4);
    input.push_back(2);
    input.push_back(1);
    input.push_back(1);
    input.push_back(2);
    int extraCandies = 1;
    vector<bool> result = solution(input, extraCandies);
    for(int i = 0; i < result.size(); i++){
        if(result[i] == true){
            cout << "True ";
        } else {
            cout << "False ";
        }
    }
}