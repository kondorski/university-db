#pragma once

class Student;

class Database
{
private:
    std::vector<Student> universityDb_;

public:
    void searchByLastName(const std::string& name);
    void searchByPesel(const std::string& pesel);
    void printDatabase ();
    void addStudent (const Student&);
    void deleteStudentByIndexNumber(size_t& index);
    void printStudentInfo(Student& student);
    void sortByPesel();
    void sortByLastName();
};