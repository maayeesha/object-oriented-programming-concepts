#include <bits/stdc++.h>
using namespace std;

class Employee {
  // private:
public:
  string Name;
  string Company;
  int Age;

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
}