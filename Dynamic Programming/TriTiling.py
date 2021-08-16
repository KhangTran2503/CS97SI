
f = [0 for _ in range(30 + 1)]
g = [0 for _ in range(30 + 1)]

f[1] = g[1] = 1
f[2] = 3
g[2] = 4

for i in range(3,31):
	f[i] = f[i - 2] + 2*g[i - 1]
	g[i] = f[i - 1] + g[i - 2]

while 1:
	n = int(input())
	if n == -1: break
	print(f[n])


