#include <iostream>
#include <queue>
using namespace std;

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode *GetNewNode(int x)
{
    BstNode *newNode = new BstNode;
    newNode->data = x;
    newNode->left = newNode->right = NULL;
    return newNode;
}

BstNode *Insert(BstNode *root, int data)
{
    if (root == NULL)
    {
        root = GetNewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}

bool Search(BstNode *root, int data)
{
    if (root == NULL)
        return false;
    else if (root->data == data)
        return true;
    else if (data <= root->data)
        return Search(root->left, data);
    else
        return Search(root->right, data);
}

int FindMin(BstNode *root)
{
    if (root->left != NULL)
        return FindMin(root->left);
    else
        return root->data;
}

int max(int value1, int value2)
{
    if (value1 > value2)
        return value1;
    else
        return value2;
}

int FindHeight(BstNode *root)
{
    if (root == NULL)
        return -1;
    return max(FindHeight(root->left), FindHeight(root->right)) + 1;
}

void LevelOrder(BstNode *root)
{
    if (root == NULL)
        return;
    queue<BstNode *> Q;
    Q.push(root);
    //while there is at least one node discovered
    while (!Q.empty())
    {
        BstNode *current = Q.front();
        cout << current->data << " ";
        if (current->left != NULL)
            Q.push(current->left);
        if (current->right != NULL)
            Q.push(current->right);
        Q.pop();
    }
}

void PreOrder(BstNode *root)
{
    if (root == NULL)
        return;
    printf("%c ", root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(BstNode *root)
{
    if (root == NULL)
        return;
    InOrder(root->left);
    printf("%c ", root->data);
    InOrder(root->right);
}

void PostOrder(BstNode *root)
{
    if (root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    printf("%c ", root->data);
}

BstNode *Delete(BstNode *root, int data)
{
    if (root == NULL)
        return root;
    else if (data < root->data)
        root->left = Delete(root->left, data);
    else if (data > root->data)
        root->right = Delete(root->right, data);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL)
        {
            struct BstNode *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            struct BstNode *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            struct BstNode *temp ;
            temp->data = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}

struct BstNode *GetSuccessor(struct BstNode *root, int data)
{
    // Search the Node
    struct BstNode *current = Search(root, data);
    if (current == NULL)
        return NULL;
    // Case 1: Node has right subtree
    if (current->right != NULL)
    {
        return FindMin(current->right);
    }
    // Case 2 : No right subtree
    else
    {
        struct BstNode *successor = NULL;
        struct BstNode *ancestor = root;
        while (ancestor != current)
        {
            if (current->data < ancestor->data)
            {
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else
                ancestor = ancestor->right;
        }
        return successor;
    }
}

int main()
{
    BstNode *root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    int number;
    cout << "Enter number to be searched: ";
    cin >> number;
    if (Search(root, number) == true)
        cout << "Found \n";
    else
        cout << "Not Found \n";
    cout << FindMin(root);
}