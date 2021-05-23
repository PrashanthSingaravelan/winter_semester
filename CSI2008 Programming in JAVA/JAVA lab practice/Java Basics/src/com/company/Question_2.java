package com.company;
import java.util.*;
import java.util.Arrays;

public class Main
{
    static void Odd_Even(int arr1[]) {
        int count_even = 0;
        int count_odd  = 0;

        for (int i = 0; i < arr1.length; i++) {
            if (arr1[i] % 2 == 0) {
                count_even = count_even + 1;
            } else if (arr1[i] % 2 != 0) {
                count_odd = count_odd + 1;
            }
        }
        System.out.println("Number of Evens : " + count_even);
        System.out.println("Number of Odds  : " + count_odd);
    }

    static void Zeros_ones(int arr1[]) {
        List<Integer> zeros = new ArrayList<>();
        List<Integer> ones = new ArrayList<>();

        for(int i=0;i<arr1.length;i++) {

            if (arr1[i] == 0) {
                zeros.add(0);
            } else if (arr1[i] == 1) {
                ones.add(1);
            }
        }

        /*System.out.println("Main array : " + Arrays.toString(arr1));
        System.out.println("Zero array : " + zeros);
        System.out.println("One array  : " + ones);*/

        List<Integer> combined = new ArrayList<Integer>();
        combined.addAll(zeros);
        combined.addAll(ones);

        System.out.println("0's on left and 1's on right : " + combined);
    }

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);  // Creating the input object

        System.out.print("Enter the number of elements : ");
        int n = input.nextInt();
        int arr1[] = new int[n];  // Declaring the array

        System.out.print("Enter the array elements : ");
        for(int i=0;i<5;i++) {
            arr1[i] = input.nextInt();
        }
        Odd_Even(arr1);
        Zeros_ones(arr1);
    }
}
