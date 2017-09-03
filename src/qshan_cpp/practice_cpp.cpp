//test file
#include <stdio.h>
#include <iostream>
#include "practice_cpp.h"

using namespace std;
using std::string;


void struct_test_qshan(void)
{

  struct struct_test_qshan
  {
    string name;
    int old;
    string job;
  };

  struct struct_test_qshan1
  {
    string name;
    int old;
    string job;
  } test_struct_test_qshan1;


  struct_test_qshan test_struct_test_qshan;

  test_struct_test_qshan.name = "Xiaoxiao";
  test_struct_test_qshan.old = 15;
  test_struct_test_qshan.job = "Student";

  cout << test_struct_test_qshan.name << " " << test_struct_test_qshan.old << std::endl;

  typedef struct
  {
    string name;
    int old;
    string job;
  } struct_test_qshan2;

  struct_test_qshan2 test_struct_test_qshan2;

  cout << "##this is end of## " << __func__ << " in " << __FILE__ <<  std::endl;
}



class person_test_qshan
{
public:
  string name;
  int old;
  void set_name(string u_name);
  void display_name(void);
  string get_name(void);
};


void person_test_qshan::set_name(string u_name)
{
  name = u_name;
}
void person_test_qshan::display_name(void)
{
  cout << "name is " << name;
}
string person_test_qshan::get_name(void)
{
  return name;
}

class son_test_qshan : public person_test_qshan
{
public:
  string job;
  //int old;
  //string name;

  void set_job (string u_job);
  void display_job (void);
  string get_job (void);
  son_test_qshan (string u_name, int u_old, string u_job);
};

son_test_qshan::son_test_qshan (string u_name, int u_old, string u_job)
{
  name = u_name;
  old = u_old;
  job = u_job;
}

void son_test_qshan::set_job (string u_job)
{
  job = u_job;
}
void son_test_qshan::display_job (void)
{
  cout << "Job is " << job;
}
string son_test_qshan::get_job (void)
{
  return job;
}


void class_test_qshan(void)
{
  //int i = 0;


  //person_test_qshan test_person_test_qshan("input", 0);
  person_test_qshan test_person_test_qshan;

  cout << std::endl  << std::endl;
  test_person_test_qshan.set_name("Xiao-xiao");
  test_person_test_qshan.display_name();


  son_test_qshan test_son_test_qshan("input", 10, "input");

  cout << std::endl  << std::endl;
  test_son_test_qshan.set_name("Xiaoxiao");
  test_son_test_qshan.display_name();
  cout << std::endl;
  test_son_test_qshan.set_job("Student");
  test_son_test_qshan.display_job();

  cout << std::endl  << std::endl;
  cout << "##this is end of## " << __func__ << " in " << __FILE__ <<  std::endl;
}
