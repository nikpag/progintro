#include <iostream>
using namespace std;

struct node {
  int data;
  node* next;
};

class list {
public:
  list() {
    head = nullptr;
    _size = 0;
  }

  bool empty() {
    return head == nullptr;
  }

  int size() {
    return _size;
  }

  void add(int k, int x) {
    if (this->empty()) {
      head = new node;
      head->next = nullptr;
      head->data = x;
    }
    else {
      if (k == 1) {
        node *p = head;
        head = new node;
        head->data = x;
        head->next = p;
      }
      else {
        node *p = head, *q = head;
        for (int i = 0; i < k - 1; i++) {
          p = q;
          q = q->next;
        }
        p->next = new node;
        p->next->next = q;
        p->next->data = x;
      }
    }
    _size++;
  }

  int get(int k) {
    node *p = head;
    for (int i = 0; i < k - 1; i++) {
      p = p->next;
    }

    return p->data;
  }

  void remove(int k) {
    if (this->size() == 1) {
      delete head;
      head = nullptr;
    }
    else {
      if (k == 1) {
        node *p = head;
        head = head->next;
        delete p;
      }
      else {
        node *p = head, *q = head;
        for (int i = 0; i < k - 1; i++) {
          p = q;
          q = q->next;
        }
        p->next = q->next;
        delete q;
      }
    }
    _size--;
  }

  void print() {
    node *p = head;

    while (p != nullptr) {
      cout << p->data << " ";
      p = p->next;
    }
    cout << endl;
  }

private:
  node *head;
  int _size;
};

int main() {
  int N;

  list l;

  cin >> N;

  int K, X;

  for (int i = 0; i < N; i++) {
    cin >> K >> X;
    l.add(K, X);
    l.print();
  }

  int M;

  cin >> M;

  for (int i = 0; i < M; i++) {
    cin >> K;
    l.remove(K);
    l.print();
  }

  cin >> K;

  cout << l.size() << " " << l.get(K) << endl;
}
