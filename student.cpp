#include "student.h"

namespace Seoyeowon2649020{
    student inputStudent(){
        student s{};
        std::cout << "Enter id: ";
        std::cin >> s.id;
        std::cout << "Enter score: ";
        std::cin >> s.score;
        return s;
    }

    void printStudent(const student &s){ //pass by reference
        std::cout << "Student ID: " << s.id << std::endl;
        std::cout << "Score: " << s.score << " points\n";
    }
}

