
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

	def postorder(self,cache):
		if self:
			if self.left:
				self.left.preorder(cache)
			if self.right:
				self.right.preorder(cache)
			cache.append(self.value)
		return cache

	def inorder(self,cache):
		if self:
			if self.left:
				self.left.inorder(cache)
			cache.append(self.value)
			if self.right:
				self.right.inorder(cache)
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

	def postorder(self,cache):
		self.root.postorder(cache)

	def inorder(self,cache):
		self.root.inorder(cache)

if __name__=='__main__':
	tree = Tree()
	tree.insert(1)
	tree.insert(2)
	tree.insert(3)
	tree.insert(4)
	
	cache = []
	tree.postorder(cache)
	print(cache)
