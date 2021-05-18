#include <iostream>
#include <vector>
using namespace std;

double solution(vector<int>& nums1, vector<int>& nums2){
    vector<int> work;
    for(int i = 0; i < nums1.size(); i++){
        work.push_back(nums1[i]);
    }
    for(int i = 0; i < nums2.size(); i++){
        work.push_back(nums2[i]);
    }

    sort(work.begin(), work.end());

    if(work.size() % 2 != 0){
        int median = work.size() / 2;
        return work[median];
    } else if (work.size() == 1){
        return work[0];
    } else {
        int first = work.size() / 2 - 1;
        int second = work.size() / 2;
        double medValues = work[first] + work[second];
        double result = medValues / 2;
        return result;
    }
}

int main(){
    vector<int> first;
    first.push_back(1);
    // first.push_back(2);

    vector<int> second;
    // second.push_back(3);
    // second.push_back(4);
    
    double result = solution(first, second);
    cout << result << endl;
}