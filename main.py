#!bin/python

"""An example of a basic calculator with python.
"""


def main():
    # values
    app = True

    operation_messages = [
        "Add Operation",
        "Substraction Operation",
        "Division Operation",
        "Multiplication Operation",
    ]

    while app:
        print("Choose an operation to do: \n")
        count = 0
        for message in operation_messages:
            print('%s -> %i' % (message, count))
            count = count + 1
        selection = int(input("Your Choice: "))
        if selection < 4:
            print(
                "Your choice: %i -> %s" % (
                    selection, operation_messages[selection]
                )
            )
            print("Choose your numbers for make the operation: ")
            num_one = int(input("Your first number: "))
            num_two = int(input("Your second number: "))
            print("processing...")
            app = False
            if selection == 0:
                result = add_operation(num_one, num_two)
            elif selection == 1:
                result = substraction_operation(num_one, num_two)
            elif selection == 2:
                result = division_operation(num_one, num_two)
            elif selection == 3:
                result = multiplication_operation(num_one, num_two)
        else:
            print("You don't choose an available option. :(")
    if type(result) == str:
        print ('%s' % (result))
    else:
        print("This is your operation result: %i" % (result))


def add_operation(a, b):
    result = a + b
    return result


def substraction_operation(a, b):
    return a - b


def division_operation(a, b):
    if b == 0:
        result = "You can't divide any number by 0... :/ try again..."
    else:
        result = a / b
    return result


def multiplication_operation(a, b):
    result = a * b
    return result

if __name__ == "__main__":
        main()
