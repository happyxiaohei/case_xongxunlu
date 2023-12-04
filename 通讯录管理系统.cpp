# include<iostream>
using namespace std;
#include<string>
#define MAX 1000     //�곣��


//�����ϵ�˽ṹ��

struct person
{
	//����
	string m_name;
	//�Ա�      1��   2Ů 
	int m_sex;
	//����
	int m_age;
	//�绰
	string m_phone;
	//סַ
	string m_addr;
};
//���ͨѶ¼�ṹ��

struct addressbooks
{
	//ͨѶ¼�б������ϵ�˵�����
	
	struct person personarray[MAX];
	
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���

	int m_size;
};

//1.�����ϵ��

void addperson(addressbooks* abs)
{

	//�ж�ͨѶ¼�Ƿ�����,������˾Ͳ������

	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼����,�޷����!" << endl;
		return;
	}
	else
	{
		//�����ϵ��

		//����

		string name;
		cout << "����������;  " << endl;
		cin >> name;
		abs->personarray[abs->m_size].m_name = name;


		//�Ա�

		cout << "�������Ա���ʲô:  " << endl;
		cout << "1  ----   ��:  " << endl;
		cout << "2  ----   Ů:  " << endl;

		int sex = 0;

		while (true)  //����������1  ������2     �����˳�ѭ��,    �������,��������
		{
			cin >> sex;

			if (sex == 1 || sex == 2)
			{

				abs->personarray[abs->m_size].m_sex = sex;
				break;

			}
			cout << "��������,����������" << endl;
			
		}



		//����

		cout << "���������� ; " << endl;
		int age = 0;
	
		while (true)
		{
			cin >> age;

			if (age <= 100)
			{
				abs->personarray[abs->m_size].m_age = age;
				break;
			}
			cout << "��������,����������" << endl;
		}

		


		//�绰
		cout << "��������ϵ�绰:  " << endl;
		string phone;
		cin >> phone;
		abs->personarray[abs->m_size].m_phone = phone;

		//סַ
		cout << "�������ͥסַ:  " << endl;
		string address;
		cin >> address;
		abs->personarray[abs->m_size].m_addr = address;

		//����ͨѶ¼����

		abs->m_size++;

		cout << "��ӳɹ�!!!" << endl;

		system("pause");  //  �밴���������
		system("cls");   //��������
	}

}


//2.��ʾ������ϵ��

void showperson(addressbooks* abs)
{

	//�ж�ͨѶ¼�������Ƿ�Ϊ0  �����0,��ʾ��¼Ϊ��
	//�����Ϊ0,��ʾ��¼����ϵ����Ϣ

	if (abs->m_size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)

		{
			cout << "����:  " << abs->personarray[i].m_name << "\t";
			cout << "�Ա�:  " << (abs->personarray[i].m_sex  == 1 ?"��":"Ů" )<< "\t";
			cout << "����:  " << abs->personarray[i].m_age << "\t";
			cout << "�绰:  " << abs->personarray[i].m_phone << "\t";
			cout << "סַ:  " << abs->personarray[i].m_addr << endl;


		}

	}
	system("pause");  //�����������
	system("cls");  //����

}	

//�ж��Ƿ���ڲ�ѯ����Ա    ���ڷ���������������λ��  �����ڷ���-1

int isExist(addressbooks* abs, string name)
{

	for (int i = 0; i < abs->m_size; i++)
	{
		//�ҵ��û������������

		if (abs->personarray[i].m_name == name)
		{
			return i;
		}
	}
	return -1;
}


//3.ɾ����ϵ��

void deleteperson(addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	
	int ret =  isExist (abs, name);
	if (ret != -1)
	{
		//���ҵ���,Ҫ����ɾ������
		for (int i = ret; i < abs->m_size; i++)
		{

			abs->personarray[i] = abs->personarray[i+1];
		}
		abs->m_size--;  //����ͨѶ¼�е���Ա
		cout << "ɾ���ɹ�" << endl;

	}
	else
	{
		cout << "���޴���" << endl;

	}

	system("pause");
	system("cls");

}

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


	int main() 
	{

		//����ͨѶ¼�ṹ�����

		addressbooks abs;

		//��ʼ��ͨѶ¼�е�ǰ��Ա����

		abs.m_size = 0;
		
		//����һ������,���������û���������Ϣ
		
		int select = 0; 





		while (true)  //������
		{
			showMenu();   //��һ��

			cin >> select;

			switch (select)  //�ڶ���
			{
			case 1:   //1.�����ϵ��
				
				addperson(&abs);//���õ�ַ����,��������ʵ��
				
				break;
			case 2:   //2.��ʾ��ϵ��

				showperson(&abs);
				break;
			case 3:  //3.ɾ����ϵ��

				deleteperson(&abs);

				//�·�����ֻΪ�����

		/*	{
				cout << "������ɾ����ϵ������:  " << endl;
				string name;
				cin >> name;

				if (isExist(&abs, name) == -1)
				{
					cout << "���޴���" << endl;

				}
				else
				{
					cout << "�ҵ�����" << endl;
				}
			}*/
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
				
				return 0;
				break;




			default:
				break;
			}
		}

		system("pause");

		return 0;

	}