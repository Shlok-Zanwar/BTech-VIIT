#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll cases, len, i, prevNum, temp;
    bool breakIt = true;
    
    // cout << "cases : ";
    cin >> cases;
    
    while (cases --){
        // cout << "len : ";
        cin >> len;
        ll b[len];
        breakIt = false;
        
        // cout << "arr : ";
        for(i = 0; i < len; i ++){
            cin >> b[i];
        }

        prevNum = 0;

        for(i = 0; i < len; i ++){
            if(i != 0){
                if(prevNum % b[i] != 0 || (prevNum + b[i]) % b[i] != 0){
                    breakIt = true;
                    break;
                }
            }
            prevNum = prevNum + b[i];
        }

        if(breakIt){
            cout << "-1" << endl;
            // continue;
        }

        prevNum = 0;
        for(i = 0; i < len; i ++){
            cout << prevNum + b[i] << " ";
            prevNum = prevNum + b[i];
        }

        cout << endl;

    }

}
