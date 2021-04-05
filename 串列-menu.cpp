#include <iostream>
#include <cstring>
using namespace std;
int menu(){
	int i;
	cout<<endl<<"主選單"<<endl;
	cout<<"1.新增同學資料"<<endl;
	cout<<"2.刪除資料"<<endl;
	cout<<"3.查詢資料"<<endl;
	cout<<"4.列印資料"<<endl;
	cout<<"0.離開系統"<<endl;
	cout<<"請選擇你要的服務"<<endl<<endl;
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
			case 1:cout<<"你選擇了1-新增同學資料"<<endl<<endl;
				if(head==NULL){
					cout<<"請輸入同學的編號，姓名，平時成績，期中成績，期末成績"<<endl<<endl;
					head=new st;
					cout<<"請輸入同學的編號:";
					cin>>head->no;
					cin.get();
					cout<<"請輸入同學的姓名:";
					cin.getline(head->name,10);
					cout<<"請輸入同學的平時成績:";
					cin>>head->normal;
					cout<<"請輸入同學的期中成績:";
					cin>>head->midterm;
					cout<<"請輸入同學的期末成績:";
					cin>>head->final;
				}
				else{
					cout<<"請輸入同學的編號，姓名，平時成績，期中成績，期末成績"<<endl<<endl;
					p=new st;
					cout<<"請輸入同學的編號:";
					cin>>p->no;
					cin.get();
					cout<<"請輸入同學的姓名:";
					cin.getline(p->name,10);
					cout<<"請輸入同學的平時成績:";
					cin>>p->normal;
					cout<<"請輸入同學的期中成績:";
					cin>>p->midterm;
					cout<<"請輸入同學的期末成績:";
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
			case 2:cout<<"你選擇了2-刪除資料"<<endl<<endl;
				cout<<"想要刪除幾號";
				cin>>pd->no;
				if(pd->no==p->no){
					while(pd->no<p->no)
					x=head;
					y=head;
					z=head;
					z=p->ptr;	
				}
				else{
					cout<<"沒有此座號";
				}
				break;
			case 3:cout<<"你選擇了3-查詢資料"<<endl<<endl;
				break;
			case 4:cout<<"你選擇了4-列印資料"<<endl<<endl;
				q=head;
				while(q!=NULL){
				cout<<endl<<"編號:"<<q->no<<endl<<"姓名:"<<q->name<<endl<<"平時成績:"<<q->normal<<endl<<"期中成績:"<<q->midterm<<endl<<"期末成績:"<<q->final<<endl<<endl;
				q=q->ptr;
				}
				break;    
			default:
			    cout<<"不好意思，沒有這個選項"<<endl;     
		}	
	}
	cout<<"謝謝你的使用~~"<<endl;
}
