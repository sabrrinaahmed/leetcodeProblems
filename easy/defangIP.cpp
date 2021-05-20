#include <iostream>
#include <string>
using namespace std;

string solution(string s){
    string result = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.'){
            result += "[.]";
        } else {
            result += s[i];
        }
    }
    return result;
}

int main(){
    string s = "255.100.50.0";
    string result = solution(s);
    cout << result << endl;

}