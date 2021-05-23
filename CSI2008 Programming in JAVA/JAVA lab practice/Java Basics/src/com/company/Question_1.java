package com.company;
import java.util.*;

public class Question_1 {
    String str1;

    public String front_rear(String str1){
        return(str1.charAt(str1.length()-1) + str1 + str1.charAt(str1.length()-1));
    }

    public String twist(String str2) {
        return(str2.charAt(str2.length()-1) + str2.substring(1,str2.length()-1) + str2.charAt(0));

    }

    public static void main(String[] args) {
        Main obj1 = new Main();

        System.out.print("Enter a string : ");
        Scanner input =new Scanner(System.in);
        String str1 = input.nextLine();
        System.out.println("Output is : " + obj1.front_rear(str1));

        System.out.print("Enter a string : ");
        String str2 = input.nextLine();
        System.out.println("Output is : " + obj1.twist(str1));

    }
}
}
