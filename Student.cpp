#include "Student.hpp"

Student::Student (std::string firstName, std::string lastName, std::string pesel, std::string address, std::string gender, size_t id)
    : firstName_(firstName)
    , lastName_(lastName)
    , gender_ (gender)
    , pesel_ (pesel)
    , address_(address)
    , id_ (id)
    {}

std::string Student::getFirstName() 
{ 
    return firstName_; 
}

std::string Student::getLastName() 
{ 
    return lastName_; 
}

std::string Student::getPesel() 
{ 
    return pesel_; 
}

std::string Student::getAddress() 
{
    return address_; 
}

std::string Student::getGender() 
{ 
    return gender_; 
}
size_t Student::getId() 
{ 
    return id_; 
}








