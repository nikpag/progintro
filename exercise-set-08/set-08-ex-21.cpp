#include <iostream>

using namespace std;

int _max(int a, int b) {
  return a > b ? a : b;
}

int _min(int a, int b) {
  return a < b ? a : b;
}

struct node {
  int data;
  node *left;
  node *right;
};

class bstree {
public:
  bstree() {
    root = nullptr;
  }

  int height() {
    return height(root);
  }

  void insert(int x) {
    root = insert(root, x);
  }

  int search(int x) {
    return search(root, x);
  }

  int min() {
    return min(root);
  }

  int max() {
    return max(root);
  }

  void inorder() {
    inorder(root);
    cout << "end" << endl;
  }

  void preorder() {
    preorder(root);
    cout << "end" << endl;
  }

  void postorder() {
    postorder(root);
    cout << "end" << endl;
  }

  void print() {
    print(root);
    cout << "end" << endl;
  }

private:
  node *root;

  int height(node *root) {
    if (root == nullptr) return 0;
    return 1 + _max(height(root->left), height(root->right));
  }

  node * insert(node *root, int x) {
    node *t = root, *s;
    int dir = 0; // dir == -1 means left and dir == 1 means right
    while (t != nullptr) {
      if (x < t->data) {
        s = t;
        t = t->left;
        dir = -1;
      }
      else {
        s = t;
        t = t->right;
        dir = 1;
      }
    }
    t = new node;
    t->left = t->right = nullptr;
    t->data = x;
    if (dir == -1) s->left = t;
    else if (dir == 1) s->right = t;

    return root == nullptr ? t : root;
  }

  int search(node *root, int x) {
    int depth = 1;
    node *t = root;
    while (t != nullptr) {
      if (t->data == x) {
        return depth;
      }
      if (x < t->data) {
        t = t->left;
      }
      else {
        t = t->right;
      }
      depth++;
    }
    return 0;
  }

  int min(node *root) {
    node *t = root;
    int answer;
    while (t != nullptr) {
      answer = t->data;
      t = t->left;
    }

    return answer;
  }

  int max(node *root) {
    node *t = root;
    int answer;
    while (t != nullptr) {
      answer = t->data;
      t = t->right;
    }

    return answer;
  }

  void inorder(node *root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
  }

  void preorder(node *root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
  }

  void postorder(node *root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
  }

  void print(node *root) {
    if (root == nullptr) {
      cout << "nullptr ";
      return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
  }
};

int main() {
  bstree t;

  int N;
  cin >> N;

  int x;
  for (int i = 0; i < N; i++) {
    cin >> x;
    t.insert(x);
  }

  int M;
  cin >> M;

  int searchResults[M];
  for (int i = 0; i < M; i++) {
    cin >> x;
    searchResults[i] = t.search(x);
  }

  cout << t.height() << endl;
  cout << t.min() << " " << t.max() << endl;

  for (int i = 0; i < M; i++) {
    cout << searchResults[i] << " ";
  }

  cout << endl;

  t.inorder();
  t.preorder();
  t.postorder();
}
