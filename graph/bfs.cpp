#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
	public:
		//this same code will work on directed graph as well , 0 based indexing graph 
		//Functionto return the bfs of given graph ,given no of nodes and adj list
		vector<int> bfsOfGraph(int V, vector<int> adj[]) {
			vector<int> vis(V,0); //create vis array with initial configuration having 0 
			vis[0] = 1; 		//mark starting node as visited
			queue<int> q; 		//q to store nodes to visit next
		    	                         //always take somehting out of the queue till it having empty 
			q.push(0); //start bfs from node 0 

			vector<int> bfs;   //vector to store the order of bfs traversal 
			

			//there are  nodes to process in the queue 
			while(!q.empty()){
				int node = q.front();		//get the front node from queue 
				q.pop();			//remove it from the quque 
				bfs.push_back(node);		//add it to the bfs traversal result 

				for(auto it : adj[node]) { 	//visit all adjacent node of node 
					if(!vis[it]) {		//if this adjacent node has not been visited
						vis[it] = 1;	//mark it as visited
						q.push(it);	//addit to the quque to process next node
					}
				}
			}
			return bfs;
		}
};
int main(){
	int V = 5;
	vector<int> adj[V];

	adj[0].push_back(1);
	adj[0].push_back(3);
	adj[1].push_back(0);
	adj[1].push_back(2);

	adj[2].push_back(4);
	adj[2].push_back(8);

	adj[3].push_back(3);
	adj[3].push_back(9);

	Solution sol;
	vector<int> bfs = sol.bfsOfGraph(V,adj);
	cout<<"BFS traversal stating from node 0:"<<endl;
	for(int node:bfs){
		cout<<node<<" ";
	}
	cout<<endl;
	return 0;
}

