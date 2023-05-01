class Solution:
    def countValidWords(self, sentence: str) -> int:
        s=sentence.split()
        c=0
        for i in s:
            _s=0
            if i[-1]==',' or i[-1]=='.' or i[-1]=='!':
                if len(i)==1:
                    c+=1
                i=i[:-1]
            if i.isalpha():
                c+=1
            elif '-' in i:
                a=i.split('-')
                if len(a)>2:
                    continue
                if a[0].isalpha() and a[1].isalpha():
                    c+=1
        return c