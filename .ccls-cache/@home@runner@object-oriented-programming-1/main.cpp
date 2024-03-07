#include <bits/stdc++.h>
using namespace std;

class Employee {
  // private:
  string Name;
  string Company;
  int Age;

public:
  // setter
  void setName(string name) { Name = name; }
  // getter
  string getName() { return Name; }
  // setter
  void setCompany(string company) { Company = company; }
  // getter
  string getCompany() { return Company; }
  // setter
  void setAge(int age) { Age = age; }
  // getter
  int getAge() { return Age; }

  void Introduceyourself() {
    cout << "Name: " << Name << endl;
    cout << "Company: " << Company << endl;
    cout << "Age: " << Age << endl;
  }

  Employee(string name, string company, int age) {
    Name = name;
    Company = company;
    Age = age;
  }
};

int main() {
  Employee employee1 = Employee("Maayeesha", "ABC", 24);
  employee1.Introduceyourself();
  // employee1.Name = "Maayeesha";
  // employee1.Company = "ABC";
  // employee1.Age = 24;
  // employee1.Introduceyourself();
  Employee employee2 = Employee("Farzana", "XYZ", 25);
  employee2.Introduceyourself();

  employee1.setAge(50);
  cout << employee1.getName() << " is " << employee1.getAge() << " years old."
       << endl;
}