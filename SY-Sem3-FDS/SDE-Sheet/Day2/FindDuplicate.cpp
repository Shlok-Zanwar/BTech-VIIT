#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int findDuplicate(vector<int> &v, int len){
    int i, sum = 0;
    for(i = 0; i < len; i ++){
        sum += v[i];
    }

    return sum - (len*(len-1))/2;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int len, i, j, temp;
    cout << "Len : ";
    cin >> len;

    vector<int> v;
    cout << "Arr : ";
    for(i = 0; i < len; i ++){
        cin >> temp;
        v.push_back(temp);
    }

    cout << "Ans : " << findDuplicate(v, len);
}
