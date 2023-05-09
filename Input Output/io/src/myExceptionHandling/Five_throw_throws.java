/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package myExceptionHandling;

import java.io.IOException;

/**
 *
 * @author DELL
 */
public class Five_throw_throws {

    static void throw_demo (Exception e) throws Exception{

        System.out.println("Inside throw_demo()");
        throw e;
        //  System.out.println("Unreachable");
    }
    static void throw_demo2 (Exception e) throws Exception{
        System.out.println("Inside throw_demo()");
        throw e;
        //  System.out.println("Unreachable");
    }
    public static void main(String args[]) throws Throwable{
        //  throw new ArithmeticException();
        // throw new ArrayIndexOutOfBoundsException();
        // throw new IOException();
        int a = 1, b = 0;
        try {
            System.out.println("Value: " + a/b);
        } catch (Exception e){
            System.out.println("Exception caught: " + e);

        }
        System.out.println("After try-catch statement.");

        throw_demo(new Exception());

        try {
            throw_demo2(new Exception());
        }
        catch (Exception e){
            System.out.println("Inside throw_demo()'s catch.");
        }
    }
}