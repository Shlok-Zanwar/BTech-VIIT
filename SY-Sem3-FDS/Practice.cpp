#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Given a binary string, find a regex that checks whether the string when converted to decimal number is a power of 2 or not.

// Input: 101
// Output: Yes

// Input: 100
// Output: No

// Input: 1000
// Output: Yes

// Input: 1001
// Output: No

// Ans

// (0|1)*0 -> 0 or 1 any number of times followed by 0


// def find_distance(input1, input2):
//     # input1 = input1.replace(" ", "")
//     # first = input1.find(input2)
//     # last = input1.rfind(input2)

//     # if first == last:
//     #     return -1
//     # elif first == -1:
//     #     return -1
//     # else:
//     #     count = input1.count(input2)
//     #     return last - first - count + 1

//     # Different approach
//     extraCharBetween = 0
//     first = -1
//     last = -1
//     for i in range(len(input1)):
//         if input1[i] == input2:
//             if first == -1:
//                 first = i
//             else:
//                 last = i
//                 extraCharBetween += 1
//         if input1[i] == " " and first != -1:
//             extraCharBetween += 1

//     if first == last:
//         return -1
//     elif first == -1:
//         return -1
//     else:
//         return last - first - extraCharBetween


// Convert above python code to C++
int searchLetter(string input1, char input2) {
    int extraCharBetween = 0;
    int first = -1;
    int last = -1;
    for (int i = 0; i < input1.length(); i++) {
        if (input1[i] == input2) {
            if (first == -1) {
                first = i;
            } 
            else {
                last = i;
                extraCharBetween += 1;
            }
        }
        if (input1[i] == ' ' && first != -1) {
            extraCharBetween += 1;
        }
    }

    if (last == -1) {
        return -1;
    } 
    else if (first == -1) {
        return -1;
    } 
    else {
        return last - first - extraCharBetween;
    }
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);


    cout << searchLetter("a b c d e f g h i j k l m n o p q r s t u v w x y z", 'a') << endl;
    return 0;
}
