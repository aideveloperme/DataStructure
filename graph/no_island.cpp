//Given a 2D grid map of '1's (land) and '0's (water), count the number of islands.
//An island is formed by connecting adjacent lands horizontally or vertically.
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

//use BFS to traverse 
class Solution{ 
	private:
		void dfs(int row,int col, vector<vector<int>> &vis, vector<vector<char>> &grid){
			vis[row][col] = 1;
			queue<pair<int,int>> q;
			q.push({row,col});
	
			int n = grid.size();
			int m = grid[0].size();

			while(!q.empty()){
				int row = q.front().first;
				int col = q.front().second;
				q.pop();
				
				for(int delrow = -1;delrow<=1;delrow++){
					for(int delcol = -1;delcol<=1;delcol++){
						int nrow = row+delrow;
						int ncol = col+delcol;
						if(nrow>=0 && nrow<n && ncol>=0 &&ncol<m && grid[nrow][ncol] =='1' && !vis[nrow][ncol]){
	vis[nrow][ncol] = 1;
							q.push({nrow,ncol});
						}
					}
				}
			}
		}

				//traverse inn the neighbors and mark them if its a land 
public:
int numIsland(vector<vector<char>>& grid){
	//character 0/1 recommend water or land 
	int n = grid.size();
	int m = grid[0].size();
	vector<vector<int>> vis(n,vector<int>(m,0)); //visited matrix 
	int cnt = 0; //island counter 
	for(int row =0;row<n;row++){
		for(int col =0;col<m;col++){  
			//if cell is land and not visited 
			if(grid[row][col] =='1' && !vis[row][col]){
			cnt++;
				dfs(row,col,vis,grid); //traverse the whole island 
			}
		}
	}
	return cnt;
}
};



int main(){
	Solution sol;
	vector<vector<char>> grid = {
		{'1','1','0','0','0'},
		{'1','1','0','0','0'},
		{'0','0','1','0','0'},
		{'0','0','0','1','1'}
	};
	cout<<"Number of island"<<sol.numIsland(grid)<<endl;
	return 0;
}

