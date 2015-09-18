# UVA Online Judge

// Problem : what is cryptanalysis ?

freq_list = [0 for i in range(0,27)]

print freq_list

def freq_table():
	with open('data.txt', 'r') as f:
		line = f.readline()
		for c in line:
			freq_list[ord(c)%26]+ = 1
