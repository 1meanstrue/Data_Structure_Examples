#pragma once
#include <iostream>

using namespace std;

//��ͷ�ڵ�ĵ�����
class SingleLinkList {
public:
	typedef struct LNode {	
		int data;
		LNode* next;
	}LNode,*LinkList;

	//��ʼ��
	bool InitList(LinkList &L) {	
		L = new LNode;
		L->next = nullptr;		
		if (L == nullptr) return false;
		return true;
	}

	//ͳ�Ƶ�����Ԫ�ظ����������
	int Length(LinkList L) {
		int len=0;
		LNode* p = L;
		while (p->next != nullptr) {
			len++;
			p = p->next;
		}
		return len;
	}

	//�������Ԫ��
	LNode* Get(LinkList L,int i) {
		LinkList p = L;
		while (p != nullptr && i != 0) {
			p = p->next;
			i--;
		}return p;
	}

	//�ҵ�������ĳֵ��һ�γ��ֵ�λ��
	LNode* Find(LinkList L, int val) {
		LinkList p = L;
		while (p != nullptr&&p->data!=val) {
			p = p->next;
		}return p;
	}

	//ͷ�巨
	//β�巨��Ҫβָ�룬�˴������Ȳ���ʵ��
	void InsertHead(LinkList& L,int x) {
		LNode* p = new LNode;
		p->data = x;
		p->next = L->next;
		L->next = p;
	}

	//��λ��ɾ��
	
	//��ֵ����һ�γ��֣�ɾ��
};