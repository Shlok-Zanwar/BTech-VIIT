#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void setZeroes(vector<vector<int>>& matrix) {
    map<int, int> i;
    map<int, int> j;
    
    int a, b;
    
    for(a = 0; a < matrix.size(); a ++){
        for(b = 0; b < matrix[0].size(); b ++){
            if(matrix[a][b] == 0){
                i[a] ++;
                j[b] ++;
            }
        }
    }
    
    
    for(a = 0; a < matrix.size(); a ++){
        for(b = 0; b < matrix[0].size(); b ++){
            if(i[a] > 0 || j[b] > 0){
                matrix[a][b] = 0;
            }        
        }
    }

}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    vector < vector < int >> arr;

    arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

    setZeroes(arr);

    cout << "The Final Matrix is " << endl;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
}
