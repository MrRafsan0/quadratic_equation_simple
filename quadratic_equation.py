import math
a = input("Enter Number A:\n")
while not a:
	a = input("Enter Number A:\n")
b = input("Enter Number B:\n")
while not b:
	b = input("Enter Number B:\n")
c = input("Enter Number C:\n")
while not c:
	c = input("Enter Number C:\n")

a = float(a)
b = float(b)
c = float(c)

d = 4*a*c
e = math.sqrt(b*b-d)
f = 2*a
g = (-b + e)/f
h = (-b - e)/f

print([a, b, c])

if g == h:
	print("Answer: ", g)
elif g == 0:
	print(f"Answer: {h}")
elif h == 0:
	print(f"Answer: {g}")
else:
	print(f"Answer: {g} and {h}")