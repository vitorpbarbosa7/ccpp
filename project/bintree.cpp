#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "bintree.hpp"

using namespace std;

class Element {
  char key;

public:
  Element(char key) { this->key = key; }
  // friend function to overload the << operator
  friend std::ostream &operator<<(std::ostream &os, const Element &e) {
    return os << "Element(" << e.key << ")";
  }
};

class Node {

public:
  void *item;
  Node *parent;
  Node *left;
  Node *right;
  Node(void *item) {
    this->item = item;
    this->parent = nullptr;
    this->left = nullptr;
    this->right = nullptr;
  }

  // representation
  friend std::ostream &operator<<(std::ostream &os, const Node &Node) {
    return os << "Node(" << *(static_cast<Element *>(Node.item)) << ")";
  }

private:
  Node *subtree_first() {
    // traversing left, as in the traversal order, left comes first

    // by calling this.left again if exists
    // recursing left to find first Element
    if (this->left) {
      return this->left->subtree_first();
    } else {
      return this;
    }
  }
  Node *subtree_last() {
    if (this->right) {
      return this->right->subtree_last();
    } else {
      return this->right;
    }
  }
};

int main() {

  Element *element_a = new Element('a');
  Node *node = new Node(element_a);

  std::cout << *element_a << std::endl;
  std::cout << *node << std::endl;
}

//
