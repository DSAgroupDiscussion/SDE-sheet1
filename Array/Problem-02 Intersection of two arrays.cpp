


//Approach 1:

int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        
        set<int> res;  //set will not allow duplicate elements
        
        for(int i=0;i<n;i++)
            res.insert(a[i]);  //insert a's elements
            
        
        int ans(0);   // for common result
        
        for(int i=0;i<m;i++)
        {
            if(res.find(b[i])!=res.end())  // find b's elements in a
            {
                ans++;  //if found increment the count
                
                res.erase(b[i]);  // erase that common element from b so that it will not get counted again
            }
        }
        return ans;      // return the count of common elements
    }
