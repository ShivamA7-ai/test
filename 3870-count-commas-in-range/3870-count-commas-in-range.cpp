class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

       
        if (n>=1000){
            long long upper=min(n,999999LL);
            ans+= (upper-999)*1;
        }

       
        if (n>=1000000) {
            long long upper= min(n,999999999LL);
            ans+=(upper-999999)*2;
        }

        if (n>=1000000000) {
            long long upper=min(n,999999999999LL);
            ans+=(upper-999999999)*3;
        }

        
        return ans;
    }
};