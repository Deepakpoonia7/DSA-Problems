// User function template for C++

// class Solution {
//   public:
//     // arr : given array
//     // k : find kth smallest element and return using this function
//     int kthSmallest(vector<int> &arr, int k) {
//         // code here
//         int n=arr.size();
//       int st=0;
//       int end=n-1;
//       while(st<end){
//       sort(arr.start(),arr.end()) 
//       }
//       cout<< k <<endl;
//     }
// };// // User function template for C++
class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // Sort the array
        sort(arr.begin(), arr.end());

        // Return the k-th smallest element (1-based index)
        return arr[k - 1];
    }
};
