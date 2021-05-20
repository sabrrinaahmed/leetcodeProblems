#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int x){
    bool result = false;
    vector<int> work;
    int in;
    if(x == 0){
        return true;
    } else if (x < 0){
        return false;
    }

    while(x != 0){
        in = x % 10;
        work.push_back(in);
        x = x / 10;
    }

    for(int i = 0; i < work.size(); i++){
        cout << work[i] << " " << work[work.size()-i-1] << endl;
        if(work[i] == work[work.size()-i-1]){
            result = true;
        } else {
            return false;
        }
    }
    return result;
}

int main(){
    int input = 1000021;
    bool result = isPalindrome(input);
    if(result){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}