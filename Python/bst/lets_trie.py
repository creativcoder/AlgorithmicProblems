# A node is an instance of a single node in the trie tree
class Node(object):
	def __init__(self):
		self.children = {}

	def insert_key(self,key):
		if key not in self.children:
			self.children[key] = Node()

# given a word this Trie will trie to insrt
class Trie(object):
	def __init__(self, word):
		self.root = 'root'
		self.children = Node()
		for i in word:
			self.children.insert_key(i)

	def traverse(self):
		print(self.children.children)


t = Trie('alpha')
t.traverse()

