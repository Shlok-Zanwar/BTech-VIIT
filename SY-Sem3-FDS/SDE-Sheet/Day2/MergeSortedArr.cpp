#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void mergeSortedArrays(int arr1[], int arr2[], int m, int n){
    int i = m-1, j = 0;
    while(j < n && i >= 0){
        if(arr2[j] < arr1[i]){
            swap(arr2[j], arr1[i]);
            j ++;
            i --;
        }
        else{
            break;
        }
    }

    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int m, n, i, j, temp;
    cout << "m n (len of arr1 and 2) : ";
    cin >> m >> n;

    int arr1[m], arr2[n];
    cout << "Array 1 : ";
    for(i = 0; i < m; i ++){
        cin >> arr1[i];
    }
    cout << "Array 2 : ";
    for(i = 0; i < n; i ++){
        cin >> arr2[i];
    }



}
