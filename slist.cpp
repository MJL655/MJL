#include<iostream>
using namespace std;

typedef struct node {
    int data;
    struct node *next;
}NODE;

class LinkList
{
private:
    NODE *head;
public:
    LinkList() { head = NULL; }
    ~LinkList();
    void clearSqList();
    bool isEmpty() { return head == NULL; }
	void print();
    int Length();//求链表长度
    bool GetElem(int i, int *e);
    int LocateElem();//查找
    bool Insert();//指定位置插入
	void insert();//尾插
	void instead();//替换
    bool Delete();
    NODE * Reverse();
};

//析构函数
LinkList::~LinkList()//和清空一样
{
    NODE *p = head;
    while (head)
    {
        p = head;
        head = head->next;
        delete(p);
    }
}

void LinkList::clearSqList()//清空函数，和析构一样
{
    NODE *p = head;
    while (head)
    {
        p = head;
        head = head->next;
        delete(p);
    }
}
void LinkList::print()
{
	NODE *p = head;
    int flg=0;
    while(p!=NULL)
    {
		cout<<p->data<<" ";
        p=p->next;
		flg=1;
        
    }
    if(!flg)
        cout<<"链表为空";
    cout<<endl;
}
//获取链表长度
int LinkList::Length()
{
    NODE *p = head;
    int len = 0;
    while (p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}

bool LinkList::GetElem(int i, int *e)//*e是返回的元素
{
    NODE *p = head;
    int j = 0;
    while (p&&j < i)
    {
        p = p->next;
        j++;
    }
    if (p == NULL)
		return false;
    *e = p->data;
    return true;
}

int LinkList::LocateElem()//查找元素e在链表什么位置（下标位置，从0开始）
{
    int i = 0;
	int e;
	cout<<"请输入查找元素";
	cin>>e;
    NODE *p = head;
    while (p != NULL)
    {
        if (p->data == e)
            cout<<"元素位置为："<<i;
        else
			p = p->next;
        i++;
    }
    cout << "表中不存在指定元素" << endl;
    return -1;
}
void LinkList::insert()//尾插
{
	NODE *p = head,*s;
	int e;
    cout<<"请输入要插入的值"<<endl;
    cin>>e;
	if(p==NULL)
	{
		s = (NODE *)new NODE[1];
        s->data = e;
        s->next = p;
        head = s;
		return;
	}
	while(p->next!=NULL)
    {
        p=p->next;
    }
	cout<<"请输入要插入的值"<<endl;
   	s= (NODE *)new NODE[1];
	s->data = e;
	s->next = NULL;
	p->next = s;
	cout<<"插入成功"<<endl;
    return;
}
void LinkList::instead()
{
	NODE *p = head;
    cout<<"请输入要替换的值"<<endl;
    int e;
    cin>>e;
    cout<<"请输入要成替换的值"<<endl;
    int m;
    cin>>m;
    int flag=0,i=0;
    while (p != NULL)
    {
        if (p->data == e)
		{
            p->data=m;
			flag=1;
		}
        else
			p = p->next;
        i++;
    }
	if(flag==0)
    {
		cout << "表中不存在指定元素" << endl;
	}
}

bool LinkList::Insert()//在指定位置插入元素e
{
    NODE *p = head,*s;
	int i,e;
	cout<<"请输入指定位置";
	cin>>i;
	cout<<"请输入插入元素";
	cin>>e;
    int j = 0;
    if (i == 0)
    {
        s = (NODE *)new NODE[1];
        s->data = e;
        s->next = p;
        head = s;
        return true;
    }
    while (p&&j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (p == NULL)
        return false;//到队尾了
    s= (NODE *)new NODE[1];
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool LinkList::Delete()//删除指定位置的元素，并把删除的元素赋给*e
{
    NODE *p = head, *s;
	int i;
	cout<<"请输入删除元素的位置";
	cin>>i;
    if (p == NULL) 
		return false;
    int j = 0;
    if (i == 0)
    {
        head = head->next;
        delete p;
        p = NULL;
        return true;
    }
    while (p&&j < i - 1)
    {
        j++;
        p = p->next;
    }
    if (p == NULL)
        return false;
    s = p->next;
    p->next = p->next->next;
    delete s;
    s = NULL;
    return true;
}

int main()
{
    int a = 0;
    int *p = &a;
    LinkList li;
	while(1)
	{
		cout<<"           [0] 输出链表长度        [1] 打印链表  [2] 查找元素位置  [3] 修改指定位置元素"<<endl;
		cout<<"           [4] 在指定位置插入元素  [5] 尾插      [6] 删除元素      [7] 退出"<<endl;
		int i;
		cin>>i;
		switch(i)
		{
		case 0:cout <<"链表长度"<< li.Length()<<endl;
			break;
		case 1:li.print();
			break;
		case 2:li.LocateElem();
			break;
		case 3:li.instead();
			break;
		case 4:li.Insert();
			break;
		case 5:li.insert();
			break;
		case 6:li.Delete();
			break;
		case 7:li.clearSqList();
			exit(0);
		}
    }
	
	return 0;
}