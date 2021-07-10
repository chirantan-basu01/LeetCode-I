class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        using pos_pair = pair<int,int>;
		queue<pos_pair> q;
   
    // size of row 
    int n = maze.size();
    // size of column
    int m = maze[0].size();
    
    // push the intial entrance
    q.push({entrance[0], entrance[1]});
    
    // distance array to go in 4 directions
    int distx[4] = {0,0,-1,1};
    int disty[4] = {-1,1,0,0};
    
    // visited to keep track of node which is visted so no need to visit again
    vector<vector<bool>>visited(n, vector<bool>(m,false));
    visited[entrance[0]][entrance[1]] = true;
    
    //min step so that masked women can exit the trap.
    int step = 0;
    while(!q.empty())
    {
        // we can do simple bfs but we do this to get the step at one go otherwise it will increase the step for every element in queue.
        int size = q.size();
        for(int k = 0;k<size;k++)
        {
            // current pos where women is there
            pos_pair current_pos_pair = q.front();
            int current_x = current_pos_pair.first;
            int current_y = current_pos_pair.second;
            q.pop();
            
            // this is the base condition
            /*
             1. when women is there on any of the exit just return the step.
             2. but there is one more constraint women cannot exit from the entrance point so keep an eye on this.
            */
            if(current_x != entrance[0] or current_y != entrance[1])
            {
            if(current_x == 0 or current_y == m-1 or current_x == n-1 or current_y == 0)
            {
                return step;
            }
            }

            for(int i = 0;i<4;i++)
            {
                // simply check all the 4 directions where women can go
                // push in the queue.
                int nx = current_x + distx[i];
                int ny = current_y + disty[i];
                if(nx >= 0 && nx < n && ny >=0 && ny<m)
                {
                    if(!visited[nx][ny])
                    {
                        if(maze[nx][ny] == '.')
                        {
                        visited[nx][ny] = true;
                        q.push({nx,ny});
                    }
                    }
                }
            }
        }
        step+=1;
    }
    // if women can exit then definately we can return from loop otherwise there is no path.
    return -1;
    }
};