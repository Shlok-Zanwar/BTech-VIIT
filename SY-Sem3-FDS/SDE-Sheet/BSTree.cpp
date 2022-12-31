#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode (int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};


class BinarySearchTree {

private:
    TreeNode *root = NULL;

    void insert(int data) {
        TreeNode *temp = root;
        if(root == NULL){
            root = new TreeNode(data);
            return;
        }
        while(true){

            if(data > temp->data && temp->right == NULL){
                temp->right = new TreeNode(data);
                return;
            }
            if(data > temp->data){
                temp = temp->right;
            }

            if(data < temp->data && temp->left == NULL){
                temp->left = new TreeNode(data);
                return;
            }
            if(data < temp->data){
                temp = temp->left;
            }

            if(temp->data == data){
                cout << "Error :- Node already present";
            }
        }
    }

    TreeNode *insertRec(TreeNode *node, int data){
        if(node == NULL){
            node = new TreeNode(data);
        }
        else if (data < node->data){
            node->left = insertRec(node->left, data);
        }
        else if(data > node->data){
            node->right = insertRec(node->right, data);
        }

        return node;
    }

    void inorderRec(TreeNode *node){
        if(node == NULL){
            return;
        }
        inorderRec(node->left);
        cout << node->data << " - ";
        inorderRec(node->right);
    }

    void inorder(){
        TreeNode *itr = root;
        TreeNode *temp = NULL;
        stack<TreeNode *> stk;

        stk.push(itr);
        itr = itr->left;
        while(!stk.empty()){
            if(itr == NULL){
                temp = stk.top();
                stk.pop();

                cout << temp->data << " - ";
                itr = temp->right;
            }
            if(itr != NULL){
                stk.push(itr);
                itr = itr->left;
            }
        }
    }

    void breadthFirst(){
        TreeNode *itr = root;
        
        queue<TreeNode *> q;
        q.push(itr);

        while(!q.empty()){
            itr = q.front();
            cout << itr->data << " - ";
            q.pop();
            if(itr->left != NULL){
                q.push(itr->left);
            }
            if(itr->right != NULL){
                q.push(itr->right);
            }
        }
    }

public:
    BinarySearchTree(int data){
        insertData(data);
    }

    void insertData(int data, bool rec = false){
        if(rec){
            root = insertRec(root, data);
        }
        else{
            insert(data);
        }
    }

    void printInorder(bool rec = false){
        cout << "Inorder - (" << (rec ? "rec" : "non") << ") : ";
        if(rec){
            inorderRec(root);
        }
        else{
            inorder();
        }
        cout << "\n";
    }

    void printBFT(){
        cout << "BFT             : ";
        breadthFirst();
    }

};


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    BinarySearchTree bst = BinarySearchTree(10);
    bst.insertData(12);
    bst.insertData(2);
    bst.insertData(5);
    
    bst.printInorder();
    bst.printInorder(true);
    bst.printBFT();
}
