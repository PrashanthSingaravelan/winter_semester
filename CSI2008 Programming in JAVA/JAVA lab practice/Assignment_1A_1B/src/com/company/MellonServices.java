package com.company;

public class MellonServices {
    int trans_id;
    String name;
    String date;            // Date date
    String account_number;
    int balance_share;  // To maintain balance shares after adding/deleting the share
    int balance_amount; // To maintain balance amount after adding/deleting the share
    int divident;

    MellonServices(int id,String name,String date,String acc_number,int b_share,int b_amount,int b_divident) {
        this.trans_id = id;
        this.name = name;
        this.date = date;
        this.account_number = acc_number;
        this.balance_share = b_share;
        this.balance_amount = b_amount;
        this.divident = b_divident;
    }

                        /* Consider the Price of 1 share --> Rs 20*/
    public void Buy_share(int share) {
        if (balance_amount >= (share * 10)) {
            this.trans_id +=1;
            this.balance_share = this.balance_share + share;    /* balance share increases */
            this.balance_amount = this.balance_amount - (share * 20);   /* balance amount decreases */
        }
    }

                        /* Consider the Price of 1 share --> Rs 10*/
    public void Sell_share(int share) {
        if (balance_share >= share) {
            this.trans_id +=1;
            this.balance_share = this.balance_share - share;   /* balance share decreases */
            this.balance_amount = this.balance_amount + (share * 10);   /* balance amount increases */
        }
    }

    public void Dividend() {
        this.trans_id +=1;
        this.balance_amount = this.balance_amount + (this.balance_amount * (this.divident/100));
    }

    public void Display(){
        System.out.println("\nTransaction_ID        "
                           +"Name       "
                           +"Bank_acc       "
                           +"Date       "
                           +"Share_buy_value        "
                           +"Share_sell_value       "
                           +"Dividend       "
                           +"Account_balance        "
                );

        System.out.println("------------------------------------------------------------" +
                "-------------------------------------------------------------------------");

        System.out.println(this.trans_id + "                     "
                    + this.name + "    "
                    + this.account_number + "       "
                    + this.date + "        "
                    + "20" + "              "
                    + "10" + "                      "
                    + this.divident + "             "
                    + this.balance_amount) ;
    }
}


                                /*Main method*/
/*    public static void main(String[] args) {
        MellonServices obj1 = new MellonServices(1,"Prashanth", "2020-02-08", "2ABC123", 25, 1000,5);
        MellonServices obj2 = new MellonServices(2,"William", "2020-11-23", "9PQR456", 30, 1500,10);
        MellonServices obj3 = new MellonServices(3,"Monica", "2019-04-29", "8XYZ789", 40, 2000,15);

        System.out.println("      ##################            Before transactions            ####################");
        obj1.Display();
        obj2.Display();
        obj3.Display();

        obj1.Buy_share(30);  // Prashanth wants to buy 10 shares
        obj1.Buy_share(20);  // William wants to buy 30 shares
        obj1.Buy_share(10);  // Monica wants to buy 40 shares

        obj1.Sell_share(5);  // Prashanth wants to sell 5 shares
        obj2.Sell_share(10); // William wants to sell 10 shares
        obj3.Sell_share(15); // Monica wants to sell 15 shares

        obj1.Dividend();        // Prashanth wants to give divident as  5%
        obj1.Dividend();        // William wants to give divident as  10%
        obj1.Dividend();        // Monica wants to give divident as  15%

        System.out.println();
        System.out.println("      ##################            After transactions            ####################");
        obj1.Display();
        obj2.Display();
        obj3.Display();
    }*/




