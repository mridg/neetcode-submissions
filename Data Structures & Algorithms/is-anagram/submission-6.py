class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        counts = {}
        countt = {}
        for i in s:
            if i in counts:
                counts[i] += 1
            else:
                counts[i] = 1
        for i in t:
            if i in countt:
                countt[i] += 1
            else:
                countt[i] = 1

        if counts == countt:
            return True
        else:
            return False
