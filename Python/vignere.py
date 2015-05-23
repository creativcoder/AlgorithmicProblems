#naive implementation of the Vignere Cipher
def rotate(st):
	a=list(st)
	temp=a.pop()
	return "".join(list(temp)+a)

a="abcdefghijklmnopqrstuvwxyz"
orig="abcdefghijklmnopqrstuvwxyz"


container=[]
container.append(['-']+list(a))
for i in range(26):
	a=rotate(a)
	container.append(list(orig[i])+list(a))


message="THISISMYSERCRETMESSAGE" # a dummy message to encrypt
keyword="FORTIFICATION"
key=""

# for i in container:
# 	for j in i:
# 		print j,
# 	print ""


# PADDING keyword with upto same length as message
if len(message)>len(keyword):
	key+=keyword+keyword[0:len(message)-len(key)]
	
i=0
encrypted=""
while i!=len(message):
	encrypted+=container[ord(message[i])%65][ord(key[i])%65]
	i+=1

print "ENCRYPTED MESSAGE IS : {}".format(encrypted)

# while i!=len(message):
# 	print container[ord(message[i])%65][ord(keyword[i])%65],
# 	i+=1

