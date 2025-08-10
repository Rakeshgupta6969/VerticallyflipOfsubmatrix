class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {

    // using the optimal solution.

    if(x+k>grid.size() || y+k > grid[0].size()) return grid; // no need of reverse.


    for(int  i = 0; i<k/2; i++){

     for(int j = 0; j<k; j++){
        swap(grid[x+i][y+j],grid[k + x-i-1][j + y]);
     }



    }


   return grid;

    }
};