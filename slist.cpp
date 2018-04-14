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
    int Length();//��������
    bool GetElem(int i, int *e);
    int LocateElem();//����
    bool Insert();//ָ��λ�ò���
	void insert();//β��
	void instead();//�滻
    bool Delete();
    NODE * Reverse();
};

//��������
LinkList::~LinkList()//�����һ��
{
    NODE *p = head;
    while (head)
    {
        p = head;
        head = head->next;
        delete(p);
    }
}

void LinkList::clearSqList()//��պ�����������һ��
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
        cout<<"����Ϊ��";
    cout<<endl;
}
//��ȡ������
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

bool LinkList::GetElem(int i, int *e)//*e�Ƿ��ص�Ԫ��
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

int LinkList::LocateElem()//����Ԫ��e������ʲôλ�ã��±�λ�ã���0��ʼ��
{
    int i = 0;
	int e;
	cout<<"���������Ԫ��";
	cin>>e;
    NODE *p = head;
    while (p != NULL)
    {
        if (p->data == e)
            cout<<"Ԫ��λ��Ϊ��"<<i;
        else
			p = p->next;
        i++;
    }
    cout << "���в�����ָ��Ԫ��" << endl;
    return -1;
}
void LinkList::insert()//β��
{
	NODE *p = head,*s;
	int e;
    cout<<"������Ҫ�����ֵ"<<endl;
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
	cout<<"������Ҫ�����ֵ"<<endl;
   	s= (NODE *)new NODE[1];
	s->data = e;
	s->next = NULL;
	p->next = s;
	cout<<"����ɹ�"<<endl;
    return;
}
void LinkList::instead()
{
	NODE *p = head;
    cout<<"������Ҫ�滻��ֵ"<<endl;
    int e;
    cin>>e;
    cout<<"������Ҫ���滻��ֵ"<<endl;
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
		cout << "���в�����ָ��Ԫ��" << endl;
	}
}

bool LinkList::Insert()//��ָ��λ�ò���Ԫ��e
{
    NODE *p = head,*s;
	int i,e;
	cout<<"������ָ��λ��";
	cin>>i;
	cout<<"���������Ԫ��";
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
        return false;//����β��
    s= (NODE *)new NODE[1];
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool LinkList::Delete()//ɾ��ָ��λ�õ�Ԫ�أ�����ɾ����Ԫ�ظ���*e
{
    NODE *p = head, *s;
	int i;
	cout<<"������ɾ��Ԫ�ص�λ��";
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
		cout<<"           [0] ���������        [1] ��ӡ����  [2] ����Ԫ��λ��  [3] �޸�ָ��λ��Ԫ��"<<endl;
		cout<<"           [4] ��ָ��λ�ò���Ԫ��  [5] β��      [6] ɾ��Ԫ��      [7] �˳�"<<endl;
		int i;
		cin>>i;
		switch(i)
		{
		case 0:cout <<"������"<< li.Length()<<endl;
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