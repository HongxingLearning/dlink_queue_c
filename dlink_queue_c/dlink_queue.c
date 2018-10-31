#include <iostream>
#include "double_link.h"

/*
˫������ʵ�ֶ��У��洢��������
*/

//��������
int create_dlink_queue()
{
	return create_dlink();
}

//���ٶ���
int destory_dlink_queue()
{
	return destroy_dlink();
}

//��p��ӵ���β
int add(void *p)
{
	return dlink_append_last(p);
}

//���ض��п�ͷ��Ԫ��
void *front()
{
	return dlink_get_first();
}

//���ض��п�ͷԪ�ز�ɾ��
void * pop()
{
	void *p = dlink_get_first();
	dlink_delete_first();
	return p;
}

//���ض��д�С
int size()
{
	return dlink_size();
}

int is_empty()
{
	return dlink_is_empty();
}





