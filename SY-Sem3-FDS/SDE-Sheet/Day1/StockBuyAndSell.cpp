#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int maxProfit(vector<int> &v){
    int i, len = v.size(), minNum = 0, maxProfit = 0;

    for(i = 0; i < len; i ++){
        minNum = min(minNum, v[i]);
        maxProfit = max(maxProfit, (v[i] - minNum));
    }

    return maxProfit;
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

    cout << "Output : " << maxProfit(v);

}
