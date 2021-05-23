package lab.assignments;

class Account {
           String acc_no;
           String name;
           int balance;

Account(String user_acc_no, String user_name, int user_balance) {  // general details for opening a bank account
           this.acc_no   = user_acc_no;
           this.name     = user_name;
           this.balance = user_balance;
}

void Statement() {
           System.out.println("Your Bank details");
           System.out.println("Account no : " + this.acc_no);
           System.out.println("User Name : " + this.name);
           System.out.println("Balance : " + this.balance);
    }

                               // Defining a user defined exception
void Deposit_negative(int amount) throws Exception   {
    if (amount<0)  {  // amount should not be -ve
        throw new Exception ("Amount cannot be negative");
    }
    else {
        this.balance = this.balance + amount;
    }
}

void Deposit(int amount) {
    try {
                    Deposit_negative(amount);
    }
    catch(Exception obj) {
                    System.out.println("Exception from Deposit_negative : " + obj);
    }
}
                              
                                // Defining a user defined exception
void Withdraw_insufficient(int amount) throws Exception {
    if (    (amount < this.balance) && ((this.balance-amount)<5000)) {
        throw new Exception ("In-sufficient balance");
    }
     else {
           this.balance = this.balance - amount;
    }
}

void Withdraw(int amount) {
           try {
               Withdraw_insufficient(amount);
           }
           catch (Exception obj){
               System.out.println("Exception from Withdraw_insufficient" + obj);
           }
}

}

class Loan extends Account {
          int loan_user_salary , loan_user_amount;
           
          Loan(String user_acc_no, String user_name, int user_balance,int user_salary,int loan_amount) {
                     super(user_acc_no, user_name, user_balance);
                     this.loan_user_salary = user_salary;
                     this.loan_user_amount = loan_amount;
          }
           
          void Loan_Exception() throws Exception {
                 if (   (this.loan_user_amount) > (this.loan_user_salary + ((0.75)*this.loan_user_salary))   ) {
                                throw new Exception("You Loan request is not accepted");
                   }
          }
           
          void Loan_amount() {
               try {
                   if (   (this.loan_user_amount) <= (this.loan_user_salary + ((0.75)*this.loan_user_salary))   ) {
                                System.out.println("SUCCESS --> You Loan request is accepted");
                   }
                            else {
                                    Loan_Exception();
                                                }            
                    }
               catch(Exception obj) {
                   System.out.println("EXCEPTION : " + obj);
               }
          }
}

class Credit_card extends Account {
          int credit_user_salary , credit_user_amount;
           
          Credit_card(String user_acc_no, String user_name, int user_balance,int user_salary,int credit_amount) {
           super(user_acc_no, user_name, user_balance);
           this.credit_user_salary = user_salary;
           this.credit_user_amount = credit_amount;
        }
           
          void Credit_Swipe_Exception() throws Exception {
                 if (   (this.credit_user_amount) > (this.credit_user_salary + ((0.25)*this.credit_user_salary))   ) {
                                throw new Exception("You cannot swipe your quoted amount");
                   }
           }
           
          void Credit_Swipe() {
               try {
                     if (   (this.credit_user_amount) <= (this.credit_user_salary + ((0.25)*this.credit_user_salary))   ) {
                                System.out.println("SUCCESS --> You can swipe your quoted amount");
                     }
                     else            {
                                            Credit_Swipe_Exception();
                               }
                    }
               
               catch(Exception obj) {
                   System.out.println("EXCEPTION : " + obj);
               }
          }
}

public class Assignment_2 {
    public static void main(String args[]) {        
        // getting details from the user to open a bank account
        Account obj1 = new Account("19MID1000","GilChrist",10000);
        obj1.Deposit(-1000);
        obj1.Withdraw(7000);
        
        // generating a statement
        obj1.Statement();   
        
                        // getting details from the user to apply for a loan
        System.out.println("LOAN PROCEDURE");
        Loan obj2 = new Loan("19MID0020","Prashanth",50_000,1_00_000,1_76_000);
        obj2.Loan_amount();
        
        // generating a statement
        obj2.Statement();    
        
        // getting details from the user to swipe the credit card       
        System.out.println("CREDIT PROCEDURE");
        Credit_card obj3 = new Credit_card("19MID1017","Ben Stokes",50_000,1_00_000,1_26_000);
        obj3.Credit_Swipe();
        
        // generating a statement
        obj3.Statement();
    }
 }





