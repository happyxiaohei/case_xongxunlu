# include<iostream>
using namespace std;
#include<string>


//�˵�����    //��һ��
void showMenu()   
{
	cout << "**********************************\n" << endl;
	
	cout << "********** 1.�����ϵ�� **********\n " << endl;
	
	cout << "********** 2.��ʾ��ϵ�� **********\n " << endl;
	
	cout << "********** 3.ɾ����ϵ�� **********\n " << endl;
	
	cout << "********** 4.������ϵ�� **********\n " << endl;
	
	cout << "********** 5.�޸���ϵ�� **********\n " << endl;
	
	cout << "********** 6.�˳���ϵ�� **********\n " << endl;
	
	cout << "********** 0.�����ϵ�� **********\n " << endl;
	
	cout << "**********************************\n" << endl;

}



int main() {
	int select = 0;  //����һ������,���������û���������Ϣ

	while (true)  //������
	{
		showMenu();   //��һ��

		cin >> select;

		switch (select)  //�ڶ���
		{
		case 1:   //1.�����ϵ��

			break;
		case 2:   //2.��ʾ��ϵ��
			break;
		case 3:  //3.ɾ����ϵ��
			break;
		case 4:  //4.������ϵ��
			break;
		case 5:  //5.�޸���ϵ��
			break;
		case 6:  //6.�˳���ϵ��
			break;
		case 0:  //0.�����ϵ��

			cout << "��ӭ�´�ʹ��" << endl;

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