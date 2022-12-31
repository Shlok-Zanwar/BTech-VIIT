#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


vector<int> findTheNumHashMap(ll arr[], ll len){
    ll i;
    map<ll, ll> m;
    for(i = 0; i < len; i ++){
        m[arr[i]] ++;
    }

    int gt = int(len/2) + 1;
    vector<int> ans;
    for(auto itr: m){
        if(itr.second > gt){
            ans.push_back(itr.first);
        }
    }

    return ans;
}


vector<int> findNum(ll arr[], ll len){
    ll i, num1 = -1, num2 = -1, cnt1 = 0, cnt2 = 0;

    for(i = 0; i < len; i ++){
        if(num1 == arr[i]){
            cnt1 ++;
        }
        else if(num2 == arr[i]){
            cnt2 ++;
        }
        else if(cnt1 == 0){
            num1 = arr[i];
            cnt1 = 1;
        }
        else if(cnt2 == 0){
            num2 = arr[i];
            cnt2 = 1;
        }
        else{
            cnt1 --;
            cnt2 --;
        }
    }

    cnt1 = 0;
    cnt2 = 0;

    vector<int> ans;
    for(i = 0; i < len; i ++){
        if(arr[i] == num1){
            cnt1 ++;
        }
    
        if(arr[i] == num2){
            cnt2 ++;
        }
    }

    int gt = len / 3;
    if(cnt1 > gt){
        ans.push_back(num1);
    }
    if(cnt2 > gt && num1 != num2){              // This condition for same numsbeing pushed twice in ans
        ans.push_back(num2);
    }


    return ans;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int i, len;
    // cout << "len : ";
    cin >> len;
    ll arr[len];
    
    // cout << "arr : ";
    for(i = 0; i < len; i ++){
        cin >> arr[i];
    }

    vector<int> ans = findTheNumHashMap(arr, len);

    cout << "Ans - ";
    for(i = 0; i < len; i ++){
        cout << ans[i] << " ";
    }
}
