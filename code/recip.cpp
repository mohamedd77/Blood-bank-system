#include "recip.h"

void recip::Recipient_regista()
{
		cout << "enter your id\n";
		cin >> id;
		cout << "enter name\n";
		cin >> name;
		cout << "enter your mail\n";
		cin >> mail;
		cout << "enter your paassword\n";
		cin >> pass;
		cout << "enter your age\n";
		cin >> age;
		cout << "are you male or female\n";
		cin >> gender;
		cout << "enter your blood type you want \n";
		cin >> blood_type;
		cout << "enter the the name of hospital\n";
		cin >> name_of_hospital;
		cout << " enter the name of doctor who responsible of that case\n";
		cin >> name_of_dactor_of_the_CASE;
		cout << " \t \t\t\t thanks for helping to collect this data\n";
		// recipient data file
		fstream recipientsFile("recipientsFile.txt", ios::app);
		recipientsFile << id << ";" << name << ";" << mail << ";" << pass << ";" << age << ";" << gender << ";" << blood_type << ";" << name_of_hospital << ";" << name_of_dactor_of_the_CASE<<"\n";
		recipientsFile.close();
		
	
}

void recip::add_data(vector<string> data)
{
	id = stoi(data[0]);
	name = data[1];
	mail = data[2];
	pass = data[3];
	age = stoi(data[4]);
	gender = data[5];
	blood_type = data[6][0];
	name_of_hospital = data[7];
	name_of_dactor_of_the_CASE = data[8];
}

void recip::display()
{
	cout << "id:" << id << endl << "name:" << name << endl << "mail:" << mail << endl << "age:" << age << endl << "gender:" << gender << endl << "blood type:" << blood_type << endl << "name of hospital:" << name_of_hospital << endl << "name of doctor of the CASE:" << name_of_dactor_of_the_CASE << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
}

void recip::save_data()
{
	fstream recipientsFile("recipientsFile.txt", ios::app);
	recipientsFile << id << ";" << name << ";" << mail << ";" << pass << ";" << age << ";" << gender << ";" << blood_type << ";" << name_of_hospital << ";" << name_of_dactor_of_the_CASE << "\n";
	recipientsFile.close();
}

void recip::update()
{
	int choice;
	cout << "1: \t\  id \n";
	cout << "2: \t\ name  \n";
	cout << "3: \t\ mail \n";
	cout << "4: \t\ age \n";
	cout << "5: \t\  gender \n";
	cout << "6: \t\ blood type  \n";
	cout << "7: \t\ name of hospital \n";
	cout << "8: \t\ name of doctor of the CASE \n";
	cout << "9: \t\ password \n";
	cin >> choice;
	if (choice == 1)
	{
		

	}
	else if (choice == 2)
	{


	}
	else if (choice == 3)
	{
		

	}
	else if (choice == 4)
	{
		

	}
	else if (choice == 4)
	{


	}
	else if (choice == 5)
	{


	}
	else if (choice == 6) {



	}
	else if (choice == 7)
	{


	}
	else if (choice == 8)
	{


	}
	else if (choice == 9)
	{


	}
	else
	{
		cout << " enter your one of the choices please \n";
		system("pause");
		system("cls");
		update();

	}
}


