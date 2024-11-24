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
    int sum = 0;
    
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


}