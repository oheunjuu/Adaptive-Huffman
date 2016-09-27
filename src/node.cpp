#include "node.hpp"

// CONSTRUCTORS -----------------------------------------------------------------
Node::Node(int w) {
  weight = w;
}

Empty::Empty() : Node(0) {}

Leaf::Leaf(char symbol) : Empty() {
  this->symbol = symbol;
}


Branch::Branch(Node* left, Node* right) :
  Node(left->get_weight() + right->get_weight())
{
  left->set_parent(this);
  right->set_parent(this);
  this->left = left;
  this->right = right;
}

// DESTRUCTORS ------------------------------------------------------------------
Branch::~Branch() {
  delete left;
  delete right;
}


// Search  ----------------------------------------------------------------------
Node* Leaf::search_weights(int weight) {
  if (this->get_weight() == weight) {
    return this;
  } else {
    return nullptr;
  }
}


Node* Branch::search_weights(int weight) {
  Node* result = left->search_weights(weight);
  if (result) { return result; }
  else {
    return right->search_weights(weight);
  }
}

// TRAVERSAL --------------------------------------------------------------------
Node* Empty::inorder_next() {
  Branch* next = this->get_parent();
  if (this == next->get_left()) {
    return next;
  } else {
    while (next != next->get_parent()->get_left()) {
      next = next->get_parent();
    }
    return next->get_parent();
  }
}

Node* Branch::inorder_next() {
  return this->right->leftmost();
}

