class Graph(object):
    def __init__(self,vid):
        self.v_dict = {}
        self.v_dict.update({vid:[]})
    def add_edge(self,v_src,v_dst):
        self.v_dict.get(v_src).append(v_dst)
    def add_vertex(self,vid):
        self.v_dict.update({vid:[]})
    def list_vertices(self):
        print self.v_dict.keys()
    def list_edges(self):
        for k in self.v_dict.keys():
            print k,self.v_dict[k]

# class Graph(object):
#     def __init__(self,n_count):
#         self.n_count = n_count
#     def add_node(node):
#         self.nodes = []
#         self.node

class Node(object):
    def __init__(self,data=0):
        self.data = data
        self.repr = self
    def find_set(self,node):
        pass



class DisjointSet(object):
    def __init__(self,set_count):
        self.set_count = set_count
    def make_set(self,v_list):
        pass


g = Graph(2)
g.add_vertex(6)
g.add_vertex(3)
g.add_vertex(2)
g.add_vertex(7)
g.add_edge(2,7)
g.add_edge(6,3)
g.add_edge(2,6)
g.list_edges()
