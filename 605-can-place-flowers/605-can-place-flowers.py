class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        if len(flowerbed)==1 and flowerbed[0]==0:
            count=1
            if count>=n:
                return True
        count=0
        for i in range(len(flowerbed)-1):
            if i==0 and flowerbed[i]==0 and flowerbed[i+1]==0:
                count+=1
                flowerbed[0]=1
            elif flowerbed[i-1]==0 and flowerbed[i+1]==0 and flowerbed[i]!=1:
                count+=1
                flowerbed[i]=1 
        if flowerbed[-1]==0 and flowerbed[-2]==0:
            count+=1
        print(count)
        if count>=n:
            return True
        return False
        