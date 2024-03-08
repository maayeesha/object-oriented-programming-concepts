#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee {
  virtual void
  askForPromotion() = 0; // whoever signs for the abstractemployee contract will
                         // have to provide impmentation for this method hence
                         // "virtual"
};

class Employee : AbstractEmployee {
  // private:

  string Company;
  int Age;

protected:
  string Name;

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
  void setAge(int age) {
    if (age >= 18)
      Age = age;
  }
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
  void askForPromotion() {
    if (Age > 30) {
      cout << Name << " got promoted" << endl;
    } else
      cout << Name << " ,Sorry, no promotion for you" << endl;
  }

  virtual void Work() {
    cout << Name << " is checking email, task log, performing tasks ... "
         << endl;
  }
};

class Developer : public Employee {
public:
  string FavProgrammingLanguage;
  Developer(string name, string company, int age, string favProgrammingLanguage)
      : Employee(name, company, age) {
    FavProgrammingLanguage = favProgrammingLanguage;
  };
  void fixBug() {
    cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
  }

  void Work() {
    cout << Name << " is writing " << FavProgrammingLanguage << "code" << endl;
  }
};

class Teacher : public Employee {
public:
  string Subject;
  void preparedLesson() {
    cout << Name << " is preparing " << Subject << " lesson." << endl;
  }
  Teacher(string name, string company, int age, string subject)
      : Employee(name, company, age) {
    Subject = subject;
  }

  void Work() { cout << Name << " is teaching " << Subject << endl; }
};

int main() {
  // Employee employee1 = Employee("Maayeesha", "ABC", 24);
  //  employee1.Introduceyourself();
  //  employee1.Name = "Maayeesha";
  //  employee1.Company = "ABC";
  //  employee1.Age = 24;
  //  employee1.Introduceyourself();
  // Employee employee2 = Employee("Farzana", "XYZ", 35);
  // employee2.Introduceyourself();

  // Encapsulation
  //  employee1.setAge(12);
  //  cout << employee1.getName() << " is " << employee1.getAge() << " years
  //  old."
  //       << endl;

  // Abstraction
  // employee1.askForPromotion();
  // employee2.askForPromotion();

  // inheritance
  Developer d = Developer("Maayeesha", "ABC", 24, "C++");
  // d.fixBug();
  // d.askForPromotion();
  Teacher t = Teacher("Sherlock", "Cool School", 39, "History");
  // t.preparedLesson();
  // t.askForPromotion();

  // Polymorphism
  d.Work();
  t.Work();

  Employee *e1 = &d; // an Employee pointer, holding reference to the developer
  Employee *e2 = &t;
  e1->Work(); // before using virtual in base class: O/P: Employee *e = &d;
  // after using virtual void work in base class: O/P:Maayeesha is writing
  // C++code
  //  when you add the keyword "virtual", in polymorphism, the same
  //  named method will be checked first in derived classes, if the
  //  derived class has the method then it will execute otherwise, the
  //  method here in the base class will be executed.
  e2->Work();
}
