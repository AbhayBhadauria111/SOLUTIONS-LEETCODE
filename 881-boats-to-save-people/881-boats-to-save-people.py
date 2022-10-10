class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people.sort(reverse=True)
        i=0
        j=len(people)-1
        c=0
        while(people):
            c+=1
            if len(people)==1:
                people.pop()
                continue
            if people[0]+people[1]<=limit:
                people.pop(0)
                people.pop(0)
            elif people[0]+people[-1]<=limit:
                people.pop(0)
                people.pop()
            elif people[0]<=limit:
                people.pop(0)
            else:
                people.pop()
          
        return c
            
        