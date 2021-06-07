package lab.assignments;

class bank {
          int Netbalance=1000;   // Currently the bank has the balance amout=10,000
          
          // debitting the amount from the bank ( balance money reduces)
         synchronized public void debit(String person_name,int amount)   {   
                this.Netbalance = this.Netbalance-amount;
                System.out.println(person_name + " is withdrawing Rs : "+ amount + " from the bank"
                        + " and the balance is : " + Netbalance);
                
            }
         
         // creditting the amount into the bank (balance money increases)
         synchronized public void credit(String person_name,int amount)  {  
                this.Netbalance = this.Netbalance + amount;
                System.out.println(person_name + " is crediting Rs : "+ amount + " into the bank"
                        + " and the balance is : " + Netbalance + "\n");
          }
}

class banking_operations extends Thread {
        String thread_name;
        int amount;
        bank obj_bank;  // main class
        
        banking_operations(String name_from_main,int amount_main, bank obj_main) {                 
                this.thread_name = name_from_main;
                this.obj_bank = obj_main;
                this.amount = amount_main;
        }
        
            public void operations() {  // calling the credit() and debit()
                    this.obj_bank.debit(this.thread_name,this.amount);
                    this.obj_bank.credit(this.thread_name,this.amount);
            }
            
             @Override
             // to do both the process credit and debit operations by the cashier and the executives
             public void run() {   
                      this.operations();
            }
}


public class fat_exam {
    public static void main(String[] args) throws Exception{
            System.out.println("The current balance in the bank : 1000\n");
            bank obj_bank = new bank();
           banking_operations cashier_1 = new banking_operations("Cashier_1",10,obj_bank);
           banking_operations cashier_2 = new banking_operations("Cashier_2",20,obj_bank);
           banking_operations cashier_3 = new banking_operations("Cashier_3",30,obj_bank);
           
           banking_operations manager = new banking_operations("Manager",40,obj_bank);
           banking_operations senior_manager = new banking_operations("Senior Manager",50,obj_bank);
           banking_operations atm_machine = new banking_operations("ATM_MACHINE",60,obj_bank);
           
           // starting the thread
           cashier_1.start();
           cashier_2.start();
           cashier_3.start();
           
            try{ Thread.sleep(200); 
                    manager.start();
                    senior_manager.start();
                    atm_machine.start();
           }catch(InterruptedException e){}
    }
}






















