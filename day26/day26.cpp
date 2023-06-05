// THis is the problem soultio of gfg

/*
Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/



class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
    int minDiff(Node *root, int K)
    {   int x= (floors(root,K)==nullptr) ? INT_MAX:   floors(root,K)->data;
        int y=(ceils(root,K)==nullptr )? INT_MAX: ceils(root,K)->data;
        int d1=abs(x-K);
        int d2=abs(y-K);
        // cout<<x<< " "<<y<< " ";
        return min(d1,d2);
        
    }
    
    Node * floors(Node *root,int key){
        Node * res=nullptr;
        while(root){
            if (root->data==key) return root;
            else if (root->data >key) root=root->left;
            else {
                res=root;
                root=root->right;
            }
        }
        return res;
    }
    Node * ceils(Node *root,int key){
        Node * res=nullptr;
        while(root){
            if (root->data==key) return root;
            else if (root->data >key) {
                res=root;
                root=root->left;
            }
            else {
                root=root->right;
            }
        }
        return res;
    }
};