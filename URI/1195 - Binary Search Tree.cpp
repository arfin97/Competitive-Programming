//https://www.urionlinejudge.com.br/judge/en/problems/view/1195
#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << (x) << endl
#define fr freopen("in.txt", "r", stdin);
#define fw freopen("out.txt", "w", stdout);
#define mem(x) memset((x), 0, sizeof((x)));

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *GetNewNode(int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node *Insert(Node *root, int data){
    if(root == NULL){
        root = GetNewNode(data);
    }
    else if(data <= root->data){
        root->left = Insert(root->left, data);
    }
    else if(data > root->data){
        root->right = Insert(root->right, data);
    }
    return root;
}

bool Search(Node *root, int data){
    if(root == NULL) return false;
    else if(data == root->data) return true;
    else if(data <= root->data) return Search(root->left, data);
    else if(data > root->data) return Search(root->right, data);
}

void PrintPreOrder(Node *root){
    if(root == NULL) return;
    printf(" %d", root->data);
    PrintPreOrder(root->left);
    PrintPreOrder(root->right);
}

void PrintInOrder(Node *root){
    if(root == NULL) return;
    PrintInOrder(root->left);
    printf(" %d", root->data);
    PrintInOrder(root->right);
}

void PrintPostOrder(Node *root){
    if(root == NULL) return;
    PrintPostOrder(root->left);
    PrintPostOrder(root->right);
    printf(" %d", root->data);
}

int main(){
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++){
        int n;
        cin >> n;
        int num; cin >> num;
        Node *root = NULL;
        root = Insert(root, num);
        for(int i = 1; i < n; i++){
            cin >> num;
            Insert(root, num);
        }
        printf("Case %d:\n", tr);
        printf("Pre.:");
        PrintPreOrder(root);
        printf("\n");
        printf("In..:");
        PrintInOrder(root);
        printf("\n");
        printf("Post:");
        PrintPostOrder(root);
        printf("\n\n");
    }
    return 0;
}
