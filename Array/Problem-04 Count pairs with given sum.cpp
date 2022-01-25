/* https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1  */



//Approach 1:

int getPairsCount(int arr[], int n, int k) {
        
        unordered_map<int,int> mp; // track of element and its count
        int ctr(0);   //count of pair
        for(int i=0;i<n;i++)
        {
            ctr+=mp[k-arr[i]];  // finding the pair and store its count
            mp[arr[i]]++;    // otherwise increment the count of each element
        }
        return ctr;  //return the count of pair-sum
    }
