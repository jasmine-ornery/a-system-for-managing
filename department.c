// department.c
#include "department.h"

void addEmployeeToDepartment(struct Department *department, struct Employee employee) {
    if (department->employeeCount < 10) {
        department->employees[department->employeeCount++] = employee;
    } else {
        printf("Department is full, cannot add more employees.\n");
    }
}

void displayDepartment(struct Department department) {
    printf("Department ID: %d\n", department.departmentId);
    printf("Department Name: %s\n", department.name);
    printf("Employees in the Department:\n");
    for (int i = 0; i < department.employeeCount; ++i) {
        displayEmployee(department.employees[i]);
        printf("\n");
    }
}
