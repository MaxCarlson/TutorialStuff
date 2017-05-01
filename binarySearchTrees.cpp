#include <iostream>
#include <cstddef>

using namespace std;	

//create binary tree/nodes

class Node{ 
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
//seed tree
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
        // Get height of tree measured in outer nodes
        int getHeight(Node* root){
            int lH, rH;
            
            if(root->left != NULL){
                lH = 1 + getHeight(root->left);
            } else {
                lH = 0;
            }
            
            if(root->right != NULL){
                rH = 1 + getHeight(root->right);
            } else {
                rH = 0;
            }
            
            if (rH >= lH){
                return rH;
            } else if (lH > rH) {
                return lH;
            } else {
                return 0;
            }    
        }

}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}