class Solution(object):
    def findGCD(self, nums):
        a=max(nums)
        b=min(nums)
        val=0
        i=1
        while(i<=a and i<=b):
            if(a%i==0 and b%i==0):
                val=i
            i=i+1    
        return val