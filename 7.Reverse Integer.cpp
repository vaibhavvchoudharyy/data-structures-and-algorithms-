class Solution {
public:
    int reverse(int x) {
        int q=0;
        while(x){
            if(q>INT_MAX/10 || q<INT_MIN/10) return 0;
            int r = x%10;
            q= q*10+r;
            x=x/10;
        }
        return q;
    }
};
