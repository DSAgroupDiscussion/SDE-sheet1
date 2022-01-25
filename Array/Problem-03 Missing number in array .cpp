/*  https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1  */


//Approach 1:

 int MissingNumber(vector<int>& array, int n) {
        
        int res=n*(n+1)/2;  // find the sum of n numbers
        
        int sum(0);
        
      sum= accumulate(array.begin(),array.end(),0);  // sum of array element using accumulate STL function
        
        int ans= res-sum;   // finding the missing element
    
        
        return ans;  // return the missing element
    }
