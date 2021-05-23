package com.company;

public class Main
{
    static void fun1(int array[], int size)
    {
        int left = 0;
        int right = size-1;
        while (left < right)
        {

            while (left<right && array[left]==0 ) {
                    left++;
            }

            while (left<right && array[right]==1) {
                    right--;
            }

            if (right>left)   // If the conditions fail, put 0 in left and 1 in right, then decrement
            {
                array[right]=1;
                array[left]=0;
                right--;
                left++;

            }
        }
    }

public static void main(String[] args)
    {
        int array_2[] = {1,0,0,1,0,1,1,1,0};
        fun1(array_2, 9);
        System.out.println("The array elements are : ");
        System.out.println(java.util.Arrays.toString(array_2));
    }
}



/*
public class Main {

    public static void main(String[] args)
    {
        int[] array_1 = {11,20,31,44,24,89,90};
        System.out.println("The array elements are : ");
        System.out.println(java.util.Arrays.toString(array_1));

        int count_odd = 0;
        int count_even = 0;
        for(int i = 0; i < array_1.length; i++)
        {
            if(array_1[i] % 2 == 0)
                count_even = count_even + 1;
            else
                count_odd = count_odd + 1;
        }
        System.out.println("Even numbers : "+count_even);
        System.out.println("Odd numbers  : "+count_odd);
    }
}*/
