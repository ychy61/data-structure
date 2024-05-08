#ifndef NODE_H
#define NODE_H

class Node {
  // TODO: Node 클래스 정의 추가 작성

public:
  int value() { return value_; }

  Node(int value) {
    value_ = value;
    next_ = nullptr;
  }

private:
  int value_;
  Node *next_;
};

#endif