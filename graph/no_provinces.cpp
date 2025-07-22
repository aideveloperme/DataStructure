//Given an n x n matrix isConnected, where isConnected[i][j] = 1 means city i and city j are directly connected, and 0 means they are not, find the number of provinces (i.e., the number of connected components in the graph).
#include<iostream>
#include<vector>
using namespace std;

class Solution {
	private:
		//DFS function
		void dfs(int node, vector<int> adjLs[],vector<int> &vis){
			vis[node] = 1; //Mark current node as visited 
			for(auto it : adjLs[node]){
				if(!vis[it]){           //if neighbour not visited
					dfs(it, adjLs,vis); //Recursively visit neighbor
				}
			}
		}
	public:
		//Function to count number of provinces
		int numProvinces(vector<vector<int>> adj, int V){
			//convert adjacency matrix to adjacency list
			vector<int> adjLs[V]; //array of vectors, size V
			for(int i =0;i<V;i++){		//loop over all rows
				for(int j = 0;j<V;j++){		//loop over all columns
					if(adj[i][j] == 1&& i!=j){	//if theres a conntected and not self-loop

						adjLs[i].push_back(j); // add edje from i to j
					}
				}
			}
			//step 2: initialize visited vector with all 0s 
			vector<int> vis(V,0);
			int cnt  = 0; //initialize province counter 
			//step 3: traverse all nodes
			for(int i =0;i<V;i++){ //if node i not visited yet
				if(!vis[i]){   //Found a new province
					cnt++;	//visi all nodes in this province
					dfs(i,adjLs,vis);
				}
			}
			return cnt; //return total number of provinces
		}
};
int main(){
	Solution sol;
	vector<vector<int>> adj = {
		{1,1,0},
		{1,1,0},
		{0,0,1}
	};
	int V = adj.size(); //Number of nodes
	cout<<"Number of provinces:"<<sol.numProvinces(adj,V)<<endl;

	return 0;
}
