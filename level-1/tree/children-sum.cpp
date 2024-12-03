#include<iostream>
using namespace std;
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

bool isChildrenSum(tree *mytree){
    if(mytree==nullptr){return true;}
    if(mytree->left==nullptr && mytree->right == nullptr){return true;}
    int sum = 0;
    if(mytree->left!=nullptr){sum +=mytree->left->data;}
    if(mytree->right!=nullptr){sum +=mytree->right->data;}
    return (mytree->data==sum && isChildrenSum(mytree->left) && isChildrenSum(mytree->right));

    
}
int main(){
    tree *mytree;
    mytree->data = 50;
    mytree->left = new tree(20);
    mytree->right =  new tree(30);
    mytree->left->left = new tree(10);
    mytree->left->right = new tree(10);
    mytree->right->left = new tree(20);
    mytree->right->right = new tree(10);
    cout << isChildrenSum(mytree);
    return 0;
}