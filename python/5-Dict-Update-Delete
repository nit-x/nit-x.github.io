def create_dictionary():
    global my_dict
    my_dict = {}
    size = int(input("Enter the size of the dictionary: "))
    for i in range(size):
        key = input(f"Enter key {i + 1}: ")
        value = input(f"Enter value for {key}: ")
        my_dict[key] = value
    print("Dictionary created successfully!")

def update_and_concatenate():
    global my_dict
    key = input("Enter the key to update/concatenate: ")
    if key in my_dict:
        new_value = input("Enter the new value to update/concatenate: ")
        my_dict[key] = new_value
        print("Value updated successfully!")
    else:
        print(f"Key '{key}' not found in the dictionary.")

def delete_item():
    global my_dict
    key = input("Enter the key to delete: ")
    if key in my_dict:
        del my_dict[key]
        print(f"Key '{key}' and its value deleted successfully!")
    else:
        print(f"Key '{key}' not found in the dictionary.")

def map_lists_to_dict():
    global my_dict
    keys = input("Enter keys separated by space: ").split()
    values = input("Enter values separated by space: ").split()

    # Mapping two lists into a dictionary
    if len(keys) == len(values):
        my_dict = dict(zip(keys, values))
        print("Lists mapped into dictionary successfully!")
    else:
        print("Number of keys and values should be the same.")

def display_dictionary():
    global my_dict
    print("Current Dictionary:", my_dict)

# Main program
my_dict = {}

while True:
    print("\nMENU:")
    print("1. Create a key/value pair dictionary")
    print("2. Update/Concatenate an item in the dictionary")
    print("3. Delete an item from the dictionary")
    print("4. Map two lists into a dictionary")
    print("5. Display the dictionary")
    print("6. Exit")

    choice = input("Enter your choice: ")

    if choice == '1':
        create_dictionary()
    elif choice == '2':
        update_and_concatenate()
    elif choice == '3':
        delete_item()
    elif choice == '4':
        map_lists_to_dict()
    elif choice == '5':
        display_dictionary()
    elif choice == '6':
        print("Exiting the program.")
        break
    else:
        print("Invalid choice. Please enter a valid option.")
