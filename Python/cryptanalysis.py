# UVA Online Judge

// Problem : what is cryptanalysis ?

freq_list = [0 for i in range(0,26)]

def freq_table():
	with open('data.txt', 'r') as f:
		line = f.readline().rstrip('\n').replace(" ","")
		for c in line:
			freq_list[ord(c)%97] += 1

alpha_list = [chr(i) for i in range(97,123)]


freq_table()

freq_tuple_list = zip(alpha_list,freq_list)

for i in freq_tuple_list:
	print i

def by_freq(tup):
	pass

