class Solution:
    def minRefuelStops(self, target: int, startFuel: int, stations: List[List[int]]) -> int:
        prevfuels=[]
        stops=0
        currfuel=startFuel
        if startFuel==target:
            return 0
        for i in stations:
            if currfuel<i[0]:
                if len(prevfuels)==0:
                    return -1
                while(prevfuels and currfuel<i[0]):
                    stops+=1
                    currfuel+=-heappop(prevfuels)
                if currfuel<i[0]:
                    return -1
            heappush(prevfuels,-i[1])
        while(prevfuels and currfuel<target):
            stops+=1
            currfuel+=-heappop(prevfuels)
        if currfuel>=target:
            return stops
        return -1
        
                
        