#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void sortArr(vector<int> &v){
    int i, len = v.size(), zeros = 0, ones = 0, twos = 0;

    for(i = 0; i < len; i++){
        if(v[i] == 0){
            zeros ++;
        }
        else if(v[i] == 1){
            ones ++;
        }
        else{
            twos ++;
        }
    }

    for(i = 0; i < len; i++){
        if(zeros > 0){
            v[i] = 0;
            zeros --;
        }
        else if(ones > 0){
            v[i] = 1;
            ones --;
        }
        else{
            v[i] = 2;
            // twos --''
        }
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

    sortArr(v);

    cout << "Output : ";
    for(i = 0; i < len; i ++){
        cout << v[i] << " ";
    }

}
