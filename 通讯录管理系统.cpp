# include<iostream>
using namespace std;
#include<string>


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



int main() {
	int select = 0;  //设置一个变量,用来接收用户的输入信息

	while (true)  //第三步
	{
		showMenu();   //第一步

		cin >> select;

		switch (select)  //第二步
		{
		case 1:   //1.添加联系人

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
		/*	system("cls");*/
			return 0;
			break;




		default:
			break;
		}
	}

	system("pause");

	return 0;

}