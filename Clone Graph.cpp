#include <bits/stdc++.h> 
/***************************************************************************

	Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val, vector<graphNode *> neighbours)
    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
	};

******************************************************************************/

graphNode *cloneGraph(graphNode *node)
{
    // Write your code here.
	if(node==NULL)
        return NULL;
        
        queue<graphNode*> q;
        q.push(node);
        unordered_map<graphNode*,graphNode*> mp;
        mp[node]=new graphNode(node->data,{});
        while(q.size())
        {
            auto temp=q.front();
            // mp[temp]=new Node(temp->data,{});
            vector<graphNode*> nb;
            q.pop();
            for(auto it:temp->neighbours)
            {
                if(mp.find(it)==mp.end())
                {
                    mp[it]=new graphNode(it->data,{});
                    nb.push_back(mp[it]);
                    q.push(it);
                }
                mp[temp]->neighbours.push_back(mp[it]);
            }
            
        }
        return mp[node];
}