// employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdio.h>

struct Employee {
    int employeeId;
    char name[50];
    float salary;
    int departmentId;
};

void displayEmployee(struct Employee employee);

#endif // EMPLOYEE_H
