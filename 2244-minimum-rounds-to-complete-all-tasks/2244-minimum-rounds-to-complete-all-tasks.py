class Solution:
    def minimumRounds(self, tasks: List[int]) -> int:
        C={}
        for i in tasks:
            C[i]=C.get(i,0)+1
        trips=0
        for i in C:
            if C[i]==1:
                return -1
            if C[i]==2 or C[i]==3:
                C[i]=0
                trips+=1
                continue
            while(C[i]):
                while(C[i]>4):
                    C[i]-=3
                    trips+=1
                if C[i]==4:
                    trips+=2
                    C[i]=0
                elif C[i]==2 or C[i]==3:
                    trips+=1
                    C[i]=0
                    
        return trips
                
                
        