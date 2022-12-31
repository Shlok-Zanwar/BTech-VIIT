#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int countPairs(int arr[], int len){
    map<int, int> m;

    int ans = 0;
    for(int i = len - 1; i >= 0 ; i --){
        for(auto itr: m){
            // cout << i << " " << " " << itr.first << " " << float(arr[i]) / 2 << '\n';
            if(ceil(float(arr[i]) / 2) > itr.first){
                ans += itr.second;
            }
            else{
                break;
            }
        }
        m[arr[i]] ++;
    }

    return ans;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int i, len;
    cout << "len : ";
    cin >> len;
    int arr[len];
    
    cout << "arr : ";
    for(i = 0; i < len; i ++){
        cin >> arr[i];
    }

    cout << countPairs(arr, len);

}
