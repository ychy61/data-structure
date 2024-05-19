#include "queue.h"

// TODO: Queue 클래스 구현 작성
void Queue::push(int data)
{
      LinkedList::insert(LinkedList::size_, data);
}

int Queue::pop()
{
      int front = LinkedList::get(0);
      LinkedList::remove(0);
      return front;
}

int Queue::peek()
{
      return LinkedList::get(0);
}

void Queue::operator+=(int data)
{
      Queue::push(data);
}