#ifndef LIST_H
#define LIST_H

// TODO: List 클래스 정의 작성
#include "linked_list.h"

class List : public LinkedList
{
public:
      void insert(int index, int value); // index 위치에 노드를 삽입한다

      int get(int index); // index에 위치한 노드의 값을 반환한다

      void remove(int index); // index에 위치한 노드를 제거하고 메모리 상에서 해제한다
};

#endif