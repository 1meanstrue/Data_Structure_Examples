#pragma once
#include<iostream>
#include"HeaderFiles.hpp"

using namespace std;

//��ͷ����˫����
class DoubleLinkList:public SingleLinkList {
public:
	typedef struct LNode {
		LNode* prev, * next;
		int data;
	}LNode,*LinkList;


};