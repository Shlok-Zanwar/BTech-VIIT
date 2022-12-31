#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool twoSum2Ptr(int arr[], int len, int target){
    int i, l = 0, r = len - 1;

    sort(arr, arr + len);

    while(l < r){
        if(arr[l] + arr[r] == target){
            return true;
        }

        if(arr[l] + arr[r] > target){
            r --;
        }
        else{
            l ++;
        }
    }

    return false;
}

bool twoSum2HashMap(int arr[], int len, int target){
    int i;
    map<int, int> m;
    for(i = 0; i < len; i ++){
        m[ arr[i] ] ++;
    }

    for(auto itr: m){
        if(itr.first > target / 2){
            return false;
        }

        if(itr.first*2 == target){
            return itr.second > 1;
        }
        if(m.count(target - (itr.first))){
            return true;
        }
    }

    return false;

    // map<int, int> m;
    // int i, len = nums.size();
    // vector<int> v;

    // for(i = 0; i < len; i ++ ){
    //     if(m[target - nums[i]] > 0){
    //         v.push_back(m[target-nums[i]] - 1);
    //         v.push_back(i);
    //         return v;
    //     }
    //     m[nums[i]] = i + 1;
        
    // }
    // return v;
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

    int target;
    cout << "Target : ";
    cin >> target;

    cout << twoSum2Ptr(arr, len, target) << "\n";
    cout << twoSum2HashMap(arr, len, target) << "\n";
}
