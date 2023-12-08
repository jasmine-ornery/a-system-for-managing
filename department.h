// department.h
#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "employee.h"

struct Department {
    int departmentId;
    char name[50];
    struct Employee employees[10];
    int employeeCount;
};

void addEmployeeToDepartment(struct Department *department, struct Employee employee);
void displayDepartment(struct Department department);

#endif // DEPARTMENT_H
