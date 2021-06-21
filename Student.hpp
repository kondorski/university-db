#pragma once

#include <string>


class Student{
public:
    std::string get_first_name_() { return first_name_; }
    std::string get_last_name_() { return last_name_; }
    char get_gender_() { return gender_; }
    int get_age_() { return age_; }
    std::string get_pesel_() { return pesel_; }
    int get_id_() { return id_; }

    Student (std::string first_name, std::string last_name, char gender, int age, std::string pesel, int id);

private:
    std::string first_name_;
    std::string last_name_;
    std::string pesel_;
    char gender_;
    int age_;
    int id_;
};
