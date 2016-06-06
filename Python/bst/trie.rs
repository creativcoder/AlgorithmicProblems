
/*struct HashTable {
	hasher: Fn(String) -> T,
	cache: Vec<String>,
}*/

/*struct Node {
	data: Option<char>,
	children: Vec<Node>,
}

impl Node {
	fn new() -> Self {
		Node {
			data:None,
			children: vec![]
		}
	}
	fn insert_key(&self, key: char) {

	}
}*/

fn hash(s: String) -> usize {
	let str_bytes = s.chars().collect::<Vec<char>>();
}

fn main() {
    
}