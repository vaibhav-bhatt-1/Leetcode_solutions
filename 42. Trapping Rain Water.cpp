/**Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.**/

 class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftarr[n],rightarr[n];
	    int maxlef=height[0];
	    for(int i=0;i<n;i++){
		    if(maxlef<height[i]){
			   maxlef=height[i];
			   leftarr[i]=maxlef;
		    }
		    else{
			    leftarr[i]=maxlef;
		    }
	    }

        int maxrig=height[n-1];
	    for(int i=n-1;i>=0;i--){
		    if(maxrig<height[i]){
			    maxrig=height[i];
			    rightarr[i]=maxrig;
		    }
		    else{
			    rightarr[i]=maxrig;
		    }
	    }
        int finalarr[n];
	    for(int i=0;i<n;i++){
		    int min,value;
		    if(leftarr[i]>rightarr[i]){
			    min=rightarr[i];
		    }
		    else{
			    min=leftarr[i];
		    }
            value=min-height[i];
			finalarr[i]=value;
	    }
        int result=0;
	    for(int i=0;i<n;i++){
		    result=result+finalarr[i];
	    }
        return result;
    }
};
