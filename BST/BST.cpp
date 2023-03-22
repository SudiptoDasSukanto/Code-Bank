#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 

    int data;
    Node* left ;
    Node* right;

    Node(int d){
        this->data = d ;
        this->left = NULL;
        this->right = NULL;
    }
};



Node* CreateBST(Node* root , int d){

    if(root==NULL){
        root = new Node(d);
        return root ;
    }

    if(d>root->data) {
        root->right  = CreateBST(root->right ,d);
    }else{
        root->left = CreateBST(root->left , d);
    }


    return root ;
}

void takeInput(Node* &root){
    int n ;
    cin >> n ;

    while(n!=-1){
        root = CreateBST(root,n);
        cin >> n; 
    }
}

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

int main(){
    Node* root = NULL ;
    
    takeInput(root) ;
    cout << "LevelOrder Traversal \n" ;
    levelOrder(root);
    //inOrder(root) ;
}