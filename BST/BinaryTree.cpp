#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node*right;
    Node(int data){
        this->data = data;
        left = NULL ;
        right = NULL;
    }
};

Node* BinaryTree(Node* root){
    cout <<"Enter the value: " << endl;
    int x ;
    cin >> x ;
    root = new Node(x);

    if(x==-1){
       return NULL ;
    }

    cout << "Enter the left node of " << x << endl;

    root->left = BinaryTree(root->left);

    cout << "Enter the right node of " << x << endl;

    root->right = BinaryTree(root->right);

    return root ;

}

void levelOrder(Node* root){
    queue<Node*>q ;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout << endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp->data << " " ;
            
            if(temp->left) {
            q.push(temp->left);
            }

            if(temp->right) q.push(temp->right);
        }

    }
}

void inOrder(Node* root){  // LNR

    if(root==NULL) return ;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);

}

void preOrder(Node* root){  //NLR

    if(root==NULL){
        return ;
    }

    cout << root->data << " " ;
    preOrder(root->left);
    preOrder(root->right);

}

void postOrder(Node* root){   //LRN

    if(root==NULL) return ;

    postOrder(root->left);
    postOrder(root->right);

    cout << root->data << " ";

}

int height(Node* root){

    if(root == NULL) return 0;

    int left_height = height(root->left);
    int  right_height = height(root->right);

    int ans = max(left_height , right_height) +1 ;

    return ans ;
}

int diameter(Node* root){
    if(root == NULL){
        return 0;
    }

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) +1 ;

    int ans = max(op1,max(op2,op3));
    return ans ;
}

bool balancedTree(Node* root){

    if(root == NULL) return true;

    bool left  = balancedTree(root->left);
    bool right = balancedTree(root->right);
    bool diff = abs(height(root->left)-height(root->right))<=1 ;

    if(left && right && diff) return 1 ;
    
     return 0;

}

int main(){

    Node* root = NULL ;
    root = BinaryTree(root);
    //1 2 4 -1 -1 5 8 -1 -1 -1 3 6 -1 9  10 -1 -1  -1 7 -1 -1
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    levelOrder(root);

    inOrder(root);
    cout << endl;

    preOrder(root);
    cout << endl;

    postOrder(root);

    cout << endl;

    cout << height(root);
    cout << endl;

    cout << diameter(root);

    cout << endl;

    cout << balancedTree(root);

}