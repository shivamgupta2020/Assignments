#include<bits/stdc++.h>
using namespace std;

struct node
{
    char key;
    struct node *left, *right;
};

struct node *newNode(char item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *insert(struct node *node, char key)
{
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}
void postorder(struct node *root)
{
    
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}

void preorder(struct node *root)
{
    
    if (root != NULL)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

int main()
{

    struct node *root = NULL;
    
cout<<"Enter string for building tree:"<<endl;
    string s;
    cin>>s;
    int n = s.size();
    root = insert(root,s[0]);
    for (int i = 1; i < n; i++)
    {
        insert(root,s[i]);
    }
    cout<<"Preorder Transversal"<<endl;
    preorder(root);
    printf("\n");
    cout<<"Inorder Transversal"<<endl;
    inorder(root);
    printf("\n");
    cout<<"Postorder Transversal"<<endl;
    postorder(root);
    printf("\n");

    return 0;
}
