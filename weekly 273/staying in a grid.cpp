//  https://leetcode.com/contest/weekly-contest-273/problems/execution-of-all-suffix-instructions-staying-in-a-grid/
//There is an n x n grid, with the top-left cell at (0, 0) and the bottom-right cell at (n - 1, n - 1). You are given the integer n and an integer array startPos where startPos = [startrow, startcol] indicates that a robot is initially at cell (startrow, startcol).
//You are also given a 0-indexed string s of length m where s[i] is the ith instruction for the robot: 'L' (move left), 'R' (move right), 'U' (move up), and 'D' (move down).
//The robot can begin executing from any ith instruction in s. It executes the instructions one by one towards the end of s but it stops if either of these conditions is met:
//The next instruction will move the robot off the grid.
//There are no more instructions left to execute.
//Return an array answer of length m where answer[i] is the number of instructions the robot can execute if the robot begins executing from the ith instruction in s.




class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> a(s.size(),0);
        int len=s.size();
        for(int i=0;i<len;i++){
            int x = startPos[0];
            int y =  startPos[1];
            int count=0;
            for(int j=i;j<len;j++){
                if(s[j]=='U')
                    x-=1;
                else if(s[j]=='R')
                    y+=1;
                else if(s[j]=='L')
                    y-=1;
                else
                    x+=1;
                if(x>=0 && x<n && y>=0 && y<n){
                    count++;
                }
                else{
                   
                    break;
                }
                
            }
             a[i]=count;
        }
       return a; 
    }
};
 
