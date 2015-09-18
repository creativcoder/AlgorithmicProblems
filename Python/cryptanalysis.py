# UVA Online Judge

// Problem : what is cryptanalysis ?

freq_list = [0 for i in range(0,256)]


#print freq_list

def freq_table():
	with open('data.txt', 'r') as f:
		line = f.readline().rstrip('\n')
		for c in line:

			freq_list[ord(c)] += 1

freq_table()

# freq_list.sort()

for i in range(97,123):
	print chr(i)," ",freq_list[i]
