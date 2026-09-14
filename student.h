#pragma once

#include <iostream>

namespace Seoyeowon2649020{
    struct student{
        int id{};
        int score{};
    };
    student inputStudent();
    void printStudent(const student &s);
}