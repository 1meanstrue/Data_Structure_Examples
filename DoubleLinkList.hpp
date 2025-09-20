#pragma once
#include<iostream>
#include"HeaderFiles.hpp"

using namespace std;

//带头结点的双链表
class DoubleLinkList:public SingleLinkList {
public:
	typedef struct LNode {
		LNode* prev, * next;
		int data;
	}LNode,*LinkList;


};