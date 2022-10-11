class Solution:
    def decodedString(self, s):
        # code here
        s1=[]
        s2=[]
        temp=""
        res=""
        i=0
        while i<len(s):
            count=0
            if s[i]>="0" and s[i]<="9":
                while s[i]>="0" and s[i]<="9":
                    count=count*10+ord(s[i])-ord("0")
                    i+=1
                i-=1
                s1.append(count)
            elif s[i]=="]":
                temp=""
                count=0
                if (s1):
                    count=s1.pop()
                while s2 and s2[-1]!="[":
                    temp=s2.pop()+temp
                if s2 and s2[-1]=='[':
                    s2.pop()
                for j in range(count):
                    res=res+temp
                for j in range(len(res)):
                    s2.append(res[j])
                res=""
            elif s[i]=="[":
                if s[i-1]>="0" and s[i-1]<="9":
                    s2.append(s[i])
                else:
                    s2.append(s[i])
                    s1.append(1)
            else :
                s2.append(s[i])
            i+=1
        while s2:
            res=s2.pop()+res
        return res
                
                
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        
        ob = Solution()
        print(ob.decodedString(s))
# } Driver Code Ends