#ifndef PRACTICE_CPP_H
#define PRACTICE_CPP_H

using namespace std;
using std::string;

class person_test_qshan
{
public:
  string name;
  int old;

  void set_name(string u_name)
  {
    name = u_name;
  }
  void display_name(void)
  {
    cout << "name is " << name;
  }
  string get_name(void)
  {
    return name;
  }
};


  class son_test_qshan : public person_test_qshan
  {
  public:
    string job;
    void set_job(string u_job);
    void display_job(void);
    string get_job(void);
  };


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

#endif  //PRACTICE_CPP_H
