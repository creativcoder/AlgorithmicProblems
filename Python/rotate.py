# python script to rotate a string by one literal

def rotate(st):
	  a=list(st)
	  temp=a.pop()
	  return "".join(list(temp)+a)
print rotate("abcdef")
