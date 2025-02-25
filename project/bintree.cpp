#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "bintree.hpp"

using namespace std;

class Element {

public:
  char key;
  Element(char key) { this->key = key; }
  // friend function to overload the << operator
  friend std::ostream &operator<<(std::ostream &os, const Element &e) {
    return os << "Element(" << e.key << ")";
  }
};

class Node {

public:
  Element *item;
  Node *parent;
  Node *left;
  Node *right;
  Node(Element *item) {
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

  void subtree_insert(Node *subtree) {

    // left case, inserts before
    if (subtree->item->key < this->item->key) {
      if (this->left) {
        this->left->subtree_insert(subtree);
      } else {
        this->subtree_insert_after(subtree);
      }
    }

    // right case, insert after
    else {
      if (subtree->item->key > this->item->key) {
        if (this->right) {
          this->right->subtree_insert(subtree);
        } else {
          this->subtree_insert_after(subtree);
        }
      } else {
        // this->item = subtree->item;
        return;
      }
    }
  }

  void subtree_insert_before(Node *newnode) {

    if (this->left != nullptr) {
      // return rightmost node
      Node *rightMostNode;
      rightMostNode = this->left->subtree_last();
      rightMostNode->right = newnode;
      newnode->parent = rightMostNode;
    } else {
      // if it has no left, no difficult on finding the before
      this->left = newnode;
      newnode->parent = this;
    }
  }

  void subtree_insert_after(Node *newnode) {
    if (this->right != nullptr) {
      Node *leftMostNode;
      leftMostNode = this->right->subtree_first();
      leftMostNode->left = newnode;
      newnode->parent = this;
    } else {
      this->right = newnode;
      newnode->parent = this;
    }
  }

  // end of Node class
};

int main() {

  Element *element_a = new Element('a');
  Node *node = new Node(element_a);

  std::cout << *element_a << std::endl;
  std::cout << *node << std::endl;
}

//
