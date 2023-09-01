long long sumFirstN(long long n) {
    // Write your code here.

    if(n == 1)
    {
        return 1;
    }

    long long ans = sumFirstN(n-1) + n;

    return ans;
}
