#implementing vignere cipher in python
def rotate(st):
	a=list(st)
	temp=a.pop()
	return "".join(list(temp)+a)

a="abcdefghijklmnopqrstuvwxyz"
container=[]
container.append(list(a))
for i in range(26):
	a=rotate(a)
	container.append(list(a))

for i in container:
	for j in i:
		print j,
	print ""
