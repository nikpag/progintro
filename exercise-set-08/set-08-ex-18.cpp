#include <iostream>
using namespace std;

struct node {
  int data;
  node *next;
};

class queue {
public:
  queue() {
    this->head = nullptr;
    this->tail = nullptr;
    this->_size = 0;
  }

  bool empty() {
    return this->size() == 0;
  }

  void enqueue(int x) {
    if (this->empty()) {
      this->head = this->tail = new node;
      this->tail->data = x;
      this->tail->next = this->head->next = nullptr;
    }
    else {
      node *p = tail;
      this->tail = new node;
      this->tail->next = nullptr;
      p->next = tail;
      this->tail->data = x;
    }
    this->_size++;
  }

  void dequeue() {
    if (!this->empty()) {
      node *p = this->head;
      this->head = this->head->next;
      delete p;
    }
    this->_size--;
  }

  int peek() {
    if(!this->empty()) {
      return head->data;
    }
    else {
      cout << "Trying to peek from empty queue" << endl;
      exit(0);
    }
  }

  int size() {
    return this->_size;
  }

  bool equals(queue q) {
    if (this->size() != q.size()) return false;
    for (int i = 0; i < this->size(); i++) {
      if (this->peek() != q.peek()) {
        return false;
      }
      this->dequeue();
      q.dequeue();
    }
    return true;
  }

  void print() {
    node* p = this->head;
    while(p != nullptr) {
      cout << p->data << " ";
      p = p->next;
    }
    cout << endl;
  }

private:
  node *head;
  node *tail;
  int _size;
};

int main() {
  queue q, posQ, negQ;
  int x;

  while (cin >> x) {
    q.enqueue(x);
  }

  while (!q.empty()) {
    x = q.peek();

    if (x > 0) {
      posQ.enqueue(x);
    }
    else {
      negQ.enqueue(-x);
    }
    q.dequeue();
  }

  cout << (posQ.equals(negQ) ? "yes" : "no") << endl;
}
