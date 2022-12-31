#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool findTarget(vector<vector<int>> &v, int target, int rows, int cols){
    // target is smaller than the first element or greater that the last
    if(target < v[0][0] || target > v[rows - 1][cols - 1]){
        return false;
    }
    
    int i = 1, j;
    // Binary search can also be implemented for this one
    while(i < rows){
        if(v[i][0] > target){
            break;
        }
        i ++;
    }
    i --;
    
    // Using Binary search
    int index = lower_bound(v[i].begin(), v[i].end(), target) - v[i].begin();
    if(index < cols && target == v[i][index]){
        return true;
    }
    else{
        return false;
    }

    // Using Linear search
    for(j = 0; j < cols; j ++){
        if(target == v[i][j]){
            return true;
        }
        else if (target < v[i][j] ){
            return false;
        }
    }
    return false;
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

    int target;
    cout << "Target : ";
    cin >> target;


    cout << findTarget(v, target, rows, cols);
}
