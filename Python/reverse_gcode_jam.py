i = open("B-large-practice.in","r")
o = open("B-large-practice.out","w")
T = int(i.readline())
case = 1
while T!=0:
	sent = str(i.readline()).replace("\n","")
	words = sent.split(" ")
	o.write("Case #{}: ".format(case))
	o.write(" ".join(words[::-1]))
	o.write("\n")
	T-=1
	case+=1
i.close()
o.close()
