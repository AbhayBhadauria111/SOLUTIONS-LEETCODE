class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        def merge(arr1,arr2):
            arr=[0 for i in range(len(arr1)+len(arr2))]
            i=j=k=0
            while(i<len(arr1) and j<len(arr2)):
                if arr1[i]<arr2[j]:
                    arr[k]=arr1[i]
                    i+=1
                    k+=1
                else:
                    arr[k]=arr2[j]
                    j+=1
                    k+=1
            while(i<len(arr1)):
                arr[k]=arr1[i]
                i+=1
                k+=1
            while(j<len(arr2)):
                arr[k]=arr2[j]
                j+=1
                k+=1
            return arr
        def mergesort(arr):
            if len(arr)<=1:
                return arr
            return merge(mergesort(arr[:len(arr)//2]),mergesort(arr[len(arr)//2:]))
        return mergesort(nums)
                