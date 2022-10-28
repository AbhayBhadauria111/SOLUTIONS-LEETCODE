class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        S={}
        for i in strs:
            temp=''.join(sorted(i))
            if temp in S:
                S[temp].append(i)
            else:
                S[temp]=[i]
            
        ans=[]
        for i in S:
            ans.append(S[i])
        return ans
                
                    
        
        
        
        
        
        
        
        
        
        