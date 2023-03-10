// // Stack using Linked List
// // This list just points to the previous node (efficient).

// #include <bits/stdc++.h>
// using namespace std;

// struct Node{   
//     int data;
//     struct Node *prev;
// };

// Node *last = NULL;

// void addToEnd();
// void deleteLast();

// int main(){
//     int task;

//     while (true){
//         cout << "\nEnter operation :- " << endl;
//         cout << "1) Push" << endl;
//         cout << "2) Pop" << endl;
//         cout << "3) Top" << endl;
//         cout << "0) Exit" << endl;
//         cout << "Choice : ";
//         cin >> task;

//         switch(task){
//             case 1:
//                 addToEnd();
//                 break;

//             case 2:
//                 deleteLast();
//                 break;

//             case 3:
//                 if(last == NULL){
//                     cout << "=> Stack is empty." << endl;
//                 }
//                 else{
//                     cout << "=> Top element is '" << last->data << "'." << endl;
//                 }
//                 break;

//             case 0:
//                 exit(0);

//             default:
//                 cout << "Invalid choice, please try again." << endl;
//                 break;
//         }

//     }

// }

// void addToEnd(){
//     int value;
//     cout << "Enter data : " ;
//     cin >> value;

//     Node *temp = new Node();
//     temp->data = value;
//     temp->prev = last;

//     last = temp;
// }


// void deleteLast(){
//     if(last == NULL){
//         cout << "=> Stack is already empty." << endl;
//     }
//     else{
//         Node *temp = last;
//         last = last->prev;
//         temp->prev = NULL;
//         cout << "=> Top element '" << temp->data << "' popped." << endl;
//         delete(temp);
//     }
// }


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


struct Node{
    int data;
    Node *prev;
};


void push(Node **last){
    Node *newNode = new Node();
    int d;
    cout << "       Data : ";
    cin >> d;

    newNode->data = d;
    newNode->prev = *last;

    *last = newNode;
}


int pop(Node **last){
    if(*last == NULL){
        return -1;
    }

    Node *newNode = new Node();
    newNode = *last;
    *last = (*last)->prev;


    newNode->prev = NULL;
    // delete(newNode);
    return (newNode)->data;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    Node *last = NULL;

    cout << "Stack Using LL : \n";
    int task;
    while (true){
        cout << "\nEnter operation :- " << endl;
        cout << "1) Push" << endl;
        cout << "2) Pop" << endl;
        cout << "3) Top" << endl;
        cout << "0) Exit" << endl;
        cout << "Choice : ";
        cin >> task;

        switch(task){
            case 1:
                push(&last);
                break;

            case 2:
                cout << pop(&last);
                break;

            case 3:
                if(last == NULL){
                    cout << "=> Stack is empty." << endl;
                }
                else{
                    cout << "=> Top element is '" << last->data << "'." << endl;
                }
                break;

            case 0:
                exit(0);

            default:
                cout << "Invalid choice, please try again." << endl;
                break;
        }

    }

}


