/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package myCollections;

import java.util.Comparator;
import java.util.TreeSet;

/**
 *
 * @author Muhammad Ibrahim
 */
class MyComp implements Comparator<String> {
    @Override
    public int compare(String aStr, String bStr) {
        //default implementation of this compare method returns -ve 
        //if aStr precedes bStr
    // Reverse the comparison.
        return bStr.compareTo(aStr);//negative if bStr precedes aStr
    }
    // No need to override equals or the default methods.
}
public class FIVE_CompDemo {
    public static void main(String args[]) {
    // Create a tree set.
        TreeSet<String> ts = new TreeSet<String>(new MyComp());
        // Add elements to the tree set.
        ts.add("C");
        ts.add("A");
        ts.add("B");
        ts.add("E");
        ts.add("F");
        ts.add("D");
        // Display the elements.
        for(String element : ts)
            System.out.print(element + " ");
        System.out.println();
    }
}
