#include <iostream>
#include <string>
using std::string, std::cout, std::endl;

class TreeNode
{
private:
    string value;
    int count;
    TreeNode* left;
    TreeNode* right;
public:
    TreeNode() =default ;
    TreeNode(string str, int c, TreeNode* l, TreeNode* r) : value(str), count(c), left(l), right(r){};
    TreeNode(const TreeNode&);
    TreeNode& operator=(const TreeNode& rhs);
    string getValue() const{return value;};
    int getCount() const {return count;};
    TreeNode* getLeft() const{return left;};
    TreeNode* getRight() const{return right;};
    void setValue(string val){value = val;};
    void updateCount(){++count;};
};
TreeNode::TreeNode(const TreeNode& copy){ // could have been a oneliner
    value = copy.value;
    count = (copy.count);
    ++count;
    left = copy.left;
    right = copy.right; 

};


TreeNode& TreeNode::operator=(const TreeNode& rhs){
    value = rhs.value;
    count = (rhs.count);
    ++count;
    left = rhs.left;
    right = rhs.right; 
    return *this;
};


class BinStrTree{
private:
    TreeNode* root;
public:
    BinStrTree(): root(new TreeNode){
    cout << "My tree is at value : " << root->getValue() << endl;
    cout << "My tree is at count : " << root->getCount() << endl;
    };
    BinStrTree(TreeNode* tree): root(tree){};
    BinStrTree(const BinStrTree&);
    BinStrTree& operator=(const BinStrTree& copie);
    ~BinStrTree();
};
BinStrTree::BinStrTree(const BinStrTree& copy){
    root = new TreeNode;
    root = copy.root;
    cout << "My tree is at value : " << root->getValue() << endl;
    cout << "My tree is at count : " << root->getCount() << endl;
}
BinStrTree& BinStrTree::operator=(const BinStrTree& copy){
    auto temp = new TreeNode(*copy.root);
    root = temp;
    cout << "My tree is at value : " << root->getValue() << endl;
    cout << "My tree is at count : " << root->getCount() << endl;
    return *this;
}

BinStrTree::~BinStrTree(){
    delete root->getLeft();
    delete root->getRight();
    delete root;
}

int main(int argc, char const *argv[])
{
    TreeNode first;
    TreeNode second;
    TreeNode third;
    second.updateCount();
    third = second;
    BinStrTree arbre1(&first);
    BinStrTree arbre2(&second);

    return 0;
}
