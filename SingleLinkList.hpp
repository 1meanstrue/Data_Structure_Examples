#pragma once
#include <iostream>

using namespace std;

//带头节点的单链表
class SingleLinkList {
public:
	typedef struct LNode {	
		int data;
		LNode* next;
	}LNode,*LinkList;

	//初始化
	bool InitList(LinkList &L) {	
		L = new LNode;
		L->next = nullptr;		
		if (L == nullptr) return false;
		return true;
	}

	//统计单链表元素个数（求表长）
	int Length(LinkList L) {
		int len=0;
		LNode* p = L;
		while (p->next != nullptr) {
			len++;
			p = p->next;
		}
		return len;
	}

	//按序查找元素
	LNode* Get(LinkList L,int i) {
		LinkList p = L;
		while (p != nullptr && i != 0) {
			p = p->next;
			i--;
		}return p;
	}

	//找到链表中某值第一次出现的位置
	LNode* Find(LinkList L, int val) {
		LinkList p = L;
		while (p != nullptr&&p->data!=val) {
			p = p->next;
		}return p;
	}

	//头插法
	//尾插法需要尾指针，此处暂且先不做实现
	void InsertHead(LinkList& L,int x) {
		LNode* p = new LNode;
		p->data = x;
		p->next = L->next;
		L->next = p;
	}

	//按位置删除
	
	//按值（第一次出现）删除
};