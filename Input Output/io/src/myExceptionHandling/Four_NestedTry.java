/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package myExceptionHandling;

/**
 *
 * @author DELL
 */
public class Four_NestedTry {
    public static void main(String args[]){
        int a = 1, b = 9;
        int arr[] = new int[5];
        try {
            System.out.println("Value: " + a/b);
            System.out.println("Something.");
            try {
                System.out.println("6th element: " + arr[5]);
            } catch (Exception e){
                System.out.println("Inside inner try-catch: " + e);
            }
            finally {
                System.out.println("Inside finally of inner try.");
            }
            System.out.println("After inner try.");
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