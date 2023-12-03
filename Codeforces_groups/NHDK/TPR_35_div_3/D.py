import re 

s = input()

nums = list(map(int, re.findall(r'\d+', s)))
print(str(nums[0]) + " " + str(nums[2]) + " " + str(nums[3]))