//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
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
class Solution {
    private:
    void traverse(Node* root,unordered_map<Node*,Node*>&parent,Node*&start,int &target)
    {
        if(root==nullptr)return;
        if(root->data==target)start=root;
        if(root->left!=nullptr)
        {parent[root->left]=root;traverse(root->left,parent,start,target);}
        if(root->right!=nullptr)
        {
            parent[root->right]=root;
            traverse(root->right,parent,start,target);
        }
    }
  public:
    int minTime(Node* root, int target) 
    {
        unordered_map<Node*,Node*>parent;
        Node* start;
        traverse(root,parent,start,target);
        int count=0;
        queue<pair<Node*,int>>Q;
        Q.push(make_pair(start,0));
        unordered_set<Node*>vis;
        vis.insert(start);
        while(!Q.empty())
        {
            pair<Node*,int>curr=Q.front();Q.pop();
            count=max(count,curr.second);
            // cout<<curr.first->data<<" "<<curr.second<<endl;
            if(curr.first!=root and vis.find(parent[curr.first])==vis.end())
            {
            Q.push(make_pair(parent[curr.first],curr.second+1));
            vis.insert(parent[curr.first]);
            }
            if(curr.first->left!=nullptr and vis.find(curr.first->left)==vis.end()){
                Q.push(make_pair(curr.first->left,curr.second+1));
                vis.insert(curr.first->left);
            }
            if(curr.first->right!=nullptr and vis.find(curr.first->right)==vis.end())
            {Q.push(make_pair(curr.first->right,curr.second+1));
            vis.insert(curr.first->right);
            }
            
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends