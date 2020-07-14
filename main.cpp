#include <iostream>
#include "complex.h"
#include "rational.h"
using namespace std;
void interface();
void quit();
void complexcompute();
void rationalcompute();
void interface()
{
    int i=1;
    while(i)
	{
		cout << endl << endl;
    	cout << "----------------------------------" << endl;
    	cout << "----欢迎使用张昊钰牌特殊计算器----" << endl;
    	cout << "----------------------------------" << endl;
		cout<<endl<<endl;
		cout<<"请选择您的计算类型："<<endl<<endl;
        cout<<"                   0.退出；"<<endl;
		cout<<"                   1.复数计算；"<<endl;
		cout<<"                   2.有理数计算；"<<endl;
		cout<<"请选择按键(0-2):";
		cin>>i;
		cout<<endl;
		if(i>=0 && i<=2)
		{
			switch(i)
			{
			case 0:
				quit();
				break;
            case 1:
				complexcompute();
				break;
			case 2:
				rationalcompute();
				break;
			}	
		}
		else
		{
			cout<<"输入错误，请重新输入！" << endl;
		}
	}
}
void quit()
{
	cout<<"----------------------------------"<<endl;
	cout<<"-----感谢您使用张昊钰牌计算器-----"<<endl;
	cout<<"----------------------------------"<<endl;
	exit(1);
}
void complexcompute()
{	
	int j;
	cout<<"请选择您的复数计算内容："<<endl<<endl;
	cout<<"     0.返回主界面；"<<endl;
    cout<<"     1.两个复数相加；"<<endl;
	cout<<"     2.两个复数相减；"<<endl;
	cout<<"     3.两个复数相乘；"<<endl;
	cout<<"     4.两个复数相除；"<<endl;
	cout<<"请选择按键(0-4):";
	cin>>j;
	while(j)
	{
		if(j>=0 && j<=4)
		{
			float r1,j1,r2,j2;
			cout<<"请输入第一个复数的实部：";
			cin>>r1;
			cout<<"请输入第一个复数的虚部：";
			cin>>j1;
			cout<<"请输入第二个复数的实部：";
			cin>>r2;
			cout<<"请输入第二个复数的虚部：";
			cin>>j2;
			complex c1(r1,j1);
			complex c2(r2,j2);
			complex c3;
			switch(j)
			{	
				case 1:
					c3=c1+c2;
					c1.print ();
					cout<<"+";
					c2.print ();
					cout<<"=";
					c3.print ();
					cout<<endl;
					break;
				case 2:
					c3=c1-c2;
					c1.print ();
					cout<<"-";
					c2.print ();
					cout<<"=";
					c3.print ();
					cout<<endl;
					break;
				case 3:
					c3=c1*c2;
					c1.print ();
					cout<<"*";
					c2.print ();
					cout<<"=";
					c3.print ();
					cout<<endl;
				    break;
				case 4:
					c3=c1/c2;
					c1.print ();
					cout<<"/";
					c2.print ();
					cout<<"=";
					c3.print ();
					cout<<endl;
					break;
			}
		}
		else
		cout<<"按键错误，请重新选择！"<<endl;
		cout<<endl;
		cout<<"请选择您的复数计算内容："<<endl<<endl;
		cout<<"     0.返回主界面；"<<endl;
		cout<<"     1.两个复数相加；"<<endl;
		cout<<"     2.两个复数相减；"<<endl;
		cout<<"     3.两个复数相乘；"<<endl;
		cout<<"     4.两个复数相除；"<<endl;
		cout<<"请选择按键(0-4):";
		cin>>j;
		cout<<endl;
	}
}
int choose()
{
	int i;
	cout<<"请选择您的有理数计算内容："<<endl<<endl;
	cout<<"     0.返回主界面；"<<endl;
    cout<<"     1.两个有理数相加；"<<endl;
	cout<<"     2.两个有理数相减；"<<endl;
	cout<<"     3.两个有理数相乘；"<<endl;
	cout<<"     4.两个有理数相除；"<<endl;	
	cout<<"请选择按键(0-4):";
	cin>>i;
	cout<<endl;	
	return i;
}
void rationalcompute()
{	
	int j;
	j=choose();
	while(j)
	{	
		if(j>0 && j<=4)
		{	
			int r1,j1,r2,j2;
			cout<<"请输入第一个有理数的分子：";
			cin>>r1;
			cout<<"请输入第一个有理数的分母：";
			cin>>j1;
			if(j1==0)
			{
				cout<<endl<<"分母不能为零，请重新输入！"<<endl;
				break;
			}
			cout<<"请输入第二个有理数的分子：";
			cin>>r2;
			cout<<"请输入第二个有理数的分母：";
			cin>>j2;
			if(j2==0)
			{
				cout<<endl<<"分母不能为零，请重新输入！"<<endl;
				break;
			}
			rational c1(r1,j1);
			rational c2(r2,j2);
			rational c3;
			switch(j)
			{	
			case 1:
				c3=c1+c2;
				c1.print ();
				cout<<"+";
				c2.print ();
				cout<<"=";
				c3.print ();
				cout<<endl;
				break;
			case 2:
				c3=c1-c2;
				c1.print ();
				cout<<"-";
				c2.print ();
				cout<<"=";
				c3.print ();
				cout<<endl;
				break;
			case 3:
				c3=c1*c2;
				c1.print ();
				cout<<"*";
				c2.print ();
				cout<<"=";
				c3.print ();
				cout<<endl;
				break;
			case 4:
				c1.print ();
				cout<<"/";
				c2.print ();
				cout<<"=";
				c3.print ();
				cout<<endl;
				break;
			}
		}
		else
			cout<<endl<<"按键错误，请重新选择！"<<endl<<endl;
			j=choose();
	}
}
int main()
{
    interface();
    return 0;
}