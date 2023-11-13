print("printing current and previous number and their sum in a range(10)")
previous_num = 0
for i in range(1, 11):
    x_sum = previous_num + i
    print("current munber", i, "previous number ", previous_num, "sum: ", x_sum)
    previous_num = i