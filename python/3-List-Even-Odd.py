def create_list():
    global main_list
    size = int(input("Enter the size of the list: "))
    main_list = []
    for i in range(size):
        element = int(input(f"Enter element {i + 1}: "))
        main_list.append(element)
    print("List created successfully!")
    

def separate_even_odd():
    global main_list, even_list, odd_list
    if len(main_list) > 0:
        even_list = [element for element in main_list if element % 2 == 0]
        odd_list = [element for element in main_list if element % 2 != 0]
        print("Even and odd elements separated into two different lists.")
    else:
        print("No elements to separate in the main list")

def merge_and_sort():
    global even_list, odd_list, merged_list
    merged_list = even_list + odd_list
    merged_list.sort()
    print("Even and odd lists merged and sorted successfully.")

def find_max_min():
    global main_list
    if len(main_list) > 0:
        max_element = max(main_list)
        min_element = min(main_list)
        print(f"Maximum element in the list: {max_element}")
        print(f"Minimum element in the list: {min_element}")
    else:
        print("The main list is empty.")

def display_lists():
    global even_list, odd_list, main_list, merged_list
    print("Main List:", main_list)
    print("Even List:", even_list)
    print("Odd List:", odd_list)
    print("Merged List:", merged_list)

# Main program
main_list = []
even_list = []
odd_list = []
merged_list = []

while True:
    print("\nMENU:")
    print("1. Create a List")
    print("2. Separate even and odd elements")
    print("3. Merge and sort lists")
    print("4. Find max and min elements from the list")
    print("5. Display lists")
    print("6. Exit")

    choice = input("Enter your choice: ")

    if choice == '1':
        create_list()
    elif choice == '2':
        separate_even_odd()
    elif choice == '3':
        merge_and_sort()
    elif choice == '4':
        find_max_min()
    elif choice == '5':
        display_lists()
    elif choice == '6':
        print("Exiting the program.")
        break
    else:
        print("Invalid choice. Please enter a valid option.")
