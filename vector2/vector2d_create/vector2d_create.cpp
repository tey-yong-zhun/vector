#include <bits/stdc++.h>
using namespace std;

void quadratic(int n){
    vector<vector<int>> numMatrix;
    for ( int i = 0 ; i < n ; i = i + 1){
        vector <int> tmp;
        for( int j = 0; j < n; j = j +1){
            tmp.push_back(0);
        }
        numMatrix.push_back(tmp);
    }
    for (int i = 0; i < n ; i = i + 1){
        for (int j = 0 ; j < n; j = j + 1){
            cout << numMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    quadratic(3);
    return 0;
}