#include<iostream>
#include<vector>
using namespace std;

class Solution {
	private:
		//recursive DFS fucntion 
		//node : current node being visited
		//adj[]: adj list representing the graph 
		//vis :visited vector to keep track of the visited nodes 
		//ls : store the final DFS traversal order
		void dfs(int node,vector<int> adj[],vector<int> &vis, vector<int> &ls){
			vis[node]=1;                 //mark current node as visited 
			ls.push_back(node);	     //add current node to traversal list 
						     //traverse all its neighbours
			for(auto it : adj[node]){     
				if(!vis[it]){	      //visit all unvisited neighbors(adj vertices)
					dfs(it,adj,vis,ls); 		//recursive call dfs for the unvisited
				}
			}
		}
	public:
		//function to return a list containing the DFS traversal of the graph
		vector<int> dfsOfGraph(int V, vector<int> adj[]){   
			//initialize visited vector with 0 (unvisited)
			vector<int> vis(V,0);
			vector<int> ls;     //LIST to store the dfs traversal result 
			dfs(0,adj,vis,ls);  //start dfs traversal from node 0
			return ls;   //return the dfs traversal list 
		}
};
int main(){
	int V=5;    //no of vertices 
	vector<int> adj[V];   //adjacency list to represent the graph 

	adj[0].push_back(1);   //contruct an undirected graph by adding edges 
	adj[0].push_back(2);	//edge 0 -2
	adj[1].push_back(0);	//edge 1 -0
	adj[1].push_back(3);	//edge 1 -3
	adj[2].push_back(0);	//edge 2-0
	adj[3].push_back(1);
	adj[4].push_back(20);

	Solution obj;			//creating object of the solution class 
	vector<int> res = obj.dfsOfGraph(V,adj);   //get the dfs traversal
	
	cout<<"DFS Traversal:";   //print the dfs and each node 
	for(int node: res){
		cout<<node<<" ";
	}
	return 0;
}

