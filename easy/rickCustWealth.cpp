#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int> >& accounts){
    int total = 0;
    vector<int> totals;
    int m = (sizeof(accounts)/sizeof(accounts[0]))+1;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < accounts[i].size(); j++){
            total += accounts[i][j];
        }
        totals.push_back(total);
        total = 0;
    }

    int max = 0;
    for(int i = 0; i < totals.size(); i++){
        if(totals[i] > max){
            max = totals[i];
        }
    }
    return max;
}

int main(){
    vector<vector<int> > input;
    vector<int> first;
    first.push_back(1);
    first.push_back(5);

    vector<int> second;
    second.push_back(7);
    second.push_back(3);

    vector<int> third;
    third.push_back(3);
    third.push_back(5);

    input.push_back(first);
    input.push_back(second);
    input.push_back(third);
    int result = solution(input);
    cout << result << endl;
}