#include<iostream>
#include<queue>
using namespace std;
class tree{
    public:
        int data;
        tree* left;
        tree* right;
        tree(int data){
            this->data= data;
            left = nullptr;
            right = nullptr;
        }
};

void inOrder(tree* root){ //inorder traverse
    if(root!=nullptr){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
void preOrder(tree* root){ //pretorder traverse
    if(root!=nullptr){
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
        
    }
}
void postOrder(tree* root){ //postorder traverse
    if(root!=nullptr){
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

// Recursive method to find height of tree
int heightOfTree(tree *root){
    if(root==nullptr){ // This is base case pf recursion
        return 0;
    }
    else{ //recursivily call for lest and right subtree 
        int ldepth = heightOfTree(root->left);
        int rdepth = heightOfTree(root->right);
        // check the base condition and return base+1 of max of left and right 
        if(ldepth>rdepth){
            return ldepth+1;
        }
        else{
            return rdepth+1;
        }
    }
}

// to print the node that are a k th distance from root
void kthNode(tree* root, int k){
    // Base case if invalid
    if(root==nullptr || k<0){
        return;
    }
    // Base case if k reach to zero then print the data
    if(k==0){
        cout << root->data << " ";
    }
    else{
        kthNode(root->left, k-1);
        kthNode(root->right,k-1);
    }
}
// Level order traversing
void levelOrderTraversing(tree* root){
    // if root equal null return and break
    if(root==nullptr){return;}
    // Create a new queqe to store that ongoing node of tree
    queue<tree*> q;
    q.push(root); // Push the node
    while(q.empty()==false){
        tree *t1 = q.front();
        cout << t1->data<< " ";
        q.pop();
        if(t1->left!=nullptr){
            q.push(t1->left);
        }
        if(t1->right!=nullptr){
            q.push(t1->right);
        }
    } 
}

// to calculate the size of tree as the number of tree
int sizeOfTree(tree* root){
    if(root==nullptr){return 0;}
    else{
        return sizeOfTree(root->left)+sizeOfTree(root->right)+1;
    }
}




int main(){
    tree *root = new tree(10);
    root->left = new tree(20);
    root->right = new tree(30);
    root->right->left = new tree(40);
    root->right->right = new tree(50);
    int height = heightOfTree(root);
    cout << "Height: " << height << endl;
    postOrder(root);
    cout <<endl<< "Node at the k node is: ";
    kthNode(root,2);
    cout << endl<< "level order traversing:"<<endl;
    levelOrderTraversing(root);
    cout <<endl<< "The size of tree is: " << sizeOfTree(root);
    return 0;
}