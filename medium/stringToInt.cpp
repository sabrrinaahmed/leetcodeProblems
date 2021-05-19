#include <iostream>
using namespace std;

int myAtoi(string s){
    int result = 0;
    bool neg = false;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            result = result * 10;
            if(s[i] == '1'){
                result += 1;
            } else if (s[i] == '2'){
                result += 2;
            } else if (s[i] == '3'){
                result += 3;
            } else if (s[i] == '4'){
                result += 4;
            } else if (s[i] == '5'){
                result += 5;
            } else if (s[i] == '6'){
                result += 6;
            } else if (s[i] == '7'){
                result += 7;
            } else if (s[i] == '8'){
                result += 8;
            } else if (s[i] == '9'){
                result += 9;
            }
        }
        if(s[i] == '-'){
            neg = true;
        }
    }
    if(neg){
        result = result - (2*result);
    }
    return result;
}

int main(){
    string s = "23";
    int result = myAtoi(s);
    cout << result << endl;
}