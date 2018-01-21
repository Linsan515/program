// �����{���]�p��4���@�~_4102056010_�L���@.cpp : �w�q�D���x���ε{�����i�J�I�C
//
/***************************
4102056010 �L���@ ��4���@�~11/25
***************************/


#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <stdlib.h>
#pragma warning(disable:4996)
using namespace std;

class ccompany
{
public:
	int companynum = 0;
	char companyname[20];
	int initialasset = 0;
	int initialability = 0;
	int recentasset = 0;
	int recentability = 0;
	int recieve = 0;
	int pay = 0;
	char companymodify;
	char companyans;
};

class cproduct
{
public:
	int productnum = 0;
	char* productname[20];
	int* productexpence = new int[productnum];
	int* productmuch = new int[productnum];
	int* productyear = new int[productnum];
	int* productmonth = new int[productnum];
	int* productday = new int[productnum];
	int* productremain = new int[productnum];
	char productchoose;
	char productans;
	int modifynum=0;
	char* modifyname[20];
};

class cemployee
{
public:
	int employeenum = 0;
	char* employeename[20];
	int* employeesalary = new int[employeenum];
	int* employeeyear = new int[employeenum];
	int* employeemonth = new int[employeenum];
	int* employeeday = new int[employeenum];
	char employeechoose;
	char employeeans;
	int modifynum = 0;
	char* modifyname[20];
};

class cmaterial
{
public:
	char* materialname[20];
	int* materialexpence = new int[];
	int* materialmuch = new int[];
	int* materialmatch = new int[];
	int* materialremain = new int[];
	char materialchoose;
	char materialans;
	int modifynum = 0;
	char* modifyname[20];
};

class ccustomers
{
public:
	int customersnum = 0;
	char customersname[20];
	char customerslocation[100];
	int productnum = 0;
	char* productname[20];
	int* productmuch = new int[productnum];
	int* productyear = new int[productnum];
	int* productmonth = new int[productnum];
	int* productday = new int[productnum];
	char* productremain[20];
	char customerschoose;
	char customersmodify;
	char customersans1;
	char customersans;
	int modifynum = 0;
	char* modifyname[20];
};


class cbill
{
public:
	void bill(cproduct p,ccompany c){
		FILE *fp;
		fp = fopen("bill.txt","w");
		if (NULL == fp)
		{
			cout << "�ɮ׵o�Ϳ��~" << endl;
		}
		else
		{
			fprintf(fp, "���q�W��:%s\n", c.companyname);
			fprintf(fp, "���~�W��:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp, "%s ", p.productname[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���~����:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp, "%d ", p.productexpence[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���~�P��:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp, "%d ", p.productmuch[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���~���:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp, "%d/%d/%d ", p.productyear[i], p.productmonth[i], p.productday[i]);
			}
			fprintf(fp, "\n");
			fclose(fp);
		}
	}

};

class cemployeemodule
{
public:
	void module(cemployee e,ccompany c){
		FILE *fp;
		fp = fopen("employee.txt", "a");
		if (NULL == fp)
		{
			cout << "�ɮ׵o�Ϳ��~" << endl;
		}
		else
		{
			fprintf(fp, "���q�W��:%s\n", c.companyname);
			fprintf(fp, "���u�m�W:\n");
			for (int i = 0; i < e.employeenum; i++)
			{
				fprintf(fp, "%s ", e.employeename[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���u�~��:\n");
			for (int i = 0; i < e.employeenum; i++)
			{
				fprintf(fp, "%d ", e.employeesalary[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���u���:\n");
			for (int i = 0; i < e.employeenum; i++)
			{
				fprintf(fp, "%d/%d/%d ", e.employeeyear[i], e.employeemonth[i], e.employeeday[i]);
			}

			fprintf(fp, "\n");
			fclose(fp);
		}
	}


};

class cinformation
{
public:
	void information(ccompany c,cproduct p,cemployee e,cmaterial m){
		FILE *fp;
		fp = fopen("information.txt", "a");
		if (NULL == fp)
		{
			cout << "�ɮ׵o�Ϳ��~" << endl;
		}
		else
		{
			fprintf(fp, "���q�W��:%s\n", c.companyname);
			fprintf(fp, "���~�W��:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp, "%s ", p.productname[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���~����:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp, "%d ", p.productexpence[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���~�P��:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp, "%d ", p.productmuch[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���~���:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp, "%d/%d/%d ", p.productyear[i], p.productmonth[i], p.productday[i]);
			}

			fprintf(fp, "\n");
			fprintf(fp, "���ƦW��:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp, "%s ", m.materialname[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���ƻ���:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp, "%d ", m.materialexpence[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "�����ʶR�q:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp, "%d ", m.materialmuch[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���u�m�W:\n");
			for (int i = 0; i < e.employeenum; i++)
			{
				fprintf(fp, "%s ", e.employeename[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���u�~��:\n");
			for (int i = 0; i < e.employeenum; i++)
			{
				fprintf(fp, "%d ", e.employeesalary[i]);
			}
			fprintf(fp, "\n");
			fprintf(fp, "���u���:\n");
			for (int i = 0; i < e.employeenum; i++)
			{
				fprintf(fp, "%d/%d/%d ", e.employeeyear[i], e.employeemonth[i], e.employeeday[i]);
			}

			fprintf(fp, "\n");

			fprintf(fp, "��l�겣:%d  ��l�t��:%d\n", c.initialability, c.initialasset);
			for (int i = 0; i < p.productnum; i++)
			{
				c.recieve = c.recieve + p.productmuch[i] * p.productexpence[i];
			}
			for (int i = 0; i < e.employeenum; i++)
			{
				c.pay = c.pay + e.employeesalary[i];
			}
			for (int i = 0; i < p.productnum; i++)
			{
				c.pay = c.pay + m.materialmuch[i] * m.materialmuch[i];
			}

			c.recentasset = c.initialasset + c.recieve;
			c.recentability = c.initialability + c.pay;
			fprintf(fp, "�`���J:%d\n", c.recieve);
			fprintf(fp, "�`��X:%d\n", c.pay);
			fprintf(fp, "�`�겣:%d\n", c.recentasset);
			fprintf(fp, "�`�t��:%d\n", c.recentability);
		}
		fclose(fp);
	}

};

class clientsort
{
public:
	ccustomers clientnamesort(ccustomers s){
		char* temp;
		int tmp=0;
		int ty=0;
		int tm=0;
		int td=0;
		for (int i = 0; i < s.productnum-1; i++)
		{
			if (strcmp(s.productname[i],s.productname[i+1])>0)
			{
				temp = s.productname[i];
				s.productname[i] = s.productname[i + 1];
				s.productname[i + 1] = temp;

				tmp = s.productmuch[i];
				s.productmuch[i] = s.productmuch[i + 1];
				s.productmuch[i + 1] = tmp;

				ty = s.productyear[i];
				s.productyear[i] = s.productyear[i + 1];
				s.productyear[i + 1] = ty;

				tm = s.productmonth[i];
				s.productmonth[i] = s.productmonth[i + 1];
				s.productmonth[i + 1] = tm;

				td = s.productday[i];
				s.productday[i] = s.productday[i + 1];
				s.productday[i + 1] = td;
			}
		}
		return s;
	}

	ccustomers clientmuchsort(ccustomers s){
		char* temp;
		int tmp = 0;
		int ty = 0;
		int tm = 0;
		int td = 0;
		for (int i = 0; i < s.productnum - 1; i++)
		{
			if (s.productmuch[i] > s.productmuch[i+1])
			{
				temp = s.productname[i];
				s.productname[i] = s.productname[i + 1];
				s.productname[i + 1] = temp;

				tmp = s.productmuch[i];
				s.productmuch[i] = s.productmuch[i + 1];
				s.productmuch[i + 1] = tmp;

				ty = s.productyear[i];
				s.productyear[i] = s.productyear[i + 1];
				s.productyear[i + 1] = ty;

				tm = s.productmonth[i];
				s.productmonth[i] = s.productmonth[i + 1];
				s.productmonth[i + 1] = tm;

				td = s.productday[i];
				s.productday[i] = s.productday[i + 1];
				s.productday[i + 1] = td;
			}
		}
		return s;
	}

	ccustomers clientdatesort(ccustomers s){
		char* temp;
		int tmp = 0;
		int ty = 0;
		int tm = 0;
		int td = 0;
		for (int i = 0; i < s.productnum - 1; i++)
		{
			if (s.productyear[i] > s.productyear[i+1])
			{
				temp = s.productname[i];
				s.productname[i] = s.productname[i + 1];
				s.productname[i + 1] = temp;

				tmp = s.productmuch[i];
				s.productmuch[i] = s.productmuch[i + 1];
				s.productmuch[i + 1] = tmp;

				ty = s.productyear[i];
				s.productyear[i] = s.productyear[i + 1];
				s.productyear[i + 1] = ty;

				tm = s.productmonth[i];
				s.productmonth[i] = s.productmonth[i + 1];
				s.productmonth[i + 1] = tm;

				td = s.productday[i];
				s.productday[i] = s.productday[i + 1];
				s.productday[i + 1] = td;
			}
			else if (s.productyear[i] == s.productyear[i+1])
			{
				if (s.productmonth[i] > s.productmonth[i+1])
				{
					temp = s.productname[i];
					s.productname[i] = s.productname[i + 1];
					s.productname[i + 1] = temp;

					tmp = s.productmuch[i];
					s.productmuch[i] = s.productmuch[i + 1];
					s.productmuch[i + 1] = tmp;

					ty = s.productyear[i];
					s.productyear[i] = s.productyear[i + 1];
					s.productyear[i + 1] = ty;

					tm = s.productmonth[i];
					s.productmonth[i] = s.productmonth[i + 1];
					s.productmonth[i + 1] = tm;

					td = s.productday[i];
					s.productday[i] = s.productday[i + 1];
					s.productday[i + 1] = td;
				}
				else if (s.productmonth[i] == s.productmonth[i+1])
				{
					if (s.productday[i] > s.productday[i+1])
					{
						temp = s.productname[i];
						s.productname[i] = s.productname[i + 1];
						s.productname[i + 1] = temp;

						tmp = s.productmuch[i];
						s.productmuch[i] = s.productmuch[i + 1];
						s.productmuch[i + 1] = tmp;

						ty = s.productyear[i];
						s.productyear[i] = s.productyear[i + 1];
						s.productyear[i + 1] = ty;

						tm = s.productmonth[i];
						s.productmonth[i] = s.productmonth[i + 1];
						s.productmonth[i + 1] = tm;

						td = s.productday[i];
						s.productday[i] = s.productday[i + 1];
						s.productday[i + 1] = td;
					}
				}
			}
		}
		return s;
	}

};

class cclient
{
public:
	clientsort cls;
	void client(ccustomers s,cproduct p){
		cout << "�ثe���Ȥ�Ҧ�" << endl;
		cout << "�п�J�Ȥ�ƶq" << endl;
		cin >> s.customersnum;
		while (s.customersnum > 0)
		{
			s.customersnum = s.customersnum - 1;
			cout << "�п�J�Ȥ�W�r" << endl;
			cin.ignore();
			cin.getline(s.customersname, 20);
			cout << "�п�J�Ȥ�a�}" << endl;
			cin.getline(s.customerslocation, 100);
			cout << "�аݦ��n���ק��(y/n)" << endl;
			cin >> s.customersans1;
			switch (s.customersans1)
			{
			case'y':
				do
				{
					cout << "�аݻݭn�ק諸����(1.�Ȥ�W��/2.�Ȥ�a�}/3.���})" << endl;
					cin >> s.customersmodify;
					switch (s.customersmodify)
					{
					case'1':
						cout << "�Э��s��J�Ȥ�W��" << endl;
						cin.ignore();
						cin.getline(s.customersname, 20);
						break;
					case'2':
						cout << "�Э��s��J�Ȥ�a�}" << endl;
						cin.getline(s.customerslocation, 100);
						break;
					default:
						break;
					}
				} while (s.customersmodify != '3');
				break;
			case 'n':
				break;
			default:
				cout << "��J���~" << endl;
				break;
			}

			cout << "�п�J�ʶR�����~�����ƶq" << endl;
			cin >> s.productnum;
			for (int i = 0; i < s.productnum; i++)
			{
				cout << "�п�J�ʶR�����~�W��" << endl;
				s.productname[i] = new char[20];
				cin.ignore();
				cin.getline(s.productname[i], 20);
				cout << "�п�J�ʶR�����~�ƶq" << endl;
				cin >> s.productmuch[i];
				cout << "�п�J�w���e�F�����~�~��" << endl;
				cin >> s.productyear[i];
				cout << "�п�J�w���e�F�����~���" << endl;
				cin >> s.productmonth[i];
				cout << "�п�J�w���e�F�����~��l" << endl;
				cin >> s.productday[i];
			}

			cout << "�аݦ��n���ק��(y/n)" << endl;
			cin >> s.customersans;
			switch (s.customersans)
			{
			case'y':
				cout << "�п�J�ק蠟�ʶR���~�ƶq" << endl;
				cin >> s.modifynum;
				for (int i = 0; i < s.modifynum; i++)
				{
					cout << "�п�J���ק蠟�ʶR���~�W��" << endl;
					s.modifyname[i] = new char[20];
					cin.ignore();
					cin.getline(s.modifyname[i], 20);
				}
				for (int i = 0; i < s.modifynum; i++)
				{
					for (int j = 0; j < s.productnum; j++)
					{
						if (strcmp(s.modifyname[i], s.productname[j]) == 0)
						{
							cout << "�Э��s��J�ʶR�����~�W��" << endl;
							s.productname[j] = new char[20];
							cin.getline(s.productname[j], 20);
							cout << "�Э��s��J�ʶR�����~�ƶq" << endl;
							cin >> s.productmuch[j];
							cout << "�Э��s��J�w���e�F�����~�~��" << endl;
							cin >> s.productyear[j];
							cout << "�Э��s��J�w���e�F�����~���" << endl;
							cin >> s.productmonth[j];
							cout << "�Э��s��J�w���e�F�����~��l" << endl;
							cin >> s.productday[j];
						}
					}
				}
				break;
			case 'n':
				break;
			default:
				cout << "��J���~" << endl;
				break;
			}

			for (int i = 0; i < s.productnum; i++)
			{
				for (int j = 0; j < p.productnum; j++)
				{
					if (strcmp(s.productname[i], p.productname[j]) == 0)
					{
						if (s.productmuch[i] > p.productremain[j])
						{
							s.productremain[i] = new char[20];
							s.productremain[i] ="���~����";
						}
						else
						{
							s.productremain[i] = new char[20];
							s.productremain[i] = "���~����";
						}
					}
				}
			}
			cout << "�аݷQ�n�H���򰵱Ƨ�(1.���~�W��/2.���~�ƶq/3.�e�F���/4.�L)" << endl;
			cin >> s.customerschoose;
			switch (s.customerschoose)
			{
			case '1':
				s = cls.clientnamesort(s);
				break;
			case '2':
				s = cls.clientmuchsort(s);
				break;
			case '3':
				s = cls.clientdatesort(s);
				break;
			case '4':
				break;
			default:
				cout << "��J���~" << endl;
				system("pause");
				break;
			}
			
			FILE *fp;
			fp = fopen("client.txt", "a");
			if (NULL == fp)
			{
				cout << "�ɮ׵o�Ϳ��~" << endl;
			}
			else
			{
				fprintf(fp, "�Ȥ�W��:%s\n", s.customersname);
				fprintf(fp, "�Ȥ�a�}:\n");
				fprintf(fp, "%s\n", s.customerslocation);
				fclose(fp);
			}

			fp = fopen("order.txt", "a");
			if (NULL == fp)
			{
				cout << "�ɮ׵o�Ϳ��~" << endl;
			}
			else
			{
				fprintf(fp, "�Ȥ�W��:%s\n", s.customersname);
				fprintf(fp, "�Ȥ�a�}:\n");
				fprintf(fp, "%s\n", s.customerslocation);
				fprintf(fp, "�ʶR�����~�W��:\n");
				for (int i = 0; i < s.productnum; i++)
				{
					fprintf(fp, "%s ", s.productname[i]);
				}
				fprintf(fp, "\n");
				fprintf(fp, "�ʶR�����~�ƶq:\n");
				for (int i = 0; i < s.productnum; i++)
				{
					fprintf(fp, "%d ", s.productmuch[i]);
				}
				fprintf(fp, "\n");
				fprintf(fp, "�ʶR�����~�w�w��F���:\n");
				for (int i = 0; i < s.productnum; i++)
				{
					fprintf(fp, "%d/%d/%d ", s.productyear[i], s.productmonth[i], s.productday[i]);
				}
				fprintf(fp, "\n");
				fprintf(fp, "�ʶR�����~�O�_����:\n");
				for (int i = 0; i < s.productnum; i++)
				{
					fprintf(fp, "%s ", s.productremain[i]);
				}
				fprintf(fp, "\n");
				fclose(fp);
			}
		}
		
	}
		 


};

class cinventory
{
public:
	void inventory(cproduct p,cmaterial m){
		for (int i = 0; i < p.productnum; i++)
		{
			p.productremain[i] = p.productmuch[i]+(m.materialmuch[i] / m.materialmatch[i]);
			m.materialremain[i] = m.materialmuch[i] % m.materialmatch[i];
		}
		FILE *fp1;
		fp1 = fopen("inventory.txt", "a+");
		if (NULL == fp1)
		{
			cout << "�ɮ׵o�Ϳ��~" << endl;
		}
		else
		{
			fprintf(fp1, "���~�W��:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp1,"%s ",p.productname[i]);
			}
			fprintf(fp1, "\n");
			fprintf(fp1, "���~�ƶq:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp1, "%d ", p.productmuch[i]);
			}
			fprintf(fp1, "\n");
			fprintf(fp1, "��Ƽƶq:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp1, "%d ", m.materialmuch[i]);
			}
			fprintf(fp1, "\n");
			fprintf(fp1, "�@���~�һݤ���Ƽ�:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp1, "%d ", m.materialmatch[i]);
			}
			fprintf(fp1, "\n");
			fprintf(fp1, "�i�s�������~�ƶq:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp1, "%d ", p.productremain[i]);
			}
			fprintf(fp1, "\n");
			fprintf(fp1, "�̫�Ѿl����Ƽƶq:\n");
			for (int i = 0; i < p.productnum; i++)
			{
				fprintf(fp1, "%d ", m.materialremain[i]);
			}
			fprintf(fp1, "\n");
			fclose(fp1);
		}
		

	}



};

class cproductsort
{
public:
	cproduct productnamesort(cproduct p){
		char* temp;
		int tmp = 0;
		int tp = 0;
		int ty = 0;
		int tm = 0;
		int td = 0;
		for (int i = 0 ; i < p.productnum-1; i++)
		{
			if (strcmp(p.productname[i],p.productname[i+1])>0)
			{
					temp = p.productname[i];
					p.productname[i] = p.productname[i + 1];
					p.productname[i + 1] = temp;

					tmp = p.productexpence[i];
					p.productexpence[i] = p.productexpence[i + 1];
					p.productexpence[i + 1] = tmp;

					tp = p.productmuch[i];
					p.productmuch[i] = p.productmuch[i + 1];
					p.productmuch[i + 1] = tp;

					ty = p.productyear[i];
					p.productyear[i] = p.productyear[i + 1];
					p.productyear[i + 1] = ty;

					tm = p.productmonth[i];
					p.productmonth[i] = p.productmonth[i + 1];
					p.productmonth[i + 1] = tm;

					td = p.productday[i];
					p.productday[i] = p.productday[i + 1];
					p.productday[i + 1] = td;
			}
		}
		return p;
	}
	cproduct productexpencesort(cproduct p){
		char* temp;
		int tmp = 0;
		int tp = 0;
		int ty = 0;
		int tm = 0;
		int td = 0;
		for (int i = 0; i < p.productnum-1; i++)
		{
			if (p.productexpence[i] > p.productexpence[i+1])
			{
				temp = p.productname[i];
				p.productname[i] = p.productname[i + 1];
				p.productname[i + 1] = temp;

				tmp = p.productexpence[i];
				p.productexpence[i] = p.productexpence[i + 1];
				p.productexpence[i + 1] = tmp;

				tp = p.productmuch[i];
				p.productmuch[i] = p.productmuch[i + 1];
				p.productmuch[i + 1] = tp;

				ty = p.productyear[i];
				p.productyear[i] = p.productyear[i + 1];
				p.productyear[i + 1] = ty;

				tm = p.productmonth[i];
				p.productmonth[i] = p.productmonth[i + 1];
				p.productmonth[i + 1] = tm;

				td = p.productday[i];
				p.productday[i] = p.productday[i + 1];
				p.productday[i + 1] = td;
			}
		}
		return p;
	}

	cproduct productmuch(cproduct p){
		char* temp;
		int tmp = 0;
		int tp = 0;
		int ty = 0;
		int tm = 0;
		int td = 0;
		for (int i = 0; i < p.productnum - 1; i++)
		{
			if (p.productmuch[i] > p.productmuch[i + 1])
			{
				temp = p.productname[i];
				p.productname[i] = p.productname[i + 1];
				p.productname[i + 1] = temp;

				tmp = p.productexpence[i];
				p.productexpence[i] = p.productexpence[i + 1];
				p.productexpence[i + 1] = tmp;

				tp = p.productmuch[i];
				p.productmuch[i] = p.productmuch[i + 1];
				p.productmuch[i + 1] = tp;

				ty = p.productyear[i];
				p.productyear[i] = p.productyear[i + 1];
				p.productyear[i + 1] = ty;

				tm = p.productmonth[i];
				p.productmonth[i] = p.productmonth[i + 1];
				p.productmonth[i + 1] = tm;

				td = p.productday[i];
				p.productday[i] = p.productday[i + 1];
				p.productday[i + 1] = td;
			}
		}
		return p;
	}

	cproduct productdate(cproduct p){
		char* temp;
		int tmp = 0;
		int tp = 0;
		int ty = 0;
		int tm = 0;
		int td = 0;
		for (int i = 0; i < p.productnum-1; i++)
		{
			if (p.productyear[i] > p.productyear[i+1])
			{
				temp = p.productname[i];
				p.productname[i] = p.productname[i + 1];
				p.productname[i + 1] = temp;

				tmp = p.productexpence[i];
				p.productexpence[i] = p.productexpence[i + 1];
				p.productexpence[i + 1] = tmp;

				tp = p.productmuch[i];
				p.productmuch[i] = p.productmuch[i + 1];
				p.productmuch[i + 1] = tp;

				ty = p.productyear[i];
				p.productyear[i] = p.productyear[i + 1];
				p.productyear[i + 1] = ty;

				tm = p.productmonth[i];
				p.productmonth[i] = p.productmonth[i + 1];
				p.productmonth[i + 1] = tm;

				td = p.productday[i];
				p.productday[i] = p.productday[i + 1];
				p.productday[i + 1] = td;
			}
			else if (p.productyear[i] == p.productyear[i + 1])
			{
				if (p.productmonth[i] > p.productmonth[i+1])
				{
					temp = p.productname[i];
					p.productname[i] = p.productname[i + 1];
					p.productname[i + 1] = temp;

					tmp = p.productexpence[i];
					p.productexpence[i] = p.productexpence[i + 1];
					p.productexpence[i + 1] = tmp;

					tp = p.productmuch[i];
					p.productmuch[i] = p.productmuch[i + 1];
					p.productmuch[i + 1] = tp;

					ty = p.productyear[i];
					p.productyear[i] = p.productyear[i + 1];
					p.productyear[i + 1] = ty;

					tm = p.productmonth[i];
					p.productmonth[i] = p.productmonth[i + 1];
					p.productmonth[i + 1] = tm;

					td = p.productday[i];
					p.productday[i] = p.productday[i + 1];
					p.productday[i + 1] = td;
				}
				else if (p.productmonth[i] == p.productmonth[i + 1])
				{
					if (p.productday[i] > p.productday[i+1])
					{
						temp = p.productname[i];
						p.productname[i] = p.productname[i + 1];
						p.productname[i + 1] = temp;

						tmp = p.productexpence[i];
						p.productexpence[i] = p.productexpence[i + 1];
						p.productexpence[i + 1] = tmp;

						tp = p.productmuch[i];
						p.productmuch[i] = p.productmuch[i + 1];
						p.productmuch[i + 1] = tp;

						ty = p.productyear[i];
						p.productyear[i] = p.productyear[i + 1];
						p.productyear[i + 1] = ty;

						tm = p.productmonth[i];
						p.productmonth[i] = p.productmonth[i + 1];
						p.productmonth[i + 1] = tm;

						td = p.productday[i];
						p.productday[i] = p.productday[i + 1];
						p.productday[i + 1] = td;
					}

				}

			}
		}
		return p;
	}

};

class cmaterialsort
{
public:
	cmaterial materialnamesort(cmaterial m,cproduct p){
		char* temp;
		int tmp = 0;
		int tp = 0;
		int ty = 0;
		for (int i = 0; i <  p.productnum- 1; i++)
		{
			if (strcmp(m.materialname[i], m.materialname[i + 1])>0)
			{
				temp = m.materialname[i];
				m.materialname[i] = m.materialname[i + 1];
				m.materialname[i + 1] = temp;

				tmp = m.materialexpence[i];
				m.materialexpence[i] = m.materialexpence[i + 1];
				m.materialexpence[i + 1] = tmp;

				tp = m.materialmuch[i];
				m.materialmuch[i] = m.materialmuch[i + 1];
				m.materialmuch[i + 1] = tp;

				ty = m.materialmatch[i];
				m.materialmatch[i] = m.materialmatch[i + 1];
				m.materialmatch[i + 1] = ty;
			}
		}
		return m;
	}

	cmaterial materialexpencesort(cmaterial m, cproduct p){
		char* temp;
		int tmp = 0;
		int tp = 0;
		int ty = 0;
		for (int i = 0; i < p.productnum - 1; i++)
		{
			if (m.materialexpence[i] > m.materialexpence[i+1])
			{
				temp = m.materialname[i];
				m.materialname[i] = m.materialname[i + 1];
				m.materialname[i + 1] = temp;

				tmp = m.materialexpence[i];
				m.materialexpence[i] = m.materialexpence[i + 1];
				m.materialexpence[i + 1] = tmp;

				tp = m.materialmuch[i];
				m.materialmuch[i] = m.materialmuch[i + 1];
				m.materialmuch[i + 1] = tp;

				ty = m.materialmatch[i];
				m.materialmatch[i] = m.materialmatch[i + 1];
				m.materialmatch[i + 1] = ty;
			}
		}
		return m;
	}

	cmaterial materialmuchsort(cmaterial m,cproduct p){
		char* temp;
		int tmp = 0;
		int tp = 0;
		int ty = 0;
		for (int i = 0; i < p.productnum - 1; i++)
		{
			if (m.materialmuch[i] > m.materialmuch[i + 1])
			{
				temp = m.materialname[i];
				m.materialname[i] = m.materialname[i + 1];
				m.materialname[i + 1] = temp;

				tmp = m.materialexpence[i];
				m.materialexpence[i] = m.materialexpence[i + 1];
				m.materialexpence[i + 1] = tmp;

				tp = m.materialmuch[i];
				m.materialmuch[i] = m.materialmuch[i + 1];
				m.materialmuch[i + 1] = tp;

				ty = m.materialmatch[i];
				m.materialmatch[i] = m.materialmatch[i + 1];
				m.materialmatch[i + 1] = ty;
			}
		}
		return m;
	}

	cmaterial materialmatchsort(cmaterial m,cproduct p){
		char* temp;
		int tmp = 0;
		int tp = 0;
		int ty = 0;
		for (int i = 0; i < p.productnum - 1; i++)
		{
			if (m.materialmuch[i] > m.materialmuch[i + 1])
			{
				temp = m.materialname[i];
				m.materialname[i] = m.materialname[i + 1];
				m.materialname[i + 1] = temp;

				tmp = m.materialexpence[i];
				m.materialexpence[i] = m.materialexpence[i + 1];
				m.materialexpence[i + 1] = tmp;

				tp = m.materialmuch[i];
				m.materialmuch[i] = m.materialmuch[i + 1];
				m.materialmuch[i + 1] = tp;

				ty = m.materialmatch[i];
				m.materialmatch[i] = m.materialmatch[i + 1];
				m.materialmatch[i + 1] = ty;
			}
		}
		return m;
	}

};

class cemployeesort
{
public:
	cemployee employeenamesort(cemployee e){
		char* temp;
		int tmp = 0;
		int tp = 0;
		int ty = 0;
		int tm = 0;
		for (int i = 0; i < e.employeenum - 1; i++)
		{
			if (strcmp(e.employeename[i], e.employeename[i + 1])>0)
			{
				temp = e.employeename[i];
				e.employeename[i] = e.employeename[i + 1];
				e.employeename[i + 1] = temp;

				tmp = e.employeesalary[i];
				e.employeesalary[i] = e.employeesalary[i + 1];
				e.employeesalary[i + 1] = tmp;

				tp = e.employeeyear[i];
				e.employeeyear[i] = e.employeeyear[i + 1];
				e.employeeyear[i + 1] = tp;

				ty = e.employeemonth[i];
				e.employeemonth[i] = e.employeemonth[i + 1];
				e.employeemonth[i + 1] = ty;

				tm = e.employeeday[i];
				e.employeeday[i] = e.employeeday[i + 1];
				e.employeeday[i + 1] = tm;
			}
		}
		return e;
	}

	cemployee employeesalarysort(cemployee e){
		char* temp;
		int tmp = 0;
		int tp = 0;
		int ty = 0;
		int tm = 0;
		for (int i = 0; i < e.employeenum - 1; i++)
		{
			if (e.employeesalary[i] > e.employeesalary[i+1])
			{
				temp = e.employeename[i];
				e.employeename[i] = e.employeename[i + 1];
				e.employeename[i + 1] = temp;

				tmp = e.employeesalary[i];
				e.employeesalary[i] = e.employeesalary[i + 1];
				e.employeesalary[i + 1] = tmp;

				tp = e.employeeyear[i];
				e.employeeyear[i] = e.employeeyear[i + 1];
				e.employeeyear[i + 1] = tp;

				ty = e.employeemonth[i];
				e.employeemonth[i] = e.employeemonth[i + 1];
				e.employeemonth[i + 1] = ty;

				tm = e.employeeday[i];
				e.employeeday[i] = e.employeeday[i + 1];
				e.employeeday[i + 1] = tm;
			}
		}
		return e;
	}

	cemployee employeedatesort(cemployee e){
		char* temp;
		int tmp = 0;
		int tp = 0;
		int ty = 0;
		int tm = 0;
		for (int i = 0; i <e.employeenum; i++)
		{
			if (e.employeeyear[i] > e.employeeyear[i+1])
			{
				temp = e.employeename[i];
				e.employeename[i] = e.employeename[i + 1];
				e.employeename[i + 1] = temp;

				tmp = e.employeesalary[i];
				e.employeesalary[i] = e.employeesalary[i + 1];
				e.employeesalary[i + 1] = tmp;

				tp = e.employeeyear[i];
				e.employeeyear[i] = e.employeeyear[i + 1];
				e.employeeyear[i + 1] = tp;

				ty = e.employeemonth[i];
				e.employeemonth[i] = e.employeemonth[i + 1];
				e.employeemonth[i + 1] = ty;

				tm = e.employeeday[i];
				e.employeeday[i] = e.employeeday[i + 1];
				e.employeeday[i + 1] = tm;
			}
			else if (e.employeeyear[i] == e.employeeyear[i+1])
			{
				if (e.employeemonth[i] > e.employeemonth[i+1])
				{
					temp = e.employeename[i];
					e.employeename[i] = e.employeename[i + 1];
					e.employeename[i + 1] = temp;

					tmp = e.employeesalary[i];
					e.employeesalary[i] = e.employeesalary[i + 1];
					e.employeesalary[i + 1] = tmp;

					tp = e.employeeyear[i];
					e.employeeyear[i] = e.employeeyear[i + 1];
					e.employeeyear[i + 1] = tp;

					ty = e.employeemonth[i];
					e.employeemonth[i] = e.employeemonth[i + 1];
					e.employeemonth[i + 1] = ty;

					tm = e.employeeday[i];
					e.employeeday[i] = e.employeeday[i + 1];
					e.employeeday[i + 1] = tm;
				}
				else if (e.employeemonth[i] == e.employeemonth[i + 1])
				{
					if (e.employeeday[i] > e.employeeday[i+1])
					{
						temp = e.employeename[i];
						e.employeename[i] = e.employeename[i + 1];
						e.employeename[i + 1] = temp;

						tmp = e.employeesalary[i];
						e.employeesalary[i] = e.employeesalary[i + 1];
						e.employeesalary[i + 1] = tmp;

						tp = e.employeeyear[i];
						e.employeeyear[i] = e.employeeyear[i + 1];
						e.employeeyear[i + 1] = tp;

						ty = e.employeemonth[i];
						e.employeemonth[i] = e.employeemonth[i + 1];
						e.employeemonth[i + 1] = ty;

						tm = e.employeeday[i];
						e.employeeday[i] = e.employeeday[i + 1];
						e.employeeday[i + 1] = tm;
					}
				}
			}
		}
		return e;
	}
};


class main
{
public:
	ccompany c;
	cproduct p;
	cemployee e;
	cmaterial m;
	ccustomers s;
	cbill b;
	cemployeemodule em;
	cinformation cf;
	cclient cl;
	cinventory ci;
	cproductsort cps;
	cmaterialsort cms;
	cemployeesort ces;

	void io(){
		cout << "�w��ϥη|�p�t��" << endl;
		cout << "�ثe�����q�Ҧ�" << endl;
		cout << "�`�N:�C�Ӫ��󦳨�۹�����(�@�Ӳ��~�u��Ѥ@�ح�ƻs��)" << endl;
		cout << "�п�J���q�ƶq" << endl;
		cin >> c.companynum;
	
		while (c.companynum > 0)
		{
			c.companynum = c.companynum - 1;
			cout << "�п�J���q�W��" << endl;
			cin.ignore();
			cin.getline(c.companyname, 20);
			cout << "�п�J���q��l�겣" << endl;
			cin >> c.initialasset;
			cout << "�п�J���q��l�t��" << endl;
			cin >> c.initialability;
			cout << "�аݦ��n���ק��(y/n)" << endl;
			cin >> c.companyans;
			switch (c.companyans)
			{
			case'y':
				do
				{
					cout << "�аݻݭn�ק諸����(1.���q�W��/2.���q��l�겣/3.���q��l�t��/4.���})" << endl;
					cin >> c.companymodify;
					switch (c.companymodify)
					{
					case'1':
						cout << "�Э��s��J���q�W��" << endl;
						cin.ignore();
						cin.getline(c.companyname, 20);
						break;
					case'2':
						cout << "�Э��s��J���q��l�겣" << endl;
						cin >> c.initialasset;
						break;
					case'3':
						cout << "�Э��s��J���q��l�t��" << endl;
						cin >> c.initialability;
						break;
					default:
						break;
					}
				} while (c.companymodify != '4');
				break;
			case 'n':
				break;
			default:
				cout << "��J���~" << endl;
				break;
			}
			cout << "�п�J���~�����Ӽ�" << endl;
			cin >> p.productnum;
			for (int i = 0; i < p.productnum; i++)
			{
				cout << "�п�J���~�W��" << endl;
				p.productname[i] = new char[20];
				cin.ignore();
				cin.getline(p.productname[i], 20);
				cout << "�п�J���~����" << endl;
				cin >> p.productexpence[i];
				cout << "�п�J���~�ƶq" << endl;
				cin >> p.productmuch[i];
				cout << "�п�J���~�~��" << endl;
				cin >> p.productyear[i];
				cout << "�п�J���~���" << endl;
				cin >> p.productmonth[i];
				cout << "�п�J���~��l" << endl;
				cin >> p.productday[i];
			}
			cout << "�аݦ��n���ק��(y/n)" << endl;
			cin >> p.productans;
			switch (p.productans)
			{
			case'y':
				cout << "�п�J�ק蠟���~�ƶq" << endl;
				cin >> p.modifynum;
				for (int i = 0; i < p.modifynum; i++)
				{
					cout << "�п�J���ק蠟���~�W��" << endl;
					p.modifyname[i] = new char[20];
					cin.ignore();
					cin.getline(p.modifyname[i], 20);
				}
				for (int i = 0; i < p.modifynum; i++)
				{
					for (int j = 0; j < p.productnum; j++)
					{
						if (strcmp(p.modifyname[i],p.productname[j]) == 0)
						{
							cout << "�Э��s��J���~�W��" << endl;
							p.productname[j] = new char[20];
							cin.getline(p.productname[j], 20);
							cout << "�Э��s��J���~����" << endl;
							cin >> p.productexpence[j];
							cout << "�Э��s��J���~�ƶq" << endl;
							cin >> p.productmuch[j];
							cout << "�Э��s��J���~�~��" << endl;
							cin >> p.productyear[j];
							cout << "�Э��s��J���~���" << endl;
							cin >> p.productmonth[j];
							cout << "�Э��s��J���~��l" << endl;
							cin >> p.productday[j];
						}
					}
				}
				break;
			case 'n':
				break;
			default:
				cout << "��J���~" << endl;
				break;
			}

			cout << "�аݷQ�n�H���򰵱Ƨ�(1.�W��/2.����/3.�ƶq/4.���/5.�L)" << endl;
			cin >> p.productchoose;
			switch (p.productchoose)
			{
			case '1':
				p = cps.productnamesort(p);
				break;
			case '2':
				p = cps.productexpencesort(p);
				break;
			case '3':
				p = cps.productmuch(p);
				break;
			case '4':
				p = cps.productdate(p);
				break;
			case '5':
				break;
			default:
				cout << "��J���~" << endl;
				break;
			}

			for (int i = 0; i < p.productnum; i++)
			{
				cout << "�п�J���ƦW��" << endl;
				m.materialname[i] = new char[20];
				cin.ignore();
				cin.getline(m.materialname[i], 20);
				cout << "�п�J���ƻ���" << endl;
				cin >> m.materialexpence[i];
				cout << "�п�J�����ʶR�q" << endl;
				cin >> m.materialmuch[i];
				cout << "�п�J�@�Ӳ��~�һݤ����Ƽ�" << endl;
				cin >> m.materialmatch[i];
			}

			cout << "�аݦ��n���ק��(y/n)" << endl;
			cin >> m.materialans;
			switch (m.materialans)
			{
			case'y':
				cout << "�п�J�ק蠟���~�ƶq" << endl;
				cin >> m.modifynum;
				for (int i = 0; i < m.modifynum; i++)
				{
					cout << "�п�J���ק蠟���~�W��" << endl;
					m.modifyname[i] = new char[20];
					cin.ignore();
					cin.getline(m.modifyname[i], 20);
				}
				for (int i = 0; i < m.modifynum; i++)
				{
					for (int j = 0; j < p.productnum; j++)
					{
						if (strcmp(m.modifyname[i], m.materialname[j]) == 0)
						{
							cout << "�Э��s��J���ƦW��" << endl;
							m.materialname[j] = new char[20];
							cin.getline(m.materialname[j], 20);
							cout << "�Э��s��J���ƻ���" << endl;
							cin >> m.materialexpence[j];
							cout << "�Э��s��J�����ʶR�q" << endl;
							cin >> m.materialmuch[j];
							cout << "�Э��s��J�@�Ӳ��~�һݤ����Ƽ�" << endl;
							cin >> m.materialmatch[j];
						}
					}
				}
				break;
			case 'n':
				break;
			default:
				cout << "��J���~" << endl;
				break;
			}

			cout << "�аݷQ�n�H���򰵱Ƨ�(1.�W��/2.����/3.�ƶq/4.�������Ƽ�/5.�L)" << endl;
			cin >> m.materialchoose;
			switch (m.materialchoose)
			{
			case '1':
				m = cms.materialnamesort(m,p);
				break;
			case '2':
				m = cms.materialexpencesort(m, p);
				break;
			case '3':
				m = cms.materialmuchsort(m, p);
				break;
			case '4':
				m = cms.materialmatchsort(m, p);
				break;
			case '5':
				break;
			default:
				cout << "��J���~" << endl;
				break;
			}

			cout << "�п�J���u�ƶq" << endl;
			cin >> e.employeenum;
			for (int i = 0; i < e.employeenum; i++)
			{
				cout << "�п�J���u�m�W" << endl;
				e.employeename[i] = new char[20];
				cin.ignore();
				cin.getline(e.employeename[i], 20);
				cout << "�п�J���u�~��" << endl;
				cin >> e.employeesalary[i];
				cout << "�п�J���u�~��" << endl;
				cin >> e.employeeyear[i];
				cout << "�п�J���u���" << endl;
				cin >> e.employeemonth[i];
				cout << "�п�J���u��l" << endl;
				cin >> e.employeeday[i];

			}

			cout << "�аݦ��n���ק��(y/n)" << endl;
			cin >> e.employeeans;
			switch (e.employeeans)
			{
			case'y':
				cout << "�п�J�ק蠟���~�ƶq" << endl;
				cin >> e.modifynum;
				for (int i = 0; i < e.modifynum; i++)
				{
					cout << "�п�J���ק蠟���~�W��" << endl;
					e.modifyname[i] = new char[20];
					cin.ignore();
					cin.getline(e.modifyname[i], 20);
				}
				for (int i = 0; i < e.modifynum; i++)
				{
					for (int j = 0; j < e.employeenum; j++)
					{
						if (strcmp(p.modifyname[i], p.productname[j]) == 0)
						{
							cout << "�Э��s��J���u�m�W" << endl;
							e.employeename[j] = new char[20];
							cin.getline(e.employeename[j], 20);
							cout << "�Э��s��J���u�~��" << endl;
							cin >> e.employeesalary[j];
							cout << "�Э��s��J���u�~��" << endl;
							cin >> e.employeeyear[j];
							cout << "�Э��s��J���u���" << endl;
							cin >> e.employeemonth[j];
							cout << "�Э��s��J���u��l" << endl;
							cin >> e.employeeday[j];
						}
					}
				}
				break;
			case 'n':
				break;
			default:
				cout << "��J���~" << endl;
				break;
			}

			cout << "�аݷQ�n�H���򰵱Ƨ�(1.�W��/2.�~��/3.���/4.�L)" << endl;
			cin >> e.employeechoose;
			switch (e.employeechoose)
			{
			case '1':
				e = ces.employeenamesort(e);
				break;
			case '2':
				e = ces.employeesalarysort(e);
				break;
			case '3':
				e = ces.employeedatesort(e);
				break;
			case '4':
				break;
			default:
				cout << "��J���~" << endl;
				break;
			}

			b.bill(p,c);
			em.module(e,c);
			cf.information(c, p, e, m);
			ci.inventory(p, m);

			

			cout << endl;
			char* plist = new char[100];
			ifstream infile("bill.txt");
			while (infile)
			{

				infile.getline(plist, 100);
				cout << plist << endl;
			}

			cl.client(s,p);
			

			char temp[100];
			char ans;
			do
			{
				cout << "�аݻݭn��ܤ�����?" << endl;
				cout << "1.(information)/2.(bill)/3.(inventory)/4.(order)/5.(customers)/6.(employee)/7.(exit)" << endl;
				cin >> ans;
				switch (ans)
				{
				case'1':
					FILE *fp;
					fp = fopen("information.txt", "r");
					if (NULL == fp)
					{
						cout << "�ɮ׵o�Ϳ��~";
					}
					else
					{
						while (fgets(temp,100,fp) != NULL)
						{
							cout << temp;
						}
						fclose(fp);
					}
					break;
				case'2':
					fp = fopen("bill.txt", "r");
					if (NULL == fp)
					{
						cout << "�ɮ׵o�Ϳ��~";
					}
					else
					{
						while (fgets(temp, 100, fp) != NULL)
						{
							cout << temp;
						}
						fclose(fp);
					}
					break;
				case '3':
					fp = fopen("inventory.txt", "r");
					if (NULL == fp)
					{
						cout << "�ɮ׵o�Ϳ��~";
					}
					else
					{
						while (fgets(temp, 100, fp) != NULL)
						{
							cout << temp;
						}
						fclose(fp);
					}
					break;
				case'4':
					fp = fopen("order.txt", "r");
					if (NULL == fp)
					{
						cout << "�ɮ׵o�Ϳ��~";
					}
					else
					{
						while (fgets(temp, 100, fp) != NULL)
						{
							cout << temp;
						}
						fclose(fp);
					}
					break;
				case'5':
					fp = fopen("client.txt", "r");
					if (NULL == fp)
					{
						cout << "�ɮ׵o�Ϳ��~";
					}
					else
					{
						while (fgets(temp, 100, fp) != NULL)
						{
							cout << temp;
						}
						fclose(fp);
					}
					break;
				case'6':
					fp = fopen("employee.txt", "r");
					if (NULL == fp)
					{
						cout << "�ɮ׵o�Ϳ��~";
					}
					else
					{
						while (fgets(temp, 100, fp) != NULL)
						{
							cout << temp;
						}
						fclose(fp);
					}
					break;
				default:
					break;
				}
			} while (ans != '7');
			
			
		}
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	main system;
	system.io();
	return 0;
}












