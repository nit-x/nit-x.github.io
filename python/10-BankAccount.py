class BankAccount:
    def __init__(self, a, b, c):
        self.acount_num = a
        self.name = b
        if(c>=0):
            self.balance = c
        else:
            print("\nPlease enter valid amount.")
    def deposit(self):
        self.deposit = int(input("Enter deposit amount: "))
        if self.deposit>0:
            self.balance = self.balance +self.deposit
            print("\nAmount deposited.")
            print("Current balance:", self.balance)
        else:
            print("Please enter valid amount.")
    def withdrawal(self):
        self.withdraw = int(input("Enter withdraw amount: "))
        if self.withdraw>0 and self.withdraw<=self.balance:
            self.balance = self.balance - self.withdraw
            print("\nAmount withdrawed.")
            print("Current balance:", self.balance)
        else:
            print("\nPlease enter valid amount.")
    def calBankfees(self):
        self.bankfees = 0.05 * self.balance
    def display(self):
        self.calBankfees()
        print("\nAccount holder name:", self.name)
        print("Account number:", self.acount_num)
        print("Account balance:", self.balance)
        print("Bank fees:", self.bankfees)
        
    def __del__(self):
       pass
        
n = int(input("Enter account number: "))
nm = input("Enter account holder name: ")
b = int(input("Enter balance: "))

myAccount = BankAccount(n, nm, b)

choice=0
while(choice!=4):
    print("\n1. Deposit\n2. Withdrawal\n3. Display\n4. Exit")
    choice = int(input("Enter choice: "))

    if choice==1:
        myAccount.deposit()
    elif choice==2:
        myAccount.withdrawal()
    elif choice==3:
        myAccount.display()
    elif choice==4:
        exit(0)
    else:
        print("\nPlease enter valid choice.")
        
        
