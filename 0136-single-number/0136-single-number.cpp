class Solution {
public:
    int singleNumber(vector<int>& A) {
    int n=A.size();
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= A[i];  // XOR each element with result
    }
    return result;

    }
    
};