#include <iostream>
#include <vector>

#include "Student.hpp"
#include "menu.hpp"


int main () {
    Student student1 ("Konrad", "Karkowski", 'm', 35, "86111702275", 100001 );
    Student student2 ("Konrad", "Kar", 'm', 31, "86111702275", 100002 );

    std::vector<Student> studentDb;

    studentDb.push_back(student1);
    studentDb.push_back(student2);

    for(auto& el : studentDb){
        std::cout << el.get_first_name_() << " | " 
                  << el.get_last_name_() << " | " 
                  << el.get_age_() << " | " 
                  << el.get_gender_() << " | " 
                  << el.get_pesel_() << " | " 
                  << el.get_id_()
                  << '\n';
    }

}