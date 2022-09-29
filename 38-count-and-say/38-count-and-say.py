class Solution:
    def countAndSay(self, n: int) -> str:
        def solve(ans,c):
            if c==n:
                return ans
            
            temp=''
            
            i=0
            while(i<len(ans)):
                
                C=1
                while(i+1<len(ans) and ans[i]==ans[i+1]):
                    C+=1
                    i+=1
                temp+=str(C)+str(ans[i])
                i+=1
            print(ans,temp)
            return solve(temp,c+1)
        return solve('1',1)
                
        
                
        