//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 1000000007
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
map<ll,ll> m;
struct node 
{ 
    int key; 
    struct node *left, *right; 
}; 
   
// A utility function to create a new BST node 
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
   
// A utility function to do inorder traversal of BST 
void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d \n", root->key); 
        inorder(root->right); 
    } 
} 

void printLevelOrder(node *root) 
{ 
    // Base Case 
    if (root == NULL)  return; 
  
    // Create an empty queue for level order tarversal 
    queue<node *> q; 
  
    // Enqueue Root and initialize height 
    q.push(root); 
  	m[root->key]=1;
    while (q.empty() == false) 
    { 
        // Print front of queue and remove it from queue 
        node *node = q.front(); 
        q.pop(); 
  
        /* Enqueue left child */
        if (node->left != NULL) 
            q.push(node->left),m[(node->left)->key]=m[root->key]+1; 
  
        /*Enqueue right child */
        if (node->right != NULL) 
            q.push(node->right),m[(node->right)->key]=m[root->key]+1; 
    } 
}
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key) 
{ 
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key); 
  
    /* Otherwise, recur down the tree */
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    /* return the (unchanged) node pointer */
    return node; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll n;cin>>n;
    ll a[n],i;
    for (i=0;i<n;i++)	cin>>a[i];
    struct node *root = NULL; 
	root=insert(root,a[0]);
	for (i=1;i<n;i++)	insert(root,a[i]);
	printLevelOrder(root);
	for (i=0;i<n;i++)	cout<<m[a[i]]<<" ";

}	