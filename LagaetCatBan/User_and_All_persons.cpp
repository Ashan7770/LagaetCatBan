#include <iostream>
#include <string>
#include <vector>
#include "Code_Classesr.h"
using namespace std;
void User::User_Registration(int* Quantity_1) {
	Screen_Decor* memory_View_ = new Screen_Decor;
	User input_2;
	string login_password_name_draft,key_1, key_2;
	int key_3=1;
	int Total_number_of_people_1 = 0;
	memory_View_->View_of_the_registration_screen();
	do {
		int key = 1;
		cout << "������� �����" << endl;
		cin >> login_password_name_draft;
		if (*Quantity_1 != 0) {
			for (size_t Number = 0; Number < allowance.size()&&key==1; ++Number)
			{				
				if (login_password_name_draft != allowance[Number].login) {
					key = 1;
				}
				else {
					cout << "������ ����� ��� ����!" << endl;
					key = 0;
				}
			}
		}
		if (key == 1) {
			input_2.login= login_password_name_draft;
			cout << "����� ������" << endl;
			cout << "===========================" << endl;
			cout << "������� ������" << endl;
			cin >> input_2.password;
			cout << "������� ���" << endl;
			cin >> input_2.name;
			allowance.push_back(input_2);
		}
		do {
			
             key_1 = "���";
			if (key_1 != "��" && key_1 != "���") {
				cout << "������ �������.\n[��/���]" << endl;
				key_3 = 0;

			}
			else {
				key_3 = 1;
			}
		} while (key_3 != 1);
	} while (key_1=="��");	


	for (size_t Number = 0; Number < allowance.size(); ++Number)
	{
		Total_number_of_people_1 = Number;
	}
	*Quantity_1 = Total_number_of_people_1 + 1;
	 


};
void User::All_the_group() {
	int Total_number_of_people = 0;
	for (size_t Number = 0; Number < allowance.size(); ++Number)
	{
		cout << allowance[Number].login << endl;

		Total_number_of_people = Number;
	}
	Total_number_of_people = Total_number_of_people + 1;
	
	cout << "����� ����� ����������:" << Total_number_of_people << endl;
}