#include<iostream>
#include<string>
#include <fstream>
#include "Donar.h"
#include "recip.h"
#include <sstream>
#include<unordered_map>
using namespace std;
vector<string> split(string strToSplit, char delimeter)
{
	stringstream ss(strToSplit);
	string item;
	vector<string> splittedStrings;
	while (getline(ss, item, delimeter))
	{
		splittedStrings.push_back(item);
	}
	return splittedStrings;
}
void read_file(unordered_map<int, recip>&Recipient, unordered_map<int, Donar>&Donor) {
	ifstream f;
	
	f.open("recipientsFile.txt");
	string line;
	while (getline(f, line))
	{
		
		recip temp;
		temp.add_data(split(line, ';'));
		Recipient.insert({temp.id, temp});
	}
	f.close();
	
	f.open("donor.txt");
	line.clear();
	while (getline(f, line))
	{
		
		Donar temp;
		temp.add_data(split(line, ';'));
		Donor.insert({ temp.id, temp });
	}
	f.close();
}
void disblay(unordered_map<int, recip> Recipient) {
	unordered_map<int, recip>::iterator i;
	for ( i = Recipient.begin(); i != Recipient.end(); i++) {
		i->second.display();
	}
}
void disblay(unordered_map<int, Donar>Donor) {
	unordered_map<int, Donar>::iterator i;
	for (i = Donor.begin(); i != Donor.end(); i++) {
		i->second.display();
	}
}
void update(unordered_map<int, recip> &Recipient, int x) {
	
	fstream f;
	vector<string> data;
	f.open("recipientsFile.txt", ios::trunc);
	string line;
	/*temp.open("temp.txt", ios::trunc);*/
	
	unordered_map<int, recip>::iterator i;
	for (i = Recipient.begin(); i != Recipient.end(); i++) {
		i->second.update();
		i->second.save_data();
	}
	/*while (getline(temp, line)) {
		f << line << "\n";
	}*/
	f.close();
	
	//temp.close();
}
void update(unordered_map<int, Donar> &Donor, int x) {

	fstream f;
	vector<string> data;
	f.open("recipientsFile.txt", ios::trunc);
	string line;
	/*temp.open("temp.txt", ios::trunc);*/

	unordered_map<int, Donar>::iterator i;
	for (i = Donor.begin(); i != Donor.end(); i++) {
		i->second.update();
		i->second.save_data();
	}
	/*while (getline(temp, line)) {
		f << line << "\n";
	}*/
	f.close();

	//temp.close();
}
void serch(unordered_map<int, recip>Recipient, int xid) 
{
	Recipient.find(xid)->second.display();
	//cout << Recipient.find(xid)->first<<endl;
}
void check(unordered_map<int, recip>Recipient, int xid,string pass)
{
	Recipient.find(xid)->second.display();
	//cout << Recipient.find(xid)->first<<endl;
}
int main()
{

	int choice;
	int xid;
	unordered_map<int, recip>Recipient;
	unordered_map<int, Donar>Donor;

	read_file(Recipient, Donor);
	recip recip_data;
	Donar donar_data;
	while(true){
		
	cout << "\t\t\t\t\t\t welcome to blood bank mangement system\n";
	// cout<<" very important to  regester your data">>endl;
	cout << "1: \t\  DONOR \n";
	cout << "2: \t\RECIPIENT  \n";
	cout << "3: \t\To login as admin  \n";
	//cout << "4: \t\show all DONOR  \n";
	//cout << "5: \t\ search  \n";
	cout << "4: \t\ Exit \n";
	cin >> choice;
	if (choice == 1)
	{
		system("cls");
		cout << "1: \t\ To login as DONOR press 1 \n";
		cout << "2: \t\ To register as DONOR press 2 \n";
		cin >> choice;
		if (choice == 1)
		{
			system("cls");
			cout<< "1: \t\ Enter your id \n";
			cout << "1: \t\ Enter your password \n";
			int check_id;
			string check_password;
			cin >> check_id;
			cin >> check_password;
			check(Recipient, check_id,check_password);
			system("pause");

		}
		else if (choice == 2)
		{
			system("cls");
			donar_data.donor_date();
			Donor.insert({ donar_data.id, donar_data });
			system("pause");
		}
		
		else
		{
			cout << "Unavliable choice" << endl; 
			//goto 
		}

	}
	else if (choice == 2)
	{
		system("cls");
		cout << "1: \t\ To login as recipient press 1 \n";
		cout << "2: \t\ To register as recipient press 2 \n";
		cin >> choice;
		if (choice == 1)
		{
			system("cls");
			cout << "1: \t\ Enter your id \n";
			cout << "1: \t\ Enter your password \n";
			int check_id;
			string check_password;
			cin >> check_id;
			cin >> check_password;
			check(Recipient, check_id, check_password);
			system("pause");

		}
		else if (choice == 2)
		{
			system("cls");
			donar_data.donor_date();
			Donor.insert({ donar_data.id, donar_data });
			system("pause");
		}

		else
		{
			cout << "Unavliable choice" << endl;
			
		}


	}
	else if (choice == 3)
	{
		system("cls");
		string un;
		cout << "1: \t\ Enter your username \n";
		cout << "2: \t\ Enter your password \n";
		string check_password;
		cin >> un;
		cin >> check_password;
		system("cls");
		cout << "1: \t\show all DONOR  \n";
		cout << "2: \t\show all Recipient  \n";
	    cout << "3: \t\ search  \n";

		cin >> choice;
		if (choice == 1)
		{
			system("cls");
			disblay(Donor);
			system("pause");
		}
		if (choice == 2)
		{
			system("cls");
			disblay(Recipient);
			system("pause");
		}
		else if (choice == 3)
		{
			system("cls");
			cout << "enter the id" << endl;
			cin >> xid;
			serch(Recipient, xid);
			system("pause");
		}
		
	}
	

	else if (choice == 6)
	{
		break;
	}
	else
	{
		cout << " enter your one of two choice please (donor or recipient)\n";
		system("pause");
		system("cls");


	}
	system("cls");
}

	return 0;
}
