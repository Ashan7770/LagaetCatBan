#include <iostream>
#include <string>
#include <vector>
#include "Code_Classesr.h"
using namespace std;
void User::Security_of_entry(int* Key_4, string* ai) {
	string  input_1;
	int key_3 = 1,key_5=0;
	do {
		int key = 0, key_number = 0;
		string input;
		
		cout << "���� � ���." << endl;
		cout << "===============================================" << endl;
		cout << "��� �����" << endl;
		cin >> input;

		int Total_number_of_people = 0;
		for (size_t Number = 0; Number < allowance.size() && key == 0; ++Number)
		{
			//input==allowance[Number].login;
			if (input != allowance[Number].login) {
				key = 0;
				key_number++;
				
			}
			else {
				key = 1;
			}
		}
//////////////////////////////////////////////////////////////////////////////////////
		if (key == 0) {
			cout << "������� ������ ���!" << endl;
			key_5 = 0;
		}
		else if (key == 1) {
			cout << "������ ����� ����!" << endl;
			cout << allowance[key_number].login << endl;
			cout << "++++++++++++++++++++++++++++" << endl;
			cout << "��� ������:" << endl;
			cin>> input;
			if (input == allowance[key_number].password) {
				*Key_4 = 1;
				key_5 = 1;
				input_1 = "���";
				cout <<"������������, " <<allowance[key_number].name<<"!" << endl;
				*ai = allowance[key_number].name;
			}
			else {
				cout << "�� ���������� ������" << endl;
				*Key_4 = 0;
				key_5 = 0;
				input_1 = "��";
			}		            			
		}
//////////////////////////////////////////////////////////////////////////////////////
		if (key_5 == 0) {
			cout << "��������� �������? [��/���]" << endl;
			do {
				cin >> input_1;
				if (input_1 == "��") {
					key_3 = 1;
				}
				else if (input_1 == "���") {
					*Key_4 = 0;
					key_3 = 1;
				}
				else {
					cout << "������ �����!\n��������� �������? [��/���]" << endl;
					key_3 = 0;
				}
			} while (key_3 != 1);
		}	
	} while (input_1=="��");

	


}





void Texst_class::general_chat(int* number_of_words, int* start_of_messages, int* end_of_messages,const string& poks) {

	
	Texst_class input_3, input_31, input_admission;
	string texst_draft, admission_system, general_chat="OO90drty1";
	cout << "��������� ������ ����:" << endl;
	cout << "======================" << endl;

	

	int Number_of_words = 0,string_start=0, string_end, boundaries_of_order, key_7 = 0;
	//input_admission.safety;
	int start, end, bit = 0, key_1 = 0;
	

		

	for (size_t Number = 0; Number < allowance_1.size(); ++Number)
	{
		if (message_control[Number].safety == "OO90drty1") {
			cout << allowance_1[Number].texst << " ";
			Number_of_words = Number;


		}




	}
	*number_of_words = Number_of_words + 1;



	
	
	
	string_start = *start_of_messages;
	string_end = string_start;
	cout << "��: " << endl;
	do {
		if (key_7 == 0) {
			input_3.texst = "==";
			input_admission.safety = general_chat;
			allowance_1.push_back(input_3);
			message_control.push_back(input_admission);
			input_3.texst = poks;
			input_admission.safety = general_chat;
			message_control.push_back(input_admission);
			allowance_1.push_back(input_3);
			input_3.texst = ":";
			input_admission.safety = general_chat;
			message_control.push_back(input_admission);
			allowance_1.push_back(input_3);
			input_3.texst = "\n";
			input_admission.safety = general_chat;
			message_control.push_back(input_admission);
			allowance_1.push_back(input_3);
			key_7 = 1;
			string_end = string_end + 4;
		}
		else {
			cin >> texst_draft;
		}			
		if (texst_draft != "�����") {
			string_end++;			
				input_3.texst = texst_draft;
				allowance_1.push_back(input_3);	
				input_admission.safety = general_chat;
				message_control.push_back(input_admission);
		}
		else if (texst_draft == "�����") {
			input_3.texst = "\n";
			allowance_1.push_back(input_3);
			input_admission.safety = general_chat;
			message_control.push_back(input_admission);
			//string_end--;
			*end_of_messages = string_end;
			*start_of_messages = *end_of_messages + 1;		///!!!!!!!!!!!!!!!!!!	
		}		
	} while (texst_draft!="�����");


////////////////////////////////////////////////////////////////
	
	
	////////////////////////////////////////////////////////////////
	

////////////////////////////////////////////////////////////////








}

void Texst_class::private_chat(int* number_of_words, int* start_of_messages, int* end_of_messages, const string& poks) {
	User* memory_User = new User;
	Texst_class input_3, input_31, private_admission, input_admission;
	string texst_draft, admission_system, private_chat = "OO90duoy1",priv_chat;
	int key_9 = 0;
	cout << "��������� ������� ����:" << endl;
	cout << "======================" << endl;
	cout << "���� ������� ����� ��������:" << endl;
	

	key_9 = 1;
	cout << "��� ��� �����?" << endl;
	cin >> priv_chat;
	

	int Number_of_words = 0, string_start = 0, string_end, boundaries_of_order, key_7 = 0;

	int start, end, bit = 0, key_1 = 0,bol;

	
	
		for (size_t Number = 0; Number < allowance_1.size(); ++Number)
		{
			
			
			if (message_control[Number].safety == priv_chat) {
				cout << allowance_1[Number].texst << " ";
				Number_of_words = Number;


			}

			




		}
		*number_of_words = Number_of_words + 1;





    

	
	

	
		private_chat = priv_chat;



		string_start = *start_of_messages;
		string_end = string_start;
		cout << "��� ������ [�����] " << endl;
		cout << "��: " << endl;
		do {
			if (key_7 == 0) {
				input_3.texst = "==";
				input_admission.safety = private_chat;
				allowance_1.push_back(input_3);
				message_control.push_back(input_admission);
				input_3.texst = poks;
				input_admission.safety = private_chat;
				message_control.push_back(input_admission);
				allowance_1.push_back(input_3);
				input_3.texst = ":";
				input_admission.safety = private_chat;
				message_control.push_back(input_admission);
				allowance_1.push_back(input_3);
				input_3.texst = "\n";
				input_admission.safety = private_chat;
				message_control.push_back(input_admission);
				allowance_1.push_back(input_3);
				key_7 = 1;
				string_end = string_end + 4;
			}
			else {
				cin >> texst_draft;
			}
			if (texst_draft != "�����") {
				string_end++;
				input_3.texst = texst_draft;
				allowance_1.push_back(input_3);
				input_admission.safety = private_chat;
				message_control.push_back(input_admission);
			}
			else if (texst_draft == "�����") {
				input_3.texst = "\n";
				allowance_1.push_back(input_3);
				input_admission.safety = private_chat;
				message_control.push_back(input_admission);
				//string_end--;
				*end_of_messages = string_end;
				*start_of_messages = *end_of_messages + 1;		///!!!!!!!!!!!!!!!!!!	
			}
		} while (texst_draft != "�����");


	


	






}