/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package myExceptionHandling;

/**
 *
 * @author DELL
 */
public class Two_singleCatchFinally {
    public static void main(String argsp[]){
        int a = 1, b = 0;
        try {
            System.out.println("Value: " + a/b);
            System.out.println("Something");
        } catch (Exception e){
            System.out.println("Exception caught: " + e);
        }
        finally {
            System.out.println("Inside finally block.");
        }
        System.out.println("After try-catch-finally statement.");
    }
}