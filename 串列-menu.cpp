#include <iostream>
#include <cstring>
using namespace std;
int menu(){
	int i;
	cout<<endl<<"�D���"<<endl;
	cout<<"1.�s�W�P�Ǹ��"<<endl;
	cout<<"2.�R�����"<<endl;
	cout<<"3.�d�߸��"<<endl;
	cout<<"4.�C�L���"<<endl;
	cout<<"0.���}�t��"<<endl;
	cout<<"�п�ܧA�n���A��"<<endl<<endl;
	cin>>i;
	return i;
}
class st{
	public:
	int no;
	char name[10];
	int normal;
	int midterm;
	int final;
	st *ptr;
};
int main(){
	int s,a=1;
	st *p;
	st *pd;
	st *head;
	st *q;
	st *min;
	st *max;
	st *x;
	st *y;
	st *z;
	head=NULL;
	while(s=menu()){
		switch(s){
			case 1:cout<<"�A��ܤF1-�s�W�P�Ǹ��"<<endl<<endl;
				if(head==NULL){
					cout<<"�п�J�P�Ǫ��s���A�m�W�A���ɦ��Z�A�������Z�A�������Z"<<endl<<endl;
					head=new st;
					cout<<"�п�J�P�Ǫ��s��:";
					cin>>head->no;
					cin.get();
					cout<<"�п�J�P�Ǫ��m�W:";
					cin.getline(head->name,10);
					cout<<"�п�J�P�Ǫ����ɦ��Z:";
					cin>>head->normal;
					cout<<"�п�J�P�Ǫ��������Z:";
					cin>>head->midterm;
					cout<<"�п�J�P�Ǫ��������Z:";
					cin>>head->final;
				}
				else{
					cout<<"�п�J�P�Ǫ��s���A�m�W�A���ɦ��Z�A�������Z�A�������Z"<<endl<<endl;
					p=new st;
					cout<<"�п�J�P�Ǫ��s��:";
					cin>>p->no;
					cin.get();
					cout<<"�п�J�P�Ǫ��m�W:";
					cin.getline(p->name,10);
					cout<<"�п�J�P�Ǫ����ɦ��Z:";
					cin>>p->normal;
					cout<<"�п�J�P�Ǫ��������Z:";
					cin>>p->midterm;
					cout<<"�п�J�P�Ǫ��������Z:";
					cin>>p->final;
					cout<<endl;
					min=head;
					max=head;
					while(max->ptr!=NULL){
						max=max->ptr;
					}
					if(head->ptr==NULL){
						if(p->no>head->no){
							head->ptr=p;
							p->ptr=NULL;
						}
						else{
							p->ptr=head;
							head=p;
							} 
					}
					if(p->no<min->no){
						p->ptr=min;
						min=p;
					}
					else{
						if(p->no>max->no){
						max->ptr=p;
						p->ptr=NULL;	
						}
						else{
							x=head;
							y=head;
							while(y->no<p->no){
							y=y->ptr;
							}
							while(x->ptr!=y){
								x=x->ptr;	
							}
							x->ptr=p;
							p->ptr=y;
						}
					}
				}	
				break;
			case 2:cout<<"�A��ܤF2-�R�����"<<endl<<endl;
				cout<<"�Q�n�R���X��";
				cin>>pd->no;
				if(pd->no==p->no){
					while(pd->no<p->no)
					x=head;
					y=head;
					z=head;
					z=p->ptr;	
				}
				else{
					cout<<"�S�����y��";
				}
				break;
			case 3:cout<<"�A��ܤF3-�d�߸��"<<endl<<endl;
				break;
			case 4:cout<<"�A��ܤF4-�C�L���"<<endl<<endl;
				q=head;
				while(q!=NULL){
				cout<<endl<<"�s��:"<<q->no<<endl<<"�m�W:"<<q->name<<endl<<"���ɦ��Z:"<<q->normal<<endl<<"�������Z:"<<q->midterm<<endl<<"�������Z:"<<q->final<<endl<<endl;
				q=q->ptr;
				}
				break;    
			default:
			    cout<<"���n�N��A�S���o�ӿﶵ"<<endl;     
		}	
	}
	cout<<"���§A���ϥ�~~"<<endl;
}
