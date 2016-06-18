import pprint

a = 'abcdefg'
b = 'abzde'

arr = [6,4,2,7,8,4,3,-1]
INT_MAX = 9999

def generic_min(arr, last_min=INT_MAX):
	if len(arr) < 1:
		return None
	if len(arr) == 1:
		return last_min
	return generic_min(arr, min(arr.pop(),last_min))

def edit_distance(a,b):
	table = [[0 for i in xrange(len(a)+1)] for i in range(len(b)+1)]
	for i in xrange(len(a)+1):
		table[0][i] = i
	for i in xrange(len(b)+1):
		table[i][0] = i
	for i in xrange(len(table)-1):
		for j in xrange(len(table[i])-1):
			if a[i] != b[i]:
				table[i][j] = generic_min([table[i-1][j], table[i][j-1], table[i-1][j-1]], 9999)

	pp = pprint.PrettyPrinter()
	pp.pprint(table)

if __name__=='__main__':
	edit_distance(a,b)