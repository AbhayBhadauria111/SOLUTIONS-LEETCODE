class RandomizedSet:

    def __init__(self):
        self.D={}
        self.arr=[]
        

    def insert(self, val: int) -> bool:
        if val not in self.D:
            self.D[val]=len(self.arr)
            self.arr.append(val)
            return True
        return False

    def remove(self, val: int) -> bool:
        if val not in self.D:return False
        self.arr[self.D[val]]=self.arr[-1]
        self.D[self.arr[-1]]=self.D[val]
        del self.D[val]
        self.arr.pop()
        return True
        

    def getRandom(self) -> int:
        
        return random.choice(self.arr)
        


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()