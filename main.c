// main.c
#include "employee.h"
#include "department.h"

int main() {
    struct Employee employee1 = {1, "John Doe", 50000.0, 101};
    struct Employee employee2 = {2, "Jane Smith", 60000.0, 102};

    struct Department department1 = {101, "Engineering"};
    struct Department department2 = {102, "Marketing"};

    addEmployeeToDepartment(&department1, employee1);
    addEmployeeToDepartment(&department2, employee2);

    displayDepartment(department1);
    displayDepartment(department2);

    return 0;
}
