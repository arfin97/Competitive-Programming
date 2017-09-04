//https://www.urionlinejudge.com.br/judge/en/problems/view/1201
//Verdict: Runtime Error
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

int preflag = 0;
void PrintPreOrder(Node *root){
    if(root == NULL) return;

    if(preflag == 0) cout << root->data;
    else cout <<  " " << root->data;
    preflag = 1;

    PrintPreOrder(root->left);
    PrintPreOrder(root->right);
}

int inflag = 0;
void PrintInOrder(Node *root){
    if(root == NULL) return;
    PrintInOrder(root->left);

    if(inflag == 0) cout << root->data;
    else cout <<  " " << root->data;
    inflag = 1;

    PrintInOrder(root->right);
}

int postflag = 0;
void PrintPostOrder(Node *root){
    if(root == NULL) return;
    PrintPostOrder(root->left);
    PrintPostOrder(root->right);

    if(postflag == 0) cout << root->data;
    else cout <<  " " << root->data;
    postflag = 1;
}


Node *FINDMIN(Node *root){
    if(root == NULL) return NULL;
    else if(root->left == NULL){
        return root;
    }
    else{
        return FINDMIN(root->left);
    }
}

Node *Delete(Node *root, int data){
    //Corner
    if(root == NULL) return root;
    //Search for the data
    else if(data < root->data) root->left = Delete(root->left, data);
    else if(data > root->data) root->right = Delete(root->right, data);
    else //Woo..Hoo I found you, Get ready to be deleted.
    {
        //no child condition
        if(root->left == NULL && root->right == NULL){
             delete root;
             root = NULL;
             return root;
        }
        //one child condition
        else if(root->left == NULL){
            Node *temp = root;
            root = root->right;
            delete temp;
            return root;
        }
        else if(root->right == NULL){
            Node *temp = root;
            root = root->left;
            delete temp;
            return root;
        }
        //two child condition
        else{
            Node *temp = FINDMIN(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
            return root;
        }
    }
}


int main(){
    string cmd;
    int ch;
    cin >> cmd; cin >> ch;

    Node *root = NULL;
    root = Insert(root, ch);

    while(cin >> cmd){
        if(cmd == "I"){
            cin >> ch;
            Insert(root, ch);
        }
        if(cmd == "INFIXA"){
            PrintInOrder(root);
            cout << endl;
            inflag = 0;
        }

        if(cmd == "PREFIXA"){
            PrintPreOrder(root);
            cout << endl;
            preflag = 0;
        }
        if(cmd == "POSFIXA"){
            PrintPostOrder(root);
            cout << endl;
            postflag = 0;
        }

         if(cmd == "P"){
            cin >> ch;
            if(Search(root, ch) == true) cout << ch << " " << "existe" << endl;
            else cout << ch << " " << "nao" << " " << "existe" << endl;
        }

        if(cmd == "R"){
            cin >> ch;
            Delete(root, ch);
        }
    }

/*
I 5
I 2
I 1
I 4
INFIXA
R 1
INFIXA
*/

    return 0;
}
