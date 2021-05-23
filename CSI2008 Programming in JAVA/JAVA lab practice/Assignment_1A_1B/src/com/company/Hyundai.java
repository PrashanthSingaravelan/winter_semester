package com.company;
import java.sql.*;
import java.util.Calendar;
import java.util.Scanner;

public class Hyundai {
    String model;        /* baleno, ciaz, s-cross, xl-6 */
    String color;        /* red, blue, white, black */
    String engine_type;  /* Automatic, Automated Manual Transmission(AMT), Manual */
    String fuel_type;    /* petrol, diesel */
    int unit_price;      /* price of the car from the factory */
    int payment;        /* payment made by the customer */

                        /* Paramterized Constructor */
    Hyundai(String data) {
        try {
            Connection con = DriverManager.getConnection    /*creating the connection*/
            ("jdbc:sqlite:C://WinterSemester-2021//CSI2008 Programming in JAVA//JAVA lab practice//Assignment_1A_1B//cars1.db");

            Statement stm = con.createStatement(); // creating the statem
            stm.execute("SELECT * FROM nexa WHERE model ='" + data + "'");
            ResultSet result = stm.getResultSet();   // output of the query is stored in result

            while (result.next()) {
                this.model = result.getString("model");
                this.color = result.getString("color");
                this.engine_type = result.getString("engine_type");
                this.fuel_type   = result.getString("fuel_type");
                this.unit_price  = result.getInt("unit_price");
            }
            result.close();

            con.setAutoCommit(true);
            stm.close();
            con.close();
        }
        catch (SQLException e) {
            System.out.println("Some-thing went wrong " + e.getMessage());
        }
    }
                    /* To display all the car details */
    public void Display() {
        System.out.println("model : " + this.model + "   " +
                "color : "      + this.color + "   " +
                "engine_type : " + this.engine_type + "   " +
                "fuel_type : "   + this.fuel_type + "   " +
                "unit_price : " + this.unit_price);
    }

                        /* Paramterized Constructor */
    Hyundai(String user_model,String user_color, String user_engine_type,String user_fuel_type,int user_unit_price) {
        this.model = user_model;
        this.color = user_color;
        this.engine_type = user_engine_type;
        this.fuel_type   = user_fuel_type;
        this.unit_price = user_unit_price;
    }

    public void Authorize(Hyundai[] obj1) {
        int flag = 0;
        for (int i = 0; i < 5; i++) {
            if (this.unit_price == (obj1[i].unit_price/2)) {
                flag = 1;
            }
        }
        if (flag==1) {
            this.Order_Processing(obj1);
        }
        else if (flag==0){
            System.out.println("Customer, please make your half payment");
        }
    }

    public void Order_Processing(Hyundai[] obj1) {
        System.out.println("Order processing is going on");
        int flag = 0;
            /*Checking the availability of stocks*/
        for (int i=0;i<5;i++) {
            if (
                    (this.model.equals(obj1[i].model)) &&
                    (this.color.equals(obj1[i].color)) &&
                    (this.engine_type.equals(obj1[i].engine_type)) &&
                    (this.fuel_type.equals(obj1[i].fuel_type))
                    /*(this.unit_price >= (obj1[i].unit_price)/2)*/
            ) {
                flag = 1;
            }
        }

            if (flag==1) {
                this.Deliver_Order();
            }
            else {
                this.Production_Order();
            }
    }

    public void Deliver_Order() {
        System.out.println("//////////////////////////////////////////////////////////////////////////");
        System.out.println("Delivery order is sent to the customer");
        System.out.println("Owner name : Prashanth");
        System.out.println("Car model : " + this.model);
        System.out.println("Color : " + this.color);
        System.out.println("Fuel type : " + this.fuel_type);

        Calendar cal = Calendar.getInstance();
        cal.add(Calendar.DATE, +10);
        System.out.println("Delivery date from 10 days of purchase : " + cal.getTime());
    }

    public void Production_Order() {
        System.out.println("//////////////////////////////////////////////////////////////////////////");
        System.out.println("Production order is sent to the factory");

        System.out.println("Production branch name : Avadi");
        System.out.println("Showroom address : No:47,Avadi,Chennai-54");
        System.out.println("Car model : " + this.model);
        System.out.println("Color : " + this.color);
        System.out.println("Engine type : " + this.engine_type);

        Calendar cal = Calendar.getInstance();
        cal.add(Calendar.DATE, +20);
        System.out.println("Delivery date from 20 days of purchase : " + cal.getTime());
    }
}
/*

package com.company;

        import java.sql.*;
        import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try {

 */
    /*
            /*  Data-base creation  */
            Connection con = DriverManager.getConnection    /*creating the connection*/
                    ("jdbc:sqlite:C://WinterSemester-2021//CSI2008 Programming in JAVA//JAVA lab practice//Assignment_1A_1B//cars1.db");

            Statement stm = con.createStatement(); // creating the statement object

            stm.execute(
                    "CREATE TABLE IF NOT EXISTS nexa" +
                            "(model text,color text,engine_type text , fuel_type text,unit_price int)");

            stm.execute("INSERT INTO nexa VALUES ('baleno', 'blue', 'Automatic', 'petrol',700000)");
            stm.execute("INSERT INTO nexa VALUES ('ciaz', 'red', 'Automated_Manual_Transmission', 'petrol', 900000)");
            stm.execute("INSERT INTO nexa VALUES ('s-cross', 'black', 'Manual', 'petrol', 1100000)");
            stm.execute("INSERT INTO nexa VALUES ('xl-6', 'red', 'Manual', 'petrol', 1000000)");
            stm.execute("INSERT INTO nexa VALUES ('swift', 'white', 'Automatic', 'diesel', 500000)");

            con.setAutoCommit(true);
            stm.close();
            con.close();
        }


        catch (SQLException e) {
            System.out.println("Some-thing went wrong " + e.getMessage());
        }

        Hyundai[] obj1;
        obj1 = new Hyundai[5];

        obj1[0] = new Hyundai("baleno");
        obj1[1] = new Hyundai("ciaz");
        obj1[2] = new Hyundai("s-cross");
        obj1[3] = new Hyundai("xl-6");
        obj1[4] = new Hyundai("swift");

        /* Showing the available cars in the showroom to the customer */
        System.out.println("The car avaiable in Show-room");
        System.out.println("//////////////////////////////////////////////////////////////////////////");
        for(int i=0;i<5;i++)  {  obj1[i].Display(); }
        System.out.println("//////////////////////////////////////////////////////////////////////////");

        /* Getting input from the customer */
        Scanner input = new Scanner(System.in);
        String user_model,user_color,user_engine_type,user_fuel_type;
        int user_unit_price;

        System.out.println("//////////////////////////////////////////////////////////////////////////");
        System.out.println("Enter the model : ");
        user_model = input.nextLine();

        System.out.println("Enter the color : ");
        user_color = input.nextLine();

        System.out.println("Enter the engine type : ");
        user_engine_type = input.nextLine();

        System.out.println("Enter the fuel type : ");
        user_fuel_type = input.nextLine();

        System.out.println("Make your half payment : ");
        user_unit_price = input.nextInt();

        /* Creating a user object */
        Hyundai user = new Hyundai(user_model,user_color,user_engine_type,user_fuel_type,user_unit_price);
        user.Authorize(obj1);

    }
    */



