input()
nums = list(map(int, input().split(' ')))
m = max(nums)
print(sum(map(lambda x: m - x, nums)))
