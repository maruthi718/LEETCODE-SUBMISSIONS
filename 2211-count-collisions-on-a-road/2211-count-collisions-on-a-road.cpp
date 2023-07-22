class Solution {
public:
    int countCollisions(string dir) {
        int count = 0;
        int i = 0, j = dir.length()-1;
        while(i < dir.length() and dir[i] == 'L')
            i++;      
        while(j >= 0 and dir[j] == 'R')
            j--;   
        while(i <= j)
        {
            if(dir[i]!='S') count++;
            i++;
        }
        return count;
    }
};