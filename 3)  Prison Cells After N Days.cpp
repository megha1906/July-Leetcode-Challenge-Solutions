//function only
// We can see that there is a repeating pattern after 14th cell

class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        vector<int> temp(8,0);
        N= N%14==0? 14 : N%14;
        while(N>0){
        for(int i=1; i< cells.size()-1; i++)
        {
            temp[i] = cells[i-1] == cells[i+1] ? 1 : 0;
        }
     cells=temp;
        N--;
    }
            return cells;

    }      
    
};
