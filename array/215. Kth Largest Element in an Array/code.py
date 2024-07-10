class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        k = len(nums)-k #this is elemet we are looking at in sorted array

        def quickselect(left, right):
            pivot = nums[right] #number we compared with other numbers
            ptr = left #pointer to the number we are comparing with pivot
            for i in range(left,right): #right in not inclusive, because right is pivot
                if(nums[i]<=pivot): #swap with ptr
                    nums[ptr], nums[i] = nums[i], nums[ptr]
                    ptr+=1
            nums[ptr],nums[right] = nums[right],nums[ptr] #swap two values pivot and p 
        
            if ptr<k:
                return quickselect(ptr+1,right)
            elif ptr>k:
                return quickselect(left,ptr-1)
            else: #if k == ptr because ptr is pivot which is at right place in array, we do not need to sort again
                return nums[ptr]
        
        return quickselect(0,len(nums)-1)






        