package javabasics_netbeans;
import java.util.Scanner;
import java.io.*;
import java.lang.*;
import java.util.*;
 
public class JavaBasics_netbeans {
    static void zerosones(int arr1[]) {
        int zeros [] = new int[256];
        int ones []  = new int[256];

        List<Integer> zeroslist = new ArrayList<Integer>(Arrays.asList(zeros));
        List<Integer> oneslist  = new ArrayList<Integer>(Arrays.asList(ones));

        for(int i=0;i<arr1.length;i++) {

            if (arr1[i]==0) {
                zeros.add(arr1[i]);
            }
            else if (arr1[i]==1) {
                ones.add(arr1[i]);
            }
        }
        zeros = arrlist.toArray(zeroslist);
        ones  = arrlist.toArray(oneslist);

        System.out.println("Main array : " + Arrays.toString(arr1));
        System.out.println("Zero array : " + Arrays.toString(zeros));
        System.out.println("One array  : " + Arrays.toString(ones));
    }

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);  // creating the input object

        System.out.print("Enter the number of elements : ");
        int n = input.nextInt();
        int arr1[] = new int[n];  // declaring the array

        System.out.print("Enter the array elements : ");
        for(int i=0;i<5;i++) {
            arr1[i] = input.nextInt();
        }
        //Odd_Even(arr1);
    }
 }
