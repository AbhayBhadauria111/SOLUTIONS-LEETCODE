class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        i=0
        j=len(people)-1
        people.sort()
        c=0
        while(i<=j):
            c+=1
            if i==j:
                break
            if people[j-1]+people[j]<=limit:
                j-=2
            elif people[j]+people[i]<=limit:
                i+=1
                j-=1
            else:
                j-=1
        return c
            
            
        