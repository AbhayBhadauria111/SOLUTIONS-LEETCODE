class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        words=paragraph.split()
        for i in range(len(words)):
            temp=''
            for j in words[i]:
                if j in ['!','?',',',';','.',"'"]:
                    break
                temp+=j
            words[i]=temp.lower()
        D=Counter(words)
        ans=""
        for i in D:
            if i not in banned:
                if ans=="":
                    ans=i
                else:
                    if(D[ans]<D[i]):
                        ans=i
        return ans