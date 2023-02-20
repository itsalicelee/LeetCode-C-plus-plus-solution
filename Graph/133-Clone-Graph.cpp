/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* cur, unordered_map<Node*, Node*>& map){
        vector<Node*> neighbor;
        Node* newNode = new Node(cur->val);
        map[cur] = newNode;  // map cur node with newNode
        
        for(auto it:cur->neighbors){
            if(map.find(it) == map.end()){  // this neightobr not saved yet
                neighbor.push_back(dfs(it, map));
            }
            else{
                neighbor.push_back(map[it]);
            }
        }
        newNode -> neighbors = neighbor;
        return newNode;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> map;
        if(node == NULL){  // no node
            return node;
        }
        if(node->neighbors.size() == 0){  // one node
            Node* newNode = new Node(node->val);
            return newNode;
        }

        return dfs(node, map);
        
    }
};
