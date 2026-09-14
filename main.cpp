#include <iostream>

namespace Seoyeowon2649020{
    struct student{
        int id{};
        int score{};
    };
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

int main(){
    using namespace Seoyeowon2649020;
    student s1{ inputStudent() };
    printStudent(s1);

    student s2{ inputStudent() };
    printStudent(s2);
    
    return 0;
}