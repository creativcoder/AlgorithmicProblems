class HuffmanCoder(object):
    
    def __init__(self,freq_list):
        self.master_table = []
        self.freq_list = []
        self.sorted_freq_list = freq_list
        

    def desc(self):
        self.sorted_freq_list = sorted(self.freq_list,key=lambda freq_list:freq_list[1])
        self.sorted_freq_list.reverse()

    def assign_code(self):
        last_two = []
        last_two.append(self.sorted_freq_list[-2][0]+self.sorted_freq_list[-1][0])
        last_two.append(self.sorted_freq_list[-2][1]+self.sorted_freq_list[-1][1])
        self.sorted_freq_list.pop()
        self.sorted_freq_list.pop()
        self.sorted_freq_list.append(last_two)
        self.desc()
        return self.sorted_freq_list


freq_list = [['A',16,-1],['B',7,-1],['C',6,-1],['D',6,-1],['E',5,-1]]

letters = ['A','B','C','D','E','F']

huff = HuffmanCoder(freq_list)
print huff.assign_code()
