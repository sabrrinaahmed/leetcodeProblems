#include <iostream>
using namespace std;

int reverse(int x){
    bool neg = false;
    int result;
    if(x < 0){
        neg = true;
        x = x - (2*x);
    }

    while(x != 0){
        result = result * 10;
        result += x % 10;
        x = x / 10;
    }

    if(neg){
        result = result - (2*result);
    }

    return result;
}

int main(){
    int x = -123;
    int result = reverse(x);
    cout << result << endl;
}