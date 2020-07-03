//function part only

int arrangeCoins(int n){
    if(n==0){
        return 0;
    }
    int count=1;
    int rem=n;
    while(n>0)
    {
     n=n-count;
              if(n>=0)
                  count++;
              else
                  break;
    }
    return count-1;
}
