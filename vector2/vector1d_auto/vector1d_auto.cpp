//This programme is use auto in loops for 1D vector

#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <int> nums = {1, 2, 3, 4, 5};

    for (auto num : nums){
        cout << num << " ";
    }
}