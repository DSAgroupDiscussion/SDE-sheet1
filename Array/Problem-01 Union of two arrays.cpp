
/* https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#  */



//Approach 1:

 int doUnion(int a[], int n, int b[], int m)  {
        
        set <int >v;   // set will not allow duplicate elements
        
        for(int i=0;i<n;i++)
            v.insert(a[i]);  //insert first array
    
         for(int i=0;i<m;i++)
            v.insert(b[i]); //insert second array

     
     return v.size(); // return the total union elements.
    }

