#pragma once
#include<iostream>
using namespace std;
# include<string>
#include<vector>
#include <fstream>
class recip
{
private:
	int age;
	string name;
	string mail;
	string pass;
	string gender;
	char blood_type;
	string name_of_hospital;
	string name_of_dactor_of_the_CASE;
public:
	int id;
	void Recipient_regista();
	void add_data(vector<string> data);
	void display();
	void save_data();
	void update();
};

