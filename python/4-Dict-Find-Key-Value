def create_dictionary():
    global my_dict
    my_dict = {}
    size = int(input("Enter the size of the dictionary: "))
    for i in range(size):
        key = input(f"Enter key {i + 1}: ")
        value = input(f"Enter value for {key}: ")
        print()
        my_dict[key] = value
    print("Dictionary created successfully!")

def find_key_value():
    global my_dict
    key_to_find = input("Enter the key to find its value: ")
    if key_to_find in my_dict:
        print(f"The value for key '{key_to_find}' is '{my_dict[key_to_find]}'")
    else:
        print(f"Key '{key_to_find}' not found in the dictionary.")

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
    print("2. Find a key and print its value")
    print("3. Map two lists into a dictionary")
    print("4. Display the dictionary")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == '1':
        create_dictionary()
    elif choice == '2':
        find_key_value()
    elif choice == '3':
        map_lists_to_dict()
    elif choice == '4':
        display_dictionary()
    elif choice == '5':
        print("Exiting the program.")
        break
    else:
        print("Invalid choice. Please enter a valid option.")
