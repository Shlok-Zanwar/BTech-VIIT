#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    cout << "len = ";
    cin >> n;

    vector<vector<int>> pascalsTriangle;
    int i = 1, j;
    pascalsTriangle.push_back({1});

    for(i; i < n; i ++){
        pascalsTriangle.push_back({1});
        for(j = 0; j < i - 1; j ++){
            pascalsTriangle[i].push_back(pascalsTriangle[i-1][j] + pascalsTriangle[i-1][j + 1]);
        }
        pascalsTriangle[i].push_back(1);
    }

    for(i = 0; i < n; i ++){
        for(j = 0; j < n - i; j ++){
            cout << " ";
        }

        for(j = 0; j < pascalsTriangle[i].size(); j ++){
            cout << pascalsTriangle[i][j] << " ";
        }
        cout << "\n";
    }

}
