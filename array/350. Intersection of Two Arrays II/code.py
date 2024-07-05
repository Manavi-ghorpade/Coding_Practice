class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        first = 0
        second = 0
        hashmap = {}
        ans = []
        for i in nums1:
            if i in hashmap:
                hashmap[i] += 1 
            else:
                hashmap[i] = 1
        for i in nums2:
            if i in hashmap:
                if(hashmap[i]>0):
                    ans.append(i)
                    hashmap[i]=hashmap[i]-1
        return ans
                






        
        