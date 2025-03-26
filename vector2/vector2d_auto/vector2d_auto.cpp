#include <bits/stdc++.h>
using namespace std;

void printV(vector<vector<int>>& v) {
    for(auto i : v){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
        cout << endl;
}   

int main() {
    vector<vector<int>> v1;
    vector<vector<int>> v2(2, vector<int>(3, 11));
    vector<vector<int>> v3 = {
        {1, 2, 3},
        {4, 5, 6},
    };

    printV(v1);
    printV(v2);
    printV(v3);
   return 0;
}