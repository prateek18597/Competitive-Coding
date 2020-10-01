class Solution {
public:
    vector<vector<int>> moves = {{-2,1},{-2,-1},{2,1},{2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
    vector<vector<vector<double>>> mp;
    double dfs(int &N,int k,int r,int c){
        if(r < 0 or c < 0 or r >= N or c >= N) return 0;
        if(mp[r][c][k]) return mp[r][c][k];
        if(k == 0) return 1;
        for(int i = 0 ; i < moves.size() ; i++){
            mp[r][c][k] += dfs(N,k - 1,r + moves[i][0],c + moves[i][1]);
        }
        mp[r][c][k] /= 8.0;
        return mp[r][c][k];
    }
    double knightProbability(int N, int K, int r, int c) {
        mp.resize(N,vector<vector<double>>(N,vector<double> (K + 1,0)));
        double count = dfs(N,K,r,c);
        double ans = count;
        return ans;
    }
};
