class Tree(object):
    def __init__(self,data,freq):
        self.data = data
        self.freq = freq

class Forest(object):
    def __init__(self,nodes):
        self.nodes = nodes
    def sort(self):
        pass
    def bump(self):
        pass

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

def test_case():
    freq_list = {
        'a':13,
        'b':16,
        'c':2,
        'd':7,
        'e':9,
        'f':3
        }
    
if __name__=='__main__':
    test_case()
