class Tree(object):
    def __init__(self,data,freq):
        self.data = data
        self.freq = freq
        self.left = None
        self.right = None
        self.encoding = None

    def is_leaf(self):
        return self.left == None and self.right == None

    def __str__(self):
        return "   ({}{})\n/\t\\\n{}\t{}\n".format(self.data,self.freq,self.left,self.right)

class Forest(object):
    def __init__(self,freq_list):
        self.nodes = []
        for i in freq_list.keys():
            self.nodes.append(Tree(i,freq_list.get(i)))

    def sort_nodes(self):
        self.nodes = sorted(self.nodes,key=lambda x:(x.freq))

    def make_trees(self):
        while(len(self.nodes) is not 1):
            temp_node_data = self.nodes[0].data + self.nodes[1].data
            temp_node_freq = self.nodes[0].freq + self.nodes[1].freq
            temp_node = Tree(temp_node_data,temp_node_freq)
            temp_node.left = self.nodes[0]
            temp_node.right = self.nodes[1]
            temp_node.left.encoding = 0
            temp_node.left.encoding = 1
            self.nodes = self.nodes[2:]
            self.nodes.append(temp_node)
            self.sort_nodes()

    def assign_codeword(self):
        pass


def test_case():
    freq_list = {
    'a':13,
    'b':8,
    'c':8,
    'd':3
    }

    forest = Forest(freq_list)
    forest.sort_nodes()
    forest.make_trees()
    forest.assign_codeword()

if __name__=='__main__':
    test_case()
