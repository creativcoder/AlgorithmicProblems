
class Node(object):
	def __init__(self, val):
		self.value = val
		self.left = None
		self.right = None

	def insert(self,data):
		if self.value == data:
			return False
		elif self.value > data:
			if self.left:
				return self.left.insert(data)
			else:
				self.left = Node(data)
				return True
		else:
			if self.right:
				return self.right.insert(data)
			else:
				self.right = Node(data)
				return True

	def find(self,data):
		if self.value == data:
			return True
			
		elif self.value > data:
			if self.left:
				return self.left.find(data)
			else:
				return False
		else:
			if self.right:
				return self.right.find(data)
			else:
				return False

	def preorder(self,cache):
		if self:
			cache.append(self.value)
			if self.left:
				self.left.preorder(cache)
			if self.right:
				self.right.preorder(cache)
		return cache

class Tree(object):
	def __init__(self):
		self.root = None

	def insert(self, data):
		if self.root:
			return self.root.insert(data)
		else:
			self.root = Node(data)
			return True

	def find(self,data):
		if self.root:
			return self.root.find(data)
		else:
			return False

	def preorder(self,cache):
		self.root.preorder(cache)

	def postorder(self):
		self.root.postorder()

	def inorder(self):
		self.root.inorder()

if __name__=='__main__':
	tree = Tree()
	tree.insert(376)
	tree.insert(69)
	tree.insert(239)
	tree.insert(212439)
	
	cache = []
	tree.preorder(cache)
	print(cache)
