class Solution {
public:
    int LCS(string t1, string t2, int n, int m, vector<vector<int>> &dp)
    {
       for(int i=0;i<n+1;i++)
       {
           for(int j=0;j<m+1;j++)
           {
               if(i==0 || j==0)
                   dp[i][j]=0;
               
           }
       }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(t1[i-1]==t2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[n][m];
        
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        
        int n=text1.length();
        int m=text2.length();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return LCS(text1,text2,n,m,dp);
    }
};