class TimeMap:

    def __init__(self):
        self.DP={}

        

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key not in self.DP:
            self.DP[key]=[[value,timestamp]]
        else:
            self.DP[key].append([value,timestamp])
    def get(self, key: str, timestamp: int) -> str:
        if key not in self.DP:
            return ""
        else:
            Arr=self.DP[key]
            i=0
            j=len(Arr)-1
            L=""
            while(i<=j):
                mid=(i+j)>>1
                if Arr[mid][1]==timestamp:
                    return Arr[mid][0]
                elif Arr[mid][1]<timestamp:
                    L=Arr[mid][0]
                    i=mid+1
                else:
                    j=mid-1
            return L

        


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)