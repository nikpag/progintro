#include <iostream>
using namespace std;

typedef struct node { int data; node *left, *right; } *tree;

tree Tree(int data, tree left = nullptr, tree right = nullptr) {
	tree t = new node;
	t->data = data;
	t->left = left;
	t->right = right;
	return t;
}

int help(tree t, int p) {
	if (t == nullptr) return 0;
	if (t->data == p) return -1;
	int l, r;
	if ((l = help(t->left, t->data)) != -1) l++;
	if ((r = help(t->right, t->data)) != -1) r++;
	if (l == -1 && r == -1) return -1;
	return max(l, r);
}

int longestPath(tree t) {
	int d;
	return ((d = help(t, t->data - 1)) == -1) ? 0 : d;
}

int main() {
	tree t = Tree(42, Tree(8, Tree(5), Tree(9)), Tree(17, Tree(17, Tree(1), Tree(3, Tree(2))), Tree(14, Tree(17))));
	cout << longestPath(t);
}