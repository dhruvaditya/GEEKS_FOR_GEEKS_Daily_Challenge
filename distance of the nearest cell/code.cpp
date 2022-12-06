vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int row = grid.size(),col = grid[0].size();
	   vector<vector<int>>dist(row,vector<int>(col,0));
	   vector<vector<int>>vis(row,vector<int>(col,0));
	   queue<pair<pair<int,int>,int>>q;
	   int i,j;
	   for(i = 0; i < row; i++)
	   {
	       for(j = 0; j < col; j++)
	       {
	           if(grid[i][j] == 1) 
	           {
	               q.push({{i,j},0});
	               vis[i][j] = 1; // we are taking the 1s so that we can go for a bfs
	           }
	       }
	   }
	   while(q.size())
	   {
	       pair<pair<int,int>,int>temp = q.front();
	       q.pop();
	       i = temp.first.first,j = temp.first.second;
	       dist[i][j] = temp.second;
	       
	       //visit the all four direction 
	       if(i - 1 >= 0 && !vis[i-1][j]) // visit updirection
	       {
	         q.push({{i-1,j},dist[i][j]+1});
	         vis[i-1][j] = 1;
	       }
	       if(i + 1 < row && !vis[i+1][j])//down side
	       {
	          q.push({{i+1,j},dist[i][j]+1}); 
	          vis[i+1][j] = 1;
	       }
	       if(j - 1 >= 0 && !vis[i][j-1]) //left view
	       {
	           q.push({{i,j-1},dist[i][j]+1}); 
	           vis[i][j-1] = 1;
	       }
	       if(j + 1 < col && !vis[i][j+1])//right view
	       {
	           q.push({{i,j+1},dist[i][j]+1}); 
	           vis[i][j+1] = 1;
	       }
	   }
	   return dist;
	}
