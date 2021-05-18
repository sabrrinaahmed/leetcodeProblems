#include <iostream>
#include <string>
using namespace std;

int solution(string input){
    string sub;
    for(int i = 0; i < input.size(); i++){
        if(sub.find(input[i])){
            sub = sub + input[i];
            cout << sub << endl;
        } else {
            return i;
        }
    }
    return 0;
}

int main(){
    string input = "pwwkew";
    int result = solution(input);
    cout << result << endl;
}