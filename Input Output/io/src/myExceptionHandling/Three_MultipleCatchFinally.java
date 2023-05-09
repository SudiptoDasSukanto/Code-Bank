/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package myExceptionHandling;

/**
 *
 * @author DELL
 * ME: lessons: (1) multiple catch blocks.
 *              (2) order of multiple catch blocks
 *              (3) finally block
 */
public class Three_MultipleCatchFinally {
    public static void main(String args[]){
        int a = 1, b = 9;
        int arr[] = new int[6];
        try {
            System.out.println("Value: " + a/b + "6th element: " + arr[6]);
            System.out.println("Something");
        }
        catch (ArithmeticException e){
            System.out.println("ArithmeticException caught: " + e);
        }
        catch (Exception e){
            System.out.println("Exception caught: " + e);
        }
        //finally block is optional
        finally {
            System.out.println("Inside finally block.");
        }
        System.out.println("After try-catch-finally statement.");
    }
}