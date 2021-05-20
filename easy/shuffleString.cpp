#include <iostream>
#include <string>
#include <vector>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    string result = "";
    while(result.size() != s.size()){
        for(int i = 0; i < indices.size(); i++){
            if(result.size() == indices[i]){
                result += s[i];
            }
        }
    }
    return result;
}

int main(){
    string s = "codeleet";
    vector<int> in;
    in.push_back(4);
    in.push_back(5);
    in.push_back(6);
    in.push_back(7);
    in.push_back(0);
    in.push_back(2);
    in.push_back(1);
    in.push_back(3);
    string result = restoreString(s, in);
    cout << result << endl;
}