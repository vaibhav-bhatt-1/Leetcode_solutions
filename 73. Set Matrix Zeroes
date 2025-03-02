/**Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.**/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<bool> row(rows, false), col(cols, false);
	    for(int i=0;i<rows;i++){
		   for(int j=0;j<cols;j++){
			   if(matrix[i][j]==0){
				   row[i]=true;
				   col[j]=true;
			    }
		    }
	    }
	    for(int i=0;i<rows;i++){
		   for(int j=0;j<cols;j++){
			   if(row[i]==true||col[j]==true){
				   matrix[i][j]=0;
			    }
		    }
	    }
        
    }
};
