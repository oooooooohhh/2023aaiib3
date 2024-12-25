// week16-2.cpp
// LeetCode 50. Pow(x,n)
class Solution {
public:
    double myPow(double x, long long int n) {
        // Base case: if the exponent is 0, return 1
        if (n == 0) return 1;

        // If the exponent is negative, invert the base and make the exponent positive
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }

        // Recursive function to compute power
        double half = myPow(x, n / 2);  // Recursively compute x^(n/2)
        
        // If n is even, return half^2, if odd, return half^2 * x
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half* x;
        }
    }
};
