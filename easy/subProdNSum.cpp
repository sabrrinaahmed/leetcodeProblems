#include <iostream>
using namespace std;

int subtractProductAndSum(int n){
    int prod = 1;
    int sum = 0;
    int result = 0;
    int digit = 0;

    while(n != 0){
        digit = n % 10;
        n = n / 10;
        prod *= digit;
        sum += digit;
    }

    result = prod - sum;
    return result;
}

int main(){
    int n = 4421;
    int result = subtractProductAndSum(n);
    cout << result << endl;
}