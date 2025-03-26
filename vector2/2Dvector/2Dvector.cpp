//This is a programme to use vector in 2D with row and column

#include <bits/stdc++.h>
using namespace std;

int main (){

    vector<vector<int>> v = {{1, 2}, {3, 4}};

    for(int i = 0; i < v.size(); i = i + 1){
        for (int j = 0; j < v[i].size(); j = j + 1 ){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}