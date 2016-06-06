import pprint

def gen_pascal(nrows):
	# the base case
	aggregator = [[0,1,0]]
	for i in xrange(nrows):
		idx = len(aggregator) - 1
		aggregator.append(gen_row(aggregator[idx]))
	return aggregator

def gen_row(lis):
	new_vec = [0]
	for i in xrange(1, len(lis)):
		new_vec.append(lis[i] + lis[i-1])
	new_vec.append(0)
	return new_vec

pp = pprint.PrettyPrinter(indent=4)
print pp.pprint(gen_pascal(10))
