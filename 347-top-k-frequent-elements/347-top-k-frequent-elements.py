class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        valueCount=dict(Counter(nums))
        countToValue={}
        for i in valueCount:
            if valueCount[i] in countToValue:
                countToValue[valueCount[i]].append(i)
            else:
                countToValue[valueCount[i]]=[i]
        TopCounts=sorted(countToValue.keys(),reverse=True)
        # print(TopCounts)
        # print(countToValue)
        ans=[]
        i=0
        while(len(ans)!=k):
            temp=countToValue[TopCounts[i]]
            for j in temp:
                ans.append(j)
            i+=1
            
        return ans
                
                