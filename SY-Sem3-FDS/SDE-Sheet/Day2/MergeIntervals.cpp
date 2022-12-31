#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool comparator(vector<int> a, vector<int> b){
    return a[0] <= b[0];
}


vector<vector<ll>> mergeIntervals (vector<vector<ll>> &v){
    vector<vector<ll>> ans;
    ll i, ansIndex = 0, len = v.size();

    sort(v.begin(), v.end(), comparator);
    ans.push_back({ v[0][0], v[0][1] });

    for(i = 1; i < len; i ++){
        if(v[i][0] <= ans[ansIndex][1]){
            ans[ansIndex][1] = max(v[i][1], ans[ansIndex][1]);
        }
        else{
            ans.push_back({ v[i][0], v[i][1] });
            ansIndex ++;
        }
    }

    return ans;
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    ll len, i, j, n1, n2;
    cout << "Len : ";
    cin >> len;


    vector<vector<ll>> intervals;
    cout << "Input (n1 n2) : ";
    for(i = 0; i < len; i ++){
        cin >> n1 >> n2;
        intervals.push_back({ n1, n2 });
    }

    vector<vector<ll>> v = mergeIntervals(intervals);

    cout << "Ans : \n";
    for(i = 0; i < v.size(); i ++){
        for(j = 0; j < v[0].size(); j ++){
            cout << v[i][j];
        }
        cout << "\n";
    }
    
}
