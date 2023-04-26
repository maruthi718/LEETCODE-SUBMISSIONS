class Solution:
    def addDigits(self, n: int) -> int:
        while n>=10:
            s=0
            while n>0:
                rem=n%10
                s+=rem
                n=n//10
            n=int(s) 
        return n     
        