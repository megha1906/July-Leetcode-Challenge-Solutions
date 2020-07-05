//function only 


int hammingDistance(int n1, int n2){
    int x = n1 ^ n2; 
    int bits = 0; 
  
    while (x > 0) { 
        bits += x & 1; 
        x >>= 1; 
    } 
  
    return bits; 

}
