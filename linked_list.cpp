#include "linked_list.h"

// TODO: LinkedList 클래스 구현 작성
LinkedList::LinkedList()
{
      head_ = nullptr;
      size_ = 0;
};

LinkedList::~LinkedList()
{
      Node *current = head_;
      while (current != nullptr)
      {
            Node *next = current->next_;
            delete current;
            current = next;
      }
}

void LinkedList::print()
{
      Node *cur = head_;
      while (cur != nullptr)
      {
            std::cout << cur->value_ << " ";
            cur = cur->next_;
      }
      std::cout << std::endl;
}

void LinkedList::insert(int index, int value)
{
      Node *newNode = new Node(value);

      if (index == 0)
      {
            newNode->next_ = head_;
            head_ = newNode;
      }
      else
      {
            Node *prev = head_;
            for (int i = 0; i < index - 1; ++i)
            {
                  prev = prev->next_;
            }
            newNode->next_ = prev->next_;
            prev->next_ = newNode;
      }

      ++size_; // 노드를 삽입하므로, 리스트 size 증가
}

int LinkedList::get(int index)
{
      if (index < 0 || index >= size_)
            return -1;

      Node *current = head_;
      for (int i = 0; i < index; ++i)
      {
            current = current->next_;
      }

      return current->value_; // 노드 값 반환
}

void LinkedList::remove(int index)
{
      Node *removeNode = nullptr;

      if (index == 0)
      {
            removeNode = head_;
            head_ = head_->next_;
      }
      else
      {
            Node *prev = head_;
            for (int i = 0; i < index - 1; ++i)
            {
                  prev = prev->next_;
            }
            removeNode = prev->next_;
            prev->next_ = removeNode->next_;
      }

      delete removeNode; // 노드 삭제
      --size_;           // 노드를 삭제했으므로, 리스트 size 감소
}
