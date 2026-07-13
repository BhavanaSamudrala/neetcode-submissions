class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        countS = {}
        countT = {}

        for i,j in zip(s,t):
            if i in countS:
                countS[i] += 1
            else:
                countS[i] = 0
            
            if j in countT:
                countT[j] += 1
            else:
                countT[j] = 0

        return countS == countT