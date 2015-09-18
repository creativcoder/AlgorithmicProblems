str = 'cdcdcdcdeeeef'

unique_set = []

single_letter = False

def extract_unique(input):
	for i in input:
		if i not in unique_set:
			unique_set.append(i)

extract_unique(str)

print "unique elements are", unique_set

def check_palin(inp):
	if (len(inp)%2 == 0):
		for i in unique_set:
			if not (inp.count(i)%2 == 0):
				return False
			return True
	else:
		for i in unique_set:
			if not (inp.count(i)%2 == 0):
				return False
			if inp.count(i) == 1:
				single_letter = True


print(check_palin(str))

# print unique_set

# def check_palin():
# 	if(che)
