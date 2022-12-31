#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int kadanesAlgorithm(vector<int> &v){
    int i, len = v.size(), maxSum = v[0], currSum = v[0];

    for(i = 1; i < len; i ++){
        currSum = max(currSum, 0);
        currSum += v[i];
        maxSum = max(currSum, maxSum);
    }

    return maxSum;
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    vector<int> v;
    int len, temp, i, j;
    cout << "Len : ";
    cin >> len;

    cout << "Arr : ";
    for(i = 0; i < len; i ++){
        cin >> temp;
        v.push_back(temp);
    }

    cout << "Output : " << kadanesAlgorithm(v);

}
