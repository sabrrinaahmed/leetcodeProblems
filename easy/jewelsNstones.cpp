#include <iostream>
#include <string>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    int result = 0;
    for(int i = 0; i < jewels.size(); i++){
        for(int j = 0; j < stones.size(); j++){
            if(jewels[i] == stones[j]){
                result++;
            }
        }
    }
    return result;
}

int main(){
    string jewels = "z";
    string stones = "ZZ";
    int result = numJewelsInStones(jewels, stones);
    cout << result << endl;
}