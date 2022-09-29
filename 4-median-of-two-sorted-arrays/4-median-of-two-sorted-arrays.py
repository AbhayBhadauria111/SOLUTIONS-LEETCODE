class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        i=j=k=0
        n=len(nums1)+len(nums2)
        m1=m2=0
        while(i<len(nums1) and j<len(nums2)):
            if nums1[i]<=nums2[j]:
                m2=m1
                m1=nums1[i]
                i+=1
            else:
                m2=m1
                m1=nums2[j]
                j+=1
            if k==n//2:
                if n%2==0:
                    return (m1+m2)/2
                else:
                    return m1
            k+=1
        while(i<len(nums1)):
            m2=m1
            m1=nums1[i]
            if k==n//2:
                if n%2==0:
                    return (m1+m2)/2
                else:
                    return m1
            i+=1
            k+=1
        while(j<len(nums2)):
            m2=m1
            m1=nums2[j]
            if k==n//2:
                if n%2==0:
                    return (m1+m2)/2
                else:
                    return m1
            j+=1
            k+=1
            
            
                
                
        