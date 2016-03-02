class Node(object):
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

    def is_leaf(self):
        return self.left == None and self.right == None

    def __str__(self):
        return "    {}\n/\t\\\n{}\t{}".format(self.data,self.left,self.right)

class BinaryTree(object):
    def __init__(self,data=None):
        self.root = Node(data)
    def add_node(self,node):
        sentinel = self.root
        def add(sentinel,node):
            if sentinel.left is not None and sentinel.right is not None:
                if sentinel.data > node.data:
                    add(sentinel.left,node)
                else:
                    add(sentinel.right,node)
        add(sentinel,node)
