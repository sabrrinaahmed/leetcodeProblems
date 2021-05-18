#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
using namespace std;

/*
1 = I
5 = V
10 = X
50 = L
100 = C
500 = D
1000 = M
 */

map<int,char> createMap(){
    map<int, char> map;
    map[1] = 'I';
    map[5] = 'V';
    map[10] = 'X';
    map[50] = 'L';
    map[100] = 'C';
    map[500] = 'D';
    map[1000] = 'M';
    return map;
}

string solution(int input, map<int,char>& m){
    string result;
    for(auto x = m.cend(); x != m.cbegin(); --x){
        if(x == m.cend()){
            continue;
        }
        cout << (*x).first << " " << (*x).second << endl;
        while(input >= (*x).first){
            result = result + (*x).second;
            input -= (*x).first;
            cout << input << endl;
        }
    }
    while(input != 0){
        result = result + 'I';
        input -= 1;
    }
    return result;
}

int main(){
    int input = 4;
    map<int,char> map1 = createMap();
    string result = solution(input, map1);
    cout << result << endl;
}