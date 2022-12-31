#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void nextPermutation(vector<int> &v){
    int i, len = v.size(), ptr1, ptr2;

    for(i = len - 2; i >= 0; i --){
        if(v[i] < v[i + 1]){
            ptr1 = i;
            break;
        }
    }

    if(i == -1){
        reverse(v.begin(), v.end());
    }
    else{
        for(i = len - 1; i > ptr1; i --){
            if(v[i] > v[ptr1]){
                break;
            }
        }
        swap(v[ptr1], v[i]);
        reverse(v.begin() + ptr1 + 1, v.end());
    }

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

    nextPermutation(v);

    cout << "Output : ";
    for(i = 0; i < len; i ++){
        cout << v[i] << " ";
    }

}
