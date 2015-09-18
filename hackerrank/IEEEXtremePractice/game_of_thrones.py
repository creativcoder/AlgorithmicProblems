#str = 'cdcdcdcdeeeef'
str = 'eee'
#str = 'aabb'

unique_set = []

single_letter = False

def extract_unique(input):
	for i in input:
		if i not in unique_set:
			unique_set.append(i)

extract_unique(str)

print "Unique elements are", unique_set

# Testcode
def test_eval_odd_inputs(string):
	for i in unique_set:
			if not (inp.count(i)%2 == 0):
				return False
			if inp.count(i) == 1:
				single_letter = True


def isOdd(string):
	return not (len(string)%2==0)

def letters_even(string):
	for i in unique_set:
		if (string.count(i)%2 == 0):
			return True
		else:
			return False

def check_palin2(string,single_letter):
	# if string contains the same letters
	if(len(string) == string.count(string[0])):
		print "Yes"
		return False

	for i in unique_set:
		if string.count(i)==1:
			single_letter = True
	if (single_letter and isOdd(string)):
		if(letters_even(string)):
			print "Yes"
			palindrome = True
		else:
			print "No"
			palindrome = False

check_palin2(str,single_letter)
