#include "Code_Classesr.h"
#include <iostream>
#include <vector>
using namespace std;
void Screen_Decor::Epigraph() {
	Screen_Decor* memory_View = new Screen_Decor;
	Texst_class* memory_String = new Texst_class;
	User* memory_User = new User;
	int key_exit = 0, Quantity_, Quantity_1=0, number_of_words_, number_of_words_1=0, key_4=0,key_3, key_2,start_of_messages=0,end_of_messages=0, start_of_messages_=0, end_of_messages_=0,order_=0,musor_2;
	string input, input_chat, key, input_1, key_1,toii,toiii,musor_1="d";
	do {
		memory_View->Type_of_beginning();		
		if (key_exit == 0) {
			cout << "^^^^^^^^^^^^^^^^^" << endl;
			cin >> input;
		}
		else {
			input = "�����";
		}
		if (input == "������") {
			cout << "_______������_______" << endl;
			cout << "� � ��� ���������_" << endl;
			key = "��_�����";
		}
		else if (input == "�����������") {
			cout << "_______�����������_______" << endl;
			cout << "����! ����! � ��� � ��������" << endl;
			key = "��_�����";
		}
		else if (input == "����������") {
			cout << "_______����������_______" << endl;
			cout << "������� �� ��� �������� � []" << endl;
			key = "��_�����";
		}
		else if (input == "�����") {
			cout << "_______�����_______" << endl;
			key = "�����";
		}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		else if (input == "����������") {
			do {
				number_of_words_ = number_of_words_1;
				Quantity_ = Quantity_1;
				memory_View->Menu_Center(&Quantity_,&number_of_words_);
				cout << "^^^^^^^^^^^^^^^^^" << endl;
				cin >> input_1;
				if (input_1 == "�����������") {
					cout << "_______�����������_______" << endl;
					memory_User->User_Registration(&Quantity_1);
					key_1 = "��_�����";
				}
				else if (input_1 == "���") {
					cout << "_______���_______" << endl;

					memory_User->Security_of_entry(&key_4,&toii);
					toiii = toii;
					if (key_4 == 1) {
						do {
							cout << "����� ���/������ ���������.\n[�����/������]" << endl;						
							cin >> input_chat;
							if (input_chat == "�����") {
								key_2 = 1;
								key_3 = 1;
							}
							else if (input_chat == "������") {
								key_2 = 1;
								key_3 = 2;
							}
							else {
								cout << "������ �����!" << endl;
								key_2 = 0;
							}
						} while (key_2 != 1);
					}
					else if (key_4 == 0) {
						key_3 = 0;
						
						key_1 = "��_�����";
					}
					    if (key_3 == 1) {
							
						    memory_String->general_chat(&number_of_words_1, &start_of_messages, &end_of_messages,toiii);

						key_1 = "��_�����";
				        }
					    else if (key_3 == 2) {
							memory_String->private_chat(&number_of_words_1, &start_of_messages, &end_of_messages, toiii);
							key_1 = "��_�����";
					    }
						else {

							key_1 = "��_�����";
						}


					
				}
				else if (input_1 == "����������") {
					cout << "_______����������_______" << endl;
					key_1 = "��_�����";
				}
				else if (input_1 == "���") {
					cout << "_______���_______" << endl;
					memory_User->All_the_group();
					key_1 = "��_�����";
				}
				else if (input_1 == "�����") {
					cout << "_______�����_______" << endl;
					key_1 = "�����";
				}
				else if (input_1 == "�����") {
					key_1 = "�����";
					key_exit = 1;
				}
				else {
					cout << "_______????????_______" << endl;
					key_1 = "��_�����";
				}
			} while (key_1 != "�����");

///////////////////////////////////////////////////////////////////////////////////////
		}
		else {
			cout << "_______????????_______" << endl;

		}
	} while (key != "�����");
};
