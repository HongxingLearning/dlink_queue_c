#include <iostream>
#include "double_link.h"

/*
双向链表实现队列，存储任意数据
*/

//创建队列
int create_dlink_queue()
{
	return create_dlink();
}

//销毁队列
int destory_dlink_queue()
{
	return destroy_dlink();
}

//将p添加到队尾
int add(void *p)
{
	return dlink_append_last(p);
}

//返回队列开头的元素
void *front()
{
	return dlink_get_first();
}

//返回队列开头元素并删除
void * pop()
{
	void *p = dlink_get_first();
	dlink_delete_first();
	return p;
}

//返回队列大小
int size()
{
	return dlink_size();
}

int is_empty()
{
	return dlink_is_empty();
}





