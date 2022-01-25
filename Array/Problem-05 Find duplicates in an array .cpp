/* https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1 */


//Approach 1:

vector<int> duplicates(int arr[], int n) {
        
        unordered_map<int,int> mp; 
        
        for(int i=0;i<n;i++)
            mp[arr[i]]++;    // tracking  element and its count
        
        vector <int> res;   //storing the duplicate elements
        
        for(auto it:mp)
        {
            if(it.second>1)  //if count is > 1 then push it in res
                res.push_back(it.first);  
        }
        
        if(res.size()==0)   //if all elements are distinct
            res.push_back(-1);
        
        sort(res.begin(),res.end());    // as per demand of question
        return res;
    }
