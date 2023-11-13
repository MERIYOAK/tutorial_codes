employee_file = open("employees.txt", "r")
print(employee_file.readlines()[2:4])
employee_file.close()