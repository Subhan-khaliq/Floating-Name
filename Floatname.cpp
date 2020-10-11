#include<iostream>
#include<windows.h>
using namespace std;
class FAST
{
	private:
		string p;
		int y,k;
	public:
	FAST();
	void gotoxy(int x,int y);
	void floatingname(string p,int k=0);
};
FAST::FAST()
{
	p="SUBHAN";
	k=0;
}
void FAST::gotoxy(int x,int y)
{
COORD coord={3,3};
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
            
}
void FAST::floatingname(string p,int k)
{
	
	if(k==0)
	{
		int e=-1;
		while(e<0)
		{for(int i=0;i<114;i++)
	{
		 gotoxy(i,0);
		 cout<<p;
  		Sleep(10);
  		system("cls");
	}
for( int i=114;i>0;i--)
{
	 gotoxy(i,0);
  		cout<<p;
  		Sleep(10);
  		system("cls");
}
}
}
	if(k==1)
	{
		int e=-1;
		while(e<0)
		{
		for(int i=0;i<30;i++)
	{
		 gotoxy(0,i);
  		cout<<p;
  		Sleep(10);
  		system("cls");}
for(int i=27;i>0;i--)
{
	 	gotoxy(0,i);
  		cout<<p;
  		Sleep(10);
  		system("cls");
}
}
	}
	if(k==2)
	{int c=-1;
		while(c<0)
	{
	int j=15;
		for(int i=0;i<50;i+=4)
		{
		gotoxy(i,j);
		j++;
  		cout<<p<<endl;
  		Sleep(10);
  		system("cls");
  		}
  		for(int i=50;i<108;i+=4)
  		{
  			gotoxy(i,j);
  			j--;
  		cout<<p<<endl;
  		Sleep(10);
  		system("cls");
		}
		for(int i=112;i>60;i-=4)
		{
		gotoxy(i,j);
  		j--;
  		cout<<p<<endl;
  		Sleep(100);
  		system("cls");
		}
		for(int i=60;i>0;i-=5)
		{
		gotoxy(i,j);
  		j++;
  		cout<<p<<endl;
  		Sleep(100);
  		system("cls");
		}
	}
}
}
int main(void)
{
	FAST d1;
	d1.floatingname("MAHAM");
	return 0;
}
