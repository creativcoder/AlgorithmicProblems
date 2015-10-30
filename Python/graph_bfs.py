class Node:
    def __init__(self,data):
        self.adj_list = []
        self.data = data
        self.visited = False
        self.parent = []

    def add_edge(self,node_val):
        self.adj_list.append(node_val)
    def set_parent(self,parent_node):
        self.parent.append = parent_node

class Graph:
    def __init__(self,num_nodes):
        self.node_count = num_nodes
        self.node_pool = {}
        for i in range(num_nodes+1):
            # Contains node instances, with their data as keys
            self.node_pool.update({i:Node(i)})
        print self.node_pool
    def add_edge(self,which,what):
        self.node_pool[which].add_edge(what)
    def view_adjacent(self, which):
        for i in self.node_pool[which].adj_list:
            print i,
        print ""
    def traverse_bfs():
        pass
        


"""
# Graph shown as example

(2)-----(0)  (4)-----(6)
 |       |   /|       |
 |       |  / |       |
(3)-----(1)/ (5)-----(7)

"""

g = Graph(7)

g.add_edge(0,1)
g.add_edge(0,2)
g.add_edge(2,3)
g.add_edge(2,0)
g.add_edge(1,4)                    
g.add_edge(1,5)
g.add_edge(4,5)
g.add_edge(4,6)
g.add_edge(5,4)
g.add_edge(5,7)
g.add_edge(6,4)
g.add_edge(6,7)
g.add_edge(7,5)
g.add_edge(7,6)


# for i in range(8):
#     print (i,":",g.view_adjacent(i))
