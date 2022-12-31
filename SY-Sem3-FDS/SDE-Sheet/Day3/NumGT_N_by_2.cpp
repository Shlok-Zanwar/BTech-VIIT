#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll findTheNumHashMap(ll arr[], ll len){
    ll i;
    map<ll, ll> m;
    for(i = 0; i < len; i ++){
        m[arr[i]] ++;
    }

    int gt = int(len/2) + 1;
    for(auto itr: m){
        if(itr.second > gt){
            return itr.first;
        }
    }

}


ll findNum(ll arr[], ll len){
    ll i, num = arr[0], cnt = 1;
    for(i = 1; i < len; i ++){
        if(arr[i] != num){
            cnt --;
        }
        else{
            cnt ++;
        }

        if(cnt <= 0){
            num = arr[i];
            cnt = 1;
        }
    }

    return num;
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

    cout << findTheNumHashMap(arr, len);
    
}
