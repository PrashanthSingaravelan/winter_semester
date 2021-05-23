package com.company;

import java.sql.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try {
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
