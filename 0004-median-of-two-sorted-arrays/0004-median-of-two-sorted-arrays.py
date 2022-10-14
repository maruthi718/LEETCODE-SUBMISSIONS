class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums1.extend(nums2) 
        nums1.sort() 
        k=len(nums1) 
        if k%2==0: 
            p=nums1[k/2] 
            q=nums1[(k/2)-1] 
            t=float(p+q) 
            return t/2 
        else:
            return nums1[k//2]
            
            