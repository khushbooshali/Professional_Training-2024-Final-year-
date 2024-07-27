class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int i,j,f=0;
        for(i=0; i<board.size(); i++){
            for(j=0; j<board[i].size(); j++){
                if(board[i][j]=='R'){
                    f=1;
                    break;
                }
            }
            if(f==1)
                break;
        }
        int count=0;
        for(int k=j-1; k>=0; k--){
            if(board[i][k]=='p'){
                count++;
                break;
            }
            if(board[i][k]=='B')
            break;
        }
        for(int k=j+1; k<board[i].size(); k++){
            if(board[i][k]=='p'){
                count++;
                break;
            }
            if(board[i][k]=='B')
            break;
        }
        for(int k=i-1; k>=0; k--){
            if(board[k][j]=='p'){
                count++;
                break;
            }
            if(board[k][j]=='B')
            break;
        }
        for(int k=i+1; k<board.size(); k++){
            if(board[k][j]=='p'){
                count++;
                break;
            }
            if(board[k][j]=='B')
            break;
        }
    return count;
    }    
};
