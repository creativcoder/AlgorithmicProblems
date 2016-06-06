
class Node(object):
	def __init__(self, val):
		self.value = val
		self.left = None
		self.right = None
		self.parent = (None,'')

	def is_leaf(self):
		return self.left == None and self.right == None

	def get_parent(self):
		return self.parent

	def has_one_child(self):
		if not (self.left and self.right):
			return (('left', self.left), True) if self.left is not None else ((self.right, 'right'), True)
		else:
			return False

	def min_child(self):
		if self.is_leaf():
			return None
		elif self.has_one_child()[1]:
			return self.has_one_child()[0]
		else:
			return self.left if self.left.value < self.right.value else self.right

	def is_internal(self):
		if self.left and self.right:
			return True
		else:
			return False

	def insert(self,data):
		if self.value == data:
			raise ValueError('A possible duplicate data')
			return False
		elif self.value > data:
			if self.left:
				return self.left.insert(data)
			else:
				self.left = Node(data)
				self.left.parent = (self,'left')
				return True
		else:
			if self.right:
				return self.right.insert(data)
			else:
				self.right = Node(data)
				self.right.parent = (self,'right')
				return True

	def find(self,data):
		if self.value == data:
			return self
			
		elif self.value > data:
			if self.left:
				return self.left.find(data)
			else:
				return None
		else:
			if self.right:
				return self.right.find(data)
			else:
				return None

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

	def delete(self,data):
		node = self.find(data)
		if node:
			if node.is_leaf():
				(parent,what_child) = node.get_parent()
				setattr(parent,what_child, None)
			elif node.has_one_child()[1]:
				((side,child),_) = node.has_one_child()
				setattr(node,side,child)
			else:
				min_child = node.min_child()


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
			return None

	def preorder(self,cache):
		self.root.preorder(cache)

	def postorder(self,cache):
		self.root.postorder(cache)

	def inorder(self,cache):
		self.root.inorder(cache)

	def delete(self,data):
		if self.root:
			self.root.delete(data)

if __name__=='__main__':
	tree = Tree()
	tree.insert(5)
	tree.insert(1)
	tree.insert(7)
	tree.insert(6)
	tree.insert(9)

	cache = []
	tree.inorder(cache)
	print('Inorder Traversal', cache)
