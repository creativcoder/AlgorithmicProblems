#Google code jam practice 2010 problem - T9 Spelling

letter_map = ['abc','def','ghi','jkl','mno','pqrs','tuv','wxyz']
key_map = {'abc':2,'def':3,'ghi':4,'jkl':5,'mno':6,'pqrs':7,'tuv':8,'wxyz':9}

def contains(letter):
	for i in letter_map:
		if letter in i:
			return letter_map[letter_map.index(i)]

T = int(input())
prev = ""

while T!=0:
	sent = str(input()).strip()
	for i in sent:
		if i==' ':
			print("0",end="")
			continue
		l = 1+contains(i).find(i)
		if prev == contains(i):
			print (" ",end="")
		for j in range(l):
			print (key_map.get(contains(i)),end="")
		prev = contains(i)
	T-=1
