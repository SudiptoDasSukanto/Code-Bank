/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package myExceptionHandling;

/**
 *
 * @author DELL
 * ME: This is the fist example demonstrating a single catch block.
 */
public class One_DevideByZero {
    public static void main(String args[]){
        int a = 1, b = 0;
        try {
            System.out.println("Value: " + a/b);
            System.out.println("Something.");
        } catch (Exception e){
            System.out.println("Exception caught: " + e);
        }
        System.out.println("After try-catch statement.");

    }
}