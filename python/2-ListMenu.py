def create_list():
    global my_list
    size = int(input("Enter the size of the list: "))
    my_list = []
    for i in range(size):
        element = input(f"Enter element {i + 1}: ")
        my_list.append(element)
    print("List created successfully!")

def update_and_delete():
    global my_list
    if len(my_list) > 0:
        my_list[0] = "X"  # Update the first element with 'X'

        if len(my_list) % 2 == 0:
            mid = len(my_list) // 2 - 1
        else:
            mid = len(my_list) // 2

        del my_list[mid]  # Delete the middle element
        print("Updated first element with 'X' and deleted middle element.")
    else:
        print("List is empty.")

def add_names_and_check_python():
    global my_list
    n = int(input("Enter the number of names to add: "))
    for i in range(n):
        name = input(f"Enter name {i + 1}: ")
        my_list.append(name)
    if 'python' in my_list:
        print("The word 'python' is present in the list.")
    else:
        print("The word 'python' is not present in the list.")

def display_list():
    global my_list
    print("Current list:", my_list)

# Main program
my_list = []

while True:
    print("\nMENU:")
    print("1. Create a List")
    print("2. Update the first element with 'X' and delete the middle element")
    print("3. Add names and check for 'python'")
    print("4. Display the list")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == '1':
        create_list()
    elif choice == '2':
        update_and_delete()
    elif choice == '3':
        add_names_and_check_python()
    elif choice == '4':
        display_list()
    elif choice == '5':
        print("Exiting the program.")
        break
    else:
        print("Invalid choice. Please enter a valid option.")
