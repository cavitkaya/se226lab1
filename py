#task1
name = input("What is your name?\n")

print(f"Hello {name}.")


student_id = input("What is your Student ID?\n")


print(f"Your ID is {student_id}.")
#task2

var1 = float(input("Enter the first number (var1): "))
var2 = float(input("Enter the second number (var2): "))

sum_result = var1 + var2
diff_result = var1 - var2
prod_result = var1 * var2

print(f"var1 = {var1}")
print(f"var2 = {var2}")
print(f"Sum = {sum_result}")
print(f"Difference = {diff_result}")
print(f"Product = {prod_result}")

#task3

name = input("Enter student's name: ")


lab_grade = float(input("Enter lab grade: "))
midterm_grade = float(input("Enter midterm grade: "))
final_grade = float(input("Enter final grade: "))


last_score = (lab_grade * 0.25) + (midterm_grade * 0.35) + (final_grade * 0.40)


print(f"Name: {name}")
print(f"Lab: {lab_grade}")
print(f"Midterm: {midterm_grade}")
print(f"Final: {final_grade}")
print(f"Last Score: {last_score}")

#task4
print("*\n**\n***\n**\n*")
