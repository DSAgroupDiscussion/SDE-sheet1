//Q.First Repeating Element 
//Given an array arr[] of size n, find the first repeating element. The element should occurs more than once and the index of its first occurrence should be the smallest.

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        
        unordered_multiset<int> b;
        for(int i=0;i<n;i++){
            b.insert(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(b.count(arr[i])>1){
                return i+1;
            }
        }
        return -1;
        
    }
    
};