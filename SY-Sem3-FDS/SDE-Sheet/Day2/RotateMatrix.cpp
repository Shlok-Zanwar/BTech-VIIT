#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void rotateMatrix(vector<vector<int>> &v, ll rows, ll cols){
    int i, j;

    // Inverse the matrix and then reverse every row
    for(i = 0; i < rows; i ++){
        for(j = i + 1; j < cols; j ++){
            swap(v[i][j], v[j][i]);
        }
        reverse(v[i].begin(), v[i].end());
    }

} 


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    ll rows, cols, i, j, temp;
    cout << "Rows, Cols : ";
    cin >> rows >> cols;

    vector<vector<int>> v;

    cout << "Input : \n";
    for(i = 0; i < rows; i ++){
        v.push_back({});
        for(j = 0; j < cols; j ++){
            cin >> temp;
            v[i].push_back(temp);
        }
    }


    rotateMatrix(v, rows, cols);
}
