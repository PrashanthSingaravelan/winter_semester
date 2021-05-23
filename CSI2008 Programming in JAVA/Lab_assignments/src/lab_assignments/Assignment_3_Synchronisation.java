package lab_assignments;

class Ticket_counter {
    
   synchronized public void Printing() {
          Counter.count++;  
          System.out.println(Thread.currentThread().getName() + "   ticket_no : " + (Counter.count-1));         
   }
     
    public void booking() {   // ctustomer is printing (i.e actual booking) the ticket and then sleeping
    while (Counter.count<=50) {   Printing() ;   try{  Thread.sleep(1000);}   catch (Exception e) { };      }
    }
    
}
        
class Counter extends Thread {
    Ticket_counter obj1 = new Ticket_counter();  
    public static int count=1;
    
    Counter(String name)     {   super(name);       }
    public void run()             {   obj1.booking();      }
}

public class Assignment_3_Synchronisation {
    public static void main(String args[]) {
        Ticket_counter obj1 = new Ticket_counter();  
                  
          Counter th1 = new Counter("Counter-1");
          Counter th2 = new Counter("Counter-2");
          Counter th3 = new Counter("Counter-3");
          
          // At a time all the coustomers entering the ticket counter
          th1.start();             th2.start();          th3.start();      
          
          try {  th1.join();      th2.join();     th3.join(); } catch(InterruptedException e) {} ;      
    }
}