#include <iostream>
#include <string>
using namespace std;

bool isPalin(string first){
    bool result = false;
    for(int i = 0; i < first.size(); i++){
        for(int j = first.size()-1; j >= 0; j--){
            if(first[i] == first[j]){
                result = true;
                continue;
            } else {
                result = false;
            }
        }
    }
    return result;
}

string solution(string input){
    string sub;
    string result;
    if(input.size() == 0 || input.size() == 1){
        return input;
    }

    for(int i = 0; i < input.size(); i++){
        sub = "";
        for(int j = i+1; j < input.size(); j++){
            sub = sub + input[j];
            if(isPalin(sub)){
                if(sub.size() > result.size()){
                    result = sub;
                }
            }
        }
    }

    return result;
}

int main(){
    string input = "ac";
    string result = solution(input);
    cout << result << endl;
}