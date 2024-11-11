#include<iostream>
#include<climits>
#include<queue>
using namespace std;
int minEle = INT_MAX, maxEle = INT_MIN;
class tree{
    public:
        int data;
        tree* left;
        tree* right;
        tree(){
            left = nullptr;
            right = nullptr;
        }
        tree(int x){
            data = x;
            left = nullptr;
            right = nullptr;
        }
};
// Level order and comparing the elemenent to find the minimun and maximum element 
void MaxMinEleTree(tree* root){
    if(root==nullptr){return;}
    minEle = root->data;
    maxEle = root->data;
    queue<tree*> q;
    q.push(root);
    while(q.empty()==false){
        tree* t1 = q.front();
        if(t1->data<minEle){minEle = t1->data;}
        if(t1->data>maxEle){maxEle = t1->data;}
        q.pop();
        if(t1->left!=nullptr){
            q.push(t1->left);
        }
        if(t1->right!=nullptr){
            q.push(t1->right);
        }
    }
}

// No Need for the global variable form here
int findMax(tree* root){
    if(root==nullptr){return INT_MIN;}
    int maxE = root->data;
    int lmax = findMax(root->left);
    int rmax = findMax(root->right);
    if(rmax>maxE){maxE=rmax;}
    if(lmax>maxE){maxE=lmax;}
    return maxE;
}
int findMin(tree* root){
    if(root==nullptr){return INT_MAX;}
    int minE = root->data;
    int lmin = findMin(root->left);
    int rmin = findMin(root->right);
    if(rmin<minE){minE=rmin;}
    if(lmin<minE){minE=lmin;} 
    return minE;
}
void inOrder(tree* root){ //inorder traverse
    if(root!=nullptr){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void leftViewtree(tree* root){
    if(root==nullptr){return;}
    tree* t = root;
    while(t!=nullptr){
        cout << t->data <<" ";
        t = t->left;
    }
}

void rightViewtree(tree* root){
    if(root==nullptr){return;}
    tree* t1 = root;
    while(t1!=nullptr){
        cout << t1->data <<" ";
        t1 = t1->right;
    }
}

void topViewtree(tree* root){
    if(root==nullptr){return;}
    tree *t2=root->left, *t1 = root;
    queue<tree*> ql, qr;
    while(t2!=nullptr){
        ql.push(t2);
        t2 = t2->left;
    }
    while(t1!=nullptr){
        qr.push(t1);
        t1 = t1->right;
    }
    while(ql.empty()==false){
        cout << ql.front()->data <<" "; ql.pop();
    }
    while(qr.empty()==false){
        cout << qr.front()->data<<" "; qr.pop();
    }
}
int main(){
    tree* root = new tree(50);
    root->left = new tree(40);
    root->right = new tree(70);
    root->right->left = new tree(100);
    root->right->right = new tree(150);
    root->left->left = new tree(200);
    MaxMinEleTree(root);
    cout << "Minimum Element is:"<< minEle << endl;
    cout << "Maximum element is:"<< maxEle << endl;
    cout << "Maximum: "<< findMax(root)<< " Minimum: " <<  findMin(root)<<endl;;
    cout << "Left View tree: ";
    leftViewtree(root);
    cout << endl <<"Right View: ";
    rightViewtree(root);
    cout <<endl<< "Top view: ";
    topViewtree(root);
    return 0;
}