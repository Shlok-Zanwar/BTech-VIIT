#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Check once again
int findMissingAndDuplicate(vector<int> &A, int len){

    // X => Missing Number;
    // Y => Repeat Number;

    // idealSum         = (N*N+1) / 2
    // idealSumSquares  = N(N+1)(2N+1)/6

    // sum = s
    // Sum Sq   

    long long int len = A.size();

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<A.size(); i++){
       S -= (long long int)A[i];
       P -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

    vector <int> ans;

    ans.push_back(repeating);
    ans.push_back(missingNumber);

    // return ans;
    return 0;
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

    cout << "Ans : " << findMissingAndDuplicate(v, len);

}
