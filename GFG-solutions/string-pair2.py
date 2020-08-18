n = int(input())
a = list(map(int, input().strip().split()))

strs = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
vowels = [2, 2, 1, 2, 2, 2, 1, 2, 2, 2]

d = 0
count = 0
for i in range(n):
    for num in str(a[i]):
        x = int(num)
        d += vowels[x]

for i in range(n-1):
    for j in range(i+1,n):
        if (a[i] + a[j] == d):
            count += 1
    
if(count > 100):
    print("greater 100", end="")
else:
    print(strs[count], end="")
