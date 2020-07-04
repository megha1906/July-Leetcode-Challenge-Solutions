class Solution {
public:
    int nthUglyNumber(int n) {
        static vector<int> finalarr(1,1);
        static int i =0;
        static int j =0;
        static int k = 0;
        while(finalarr.size()<n)
        {
           finalarr.push_back(min(finalarr[i]*2, min(finalarr[j]*3, finalarr[k]*5)));
            if(finalarr.back() == finalarr[i]*2)
                i++;
            if(finalarr.back() == finalarr[j]*3)
                j++;
            if(finalarr.back() == finalarr[k]*5)
                k++;
        }
        return finalarr[n-1];
    }
};
