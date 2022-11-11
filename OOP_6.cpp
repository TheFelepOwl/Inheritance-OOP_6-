

#include <iostream>

using namespace std;

class Persona
{
public:
	string name;
	int age;
	string sex;

	Persona()
	{
		this->name = "";
		this->age = 0;
		this->sex = "";
	}

	Persona(string name,int age,string sex)
	{
		this->name=name;
		this->age = age;
		this->sex = sex;
	}

	~Persona()
	{
		this->name = "";
		this->age = 0;
		this->sex = "";
	}

};

class Worker : public Persona
{
private:
	string position;

public:
	float salary;
	int exp;

	Worker()
	{

		this->name = "";
		this->age = 0;
		this->sex = "";
		this->position = "";
		this->salary = 0;
		this->exp = 0;
	}

	Worker(string name, int age, string sex, string position, float salary, int exp)
	{	
		this->name = name;
		this->age = age;
		this->sex = sex;
		this->position = position;
		this->salary = salary;
		this->exp = exp;
	}

	~Worker()
	{	

		this->name = "";
		this->age = 0;
		this->sex = "";
		this->position = "";
		this->salary = 0;
		this->exp = 0;
	}

	friend ostream& operator << (ostream& os, Worker& obj);
};

class Servant  : public Worker
{
private:

	string weapon;

public:

	Servant()
	{
		this->name = "";
		this->age = 0;
		this->sex = "";
		this->weapon = "";
		this->salary = 0;
		this->exp = 0;
	}

	Servant(string name, int age, string sex, string weapon, float salary, int exp)
	{
		this->name = name;
		this->age = age;
		this->sex = sex;
		this->weapon = weapon;
		this->salary = salary;
		this->exp = exp;
	}

	~Servant()
	{
		this->name = "";
		this->age = 0;
		this->sex = "";
		this->weapon = "";
		this->salary = 0;
		this->exp = 0;
	}

	friend ostream& operator << (ostream& os, Servant& obj);

};

class Engineer : public Worker
{
private:
	string obj;
public:
	
	Engineer()
	{
		this->name = "";
		this->age = 0;
		this->sex = "";
		this->obj = "";
		this->salary = 0;
		this->exp = 0;
	}

	Engineer(string name, int age, string sex, string obj, float salary, int exp)
	{
		this->name = name;
		this->age = age;
		this->sex = sex;
		this->obj = obj;
		this->salary = salary;
		this->exp = exp;
	}

	~Engineer()
	{
		this->name = "";
		this->age = 0;
		this->sex = "";
		this->obj = "";
		this->salary = 0;
		this->exp = 0;
	}

	friend ostream& operator << (ostream& os, Engineer& obj);
};


ostream& operator << (ostream& os, Engineer& obj)
{
	os << "\nName: " << obj.name << "\nAge: " << obj.age << "\nSex: " << obj.sex << "\nObject: " << obj.obj <<"\nSalary: " << obj.salary <<"$" << "\nExperience:" << obj.exp << " years" << endl;
	return os;
}

ostream& operator << (ostream& os, Servant& obj)
{
	os << "\nName: " << obj.name << "\nAge: " << obj.age << "\nSex: " << obj.sex << "\nWeapon: " << obj.weapon << "\nSalary: " << obj.salary << "$" << "\nExperience:" << obj.exp << " years" << endl;
	return os;
}

ostream& operator << (ostream& os, Worker& obj)
{
	os << "\nName: " << obj.name << "\nAge: " << obj.age << "\nSex: " << obj.sex << "\nPosition: " << obj.position << "\nSalary: " << obj.salary << "$" << "\nExperience:" << obj.exp << " years" << endl;
	return os;
}

int main()
{
	Engineer T1("Denys", 24, "men", "Programiring", 2999, 4);
	Servant T2 ("Oleg", 18, "men", "Pistol", 985, 2);
	Worker T3("Ruslan", 21, "men", "Bugalter", 1500, 3);

	cout << T1<<T2<<T3;


	return 0;
   
}