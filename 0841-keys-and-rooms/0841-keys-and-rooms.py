class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        visited={0}
        keys=set()
        for i in rooms[0]:
            keys.add(i)
            visited.add(i)
        while(keys):
            a=keys.pop()
            for i in rooms[a]:
                if i not in keys and i not in visited:
                    keys.add(i)
                    visited.add(i)
        return len(visited)==len(rooms)
            
        
            
        