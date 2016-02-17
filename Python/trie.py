class Node:
    def __init__():
        self.data = data
        

class Graph:
    def __init__(self,count):
        self.count = count
        self.dict = {}
    def add_vertex(self,vex):
        if isinstance(vex,list):
            for i in vex:
                self.dict.update({i:[]})
        elif len(vex) == 1 and isinstance(vex,str):
                self.dict.update({vex:[]})
        else:
            Raise('Malformed Vertex Exception')

    def add_edge(self,src,dst):
        if self.dict.has_key(src):
            self.dict[src].append(dst)
    def show_edges(self):
        return [(i,self.dict[i]) for i in self.dict.keys()]

class Trie():
    def __init__(self,words):
        pass

g = Graph(4)
g.add_vertex(['a','b','c','d'])
g.add_edge('c','d')
g.add_edge('c','a')
g.add_edge('c','b')
print g.show_edges()