#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct LLNode{
    int data;
    LLNode *next;

    LLNode(int d){
        data = d;
        next = NULL;
    }
};

class LinkedList {
private:
    LLNode *head = NULL;
    
    void insert(int d){
        LLNode *newNode = new LLNode(d);

        if(head == NULL){
            head = newNode;
            return;
        }


        LLNode *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        
        return;
    }

    void printLL(){
        cout << "LL :- ";

        LLNode *temp = head;
        while(temp != NULL){
            cout << temp->data << ", ";
            temp = temp->next;
        }
        
        cout << "\n";
    }

};


LLNode *head = NULL;

int sum;


int binaryToDecimalRec(LLNode *curr){
    if(curr == NULL){
        return 0;
    }

    int toThePow = binaryToDecimalRec(curr->next);
    if(curr->data == 1){
        sum += pow(2, toThePow);
    }

    // or sum += curr->data*pow(2, toThePow)

    return toThePow + 1;
}

int binaryToDecimal(LLNode *head){
    // sum = 0;
    binaryToDecimalRec(head);
    return sum;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    

    // printLL();
    // insert(0);
    // insert(0);
    // insert(0);
    // insert(1);
    // insert(1);
    // insert(0);
    // insert(0);
    // insert(1);
    // insert(0);
    // // insert(0);
    // printLL();

    // cout << "Decimal = " << binaryToDecimal(head); 

    

}
