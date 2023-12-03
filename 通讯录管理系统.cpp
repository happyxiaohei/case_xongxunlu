# include<iostream>
using namespace std;
#include<string>
#define MAX 1000     //宏常量


//设计联系人结构体

struct person
{
	//姓名
	string m_name;
	//性别      1男   2女 
	int m_sex;
	//年龄
	int m_age;
	//电话
	string m_phone;
	//住址
	string m_addr;
};
//设计通讯录结构体

struct addressbooks
{
	//通讯录中保存的联系人的数组
	
	struct person personarray[MAX];
	
	//通讯录中当前记录联系人个数

	int m_size;
};

//1.添加联系人

void addperson(addressbooks* abs)
{

	//判断通讯录是否已满,如果满了就不在添加

	if (abs->m_size == MAX)
	{
		cout << "通讯录已满,无法添加!" << endl;
		return;
	}
	else
	{
		//添加联系人

		//姓名

		string name;
		cout << "请输入姓名;  " << endl;
		cin >> name;
		abs->personarray[abs->m_size].m_name = name;


		//性别

		cout << "请输入性别是什么:  " << endl;
		cout << "1  ----   男:  " << endl;
		cout << "2  ----   女:  " << endl;

		int sex = 0;

		while (true)  //如果输入的是1  或者是2     可以退出循环,    如果不是,则重新输
		{
			cin >> sex;

			if (sex == 1 || sex == 2)
			{

				abs->personarray[abs->m_size].m_sex = sex;
				break;

			}
			cout << "输入有误,请重新输入" << endl;
		}



		//年龄

		cout << "请输入年龄 ; " << endl;
		int age = 0;
	
		while (true)
		{
			cin >> age;

			if (age <= 100)
			{
				abs->personarray[abs->m_size].m_age = age;
				break;
			}
			cout << "输入有误,请重新输入" << endl;
		}

		


		//电话
		cout << "请输入联系电话:  " << endl;
		string phone;
		cin >> phone;
		abs->personarray[abs->m_size].m_phone = phone;

		//住址
		cout << "请输入家庭住址:  " << endl;
		string address;
		cin >> address;
		abs->personarray[abs->m_size].m_addr = address;

		//更新通讯录人数

		abs->m_size++;

		cout << "添加成功!!!" << endl;

		system("pause");  //  请按任意键继续
		system("cls");   //清屏操作
	}

}





//菜单界面    //第一步
	void showMenu()
	{
		cout << "**********************************\n" << endl;

		cout << "********** 1.添加联系人 **********\n " << endl;

		cout << "********** 2.显示联系人 **********\n " << endl;

		cout << "********** 3.删除联系人 **********\n " << endl;

		cout << "********** 4.查找联系人 **********\n " << endl;

		cout << "********** 5.修改联系人 **********\n " << endl;

		cout << "********** 6.退出联系人 **********\n " << endl;

		cout << "********** 0.清空联系人 **********\n " << endl;

		cout << "**********************************\n" << endl;

	}


	int main() 
	{

		//创建通讯录结构体变脸

		addressbooks abs;

		//初始化通讯录中当前人员个数

		abs.m_size = 0;
		
		//设置一个变量,用来接收用户的输入信息
		
		int select = 0; 





		while (true)  //第三步
		{
			showMenu();   //第一步

			cin >> select;

			switch (select)  //第二步
			{
			case 1:   //1.添加联系人
				
				addperson(&abs);//利用地址传递,可以修饰实参
				
				break;
			case 2:   //2.显示联系人
				break;
			case 3:  //3.删除联系人
				break;
			case 4:  //4.查找联系人
				break;
			case 5:  //5.修改联系人
				break;
			case 6:  //6.退出联系人
				break;
			case 0:  //0.清空联系人

				cout << "欢迎下次使用" << endl;

				system("pause");
				
				return 0;
				break;




			default:
				break;
			}
		}

		system("pause");

		return 0;

	}