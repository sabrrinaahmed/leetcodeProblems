#include <iostream>
using namespace std;

int numberOfSteps(int num){
    int steps = 0;
    while(num != 0){
        if(num % 2 == 0){
            num = num / 2;
            steps++;
        } else {
            num = num - 1;
            steps++;
        }
    }
    return steps;
}

int main(){
    int input = 123;
    int result = numberOfSteps(input);
    cout << result << endl;
}