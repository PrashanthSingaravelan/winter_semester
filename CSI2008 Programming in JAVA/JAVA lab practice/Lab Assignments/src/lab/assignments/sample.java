import java.util.logging.Level;
import java.util.logging.Logger;

class Balance{
    int Netbalance=0;
    Boolean turn=false; 
    Balance(int nb){
        Netbalance=nb;
    }
    synchronized public void credit(int amt)
    {
        while(!turn){
            try{
                wait();
            }
            catch (InterruptedException e)
            {
                System.out.println(e);
            }
        }
        Netbalance+=amt;
        notifyAll();
        System.out.println("Successfully credited..");
    }
    synchronized public void debit(int amt)
    {
        while(turn)
        {
           try{
                wait();
            }
            catch (InterruptedException e)
            {
                System.out.println(e);
            } 
        }
        Netbalance-=amt;
        notifyAll();
        System.out.println("Successfully credited..");
    }
    public int get(){
        return Netbalance;
    }
    
}


class Cashier extends Thread{
    String mode_str="";
    int amount=0;
    Balance b;
    Cashier(String mode,int amt)
    {
       
        mode_str=mode;
        amount=amt;
    }
    
    @Override
    public void run(){
        if(mode_str.equals("Credit"))
        {
            b.credit(amount);
        }
        else if(mode_str.equals("Debit"))
        {
            b.debit(amount);
        }
        else{
            System.out.println("Invalid operation");
        }
    }
}

public class sample {

   
    public static void main(String[] args) {
        Balance b =new Balance(20000);
        Cashier c1 = new Cashier("Debit",1000);
        Cashier c2 = new Cashier("Credit",1000);
        Cashier c3 = new Cashier("Credit",1000);
        c1.start();
        c2.start();
        c3.start();
        try {
            Thread.sleep(1000);
        } catch (InterruptedException ex) {
            Logger.getLogger(sample.class.getName()).log(Level.SEVERE, null, ex);
        }
        int bal=b.get();
        System.out.println("Balance : "+bal);
    }
    
}