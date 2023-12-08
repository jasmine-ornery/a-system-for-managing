// employee.c
#include "employee.h"

void displayEmployee(struct Employee employee) {
    printf("Employee ID: %d\n", employee.employeeId);
    printf("Name: %s\n", employee.name);
    printf("Salary: %.2f\n", employee.salary);
    printf("Department ID: %d\n", employee.departmentId);
}
