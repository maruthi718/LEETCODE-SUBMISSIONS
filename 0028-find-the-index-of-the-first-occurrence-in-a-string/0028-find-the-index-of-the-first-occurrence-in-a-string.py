class Solution:
    def strStr(self, h: str, ne: str) -> int:
        n,m=len(h),len(ne)
        if h==ne:
            return 0
        elif m>n:
            return -1
        for i in range(n-m+1):
            j=0
            while j<m and ne[j]==h[i+j]:
                j+=1
            if j==m:
                return i
        return -1