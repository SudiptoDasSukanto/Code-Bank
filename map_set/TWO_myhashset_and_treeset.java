/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package myCollections;

import java.util.HashSet;
import java.util.SortedSet;
import java.util.TreeSet;

/**
 *
 * @author Muhammad Ibrahim
 */
public class TWO_myhashset_and_treeset {
    public static void main(String args[]){
       HashSet<String> myset = new HashSet<String>();
       myset.add("Bird");       
       myset.add("Apple");    
       myset.add("Sun");
       System.out.println(myset);
       
       myset.remove("Bird");
        System.out.println(myset.contains("Bird"));
    //myset.clear();
        HashSet<Character> hsc = new HashSet<Character>();
        for (int i = 65; i <= 'Z'; i++){
            hsc.add((char)i);
        }
        System.out.println(hsc);
        
//        System.out.println(myset.contains("a"));
  //      System.out.println(myset.toString());

        TreeSet<String> ts = new TreeSet<String>();
        ts.add("Bird");       
       ts.add("Apple");    
       ts.add("Sun");
       ts.add("Zoo");
       System.out.println(ts);
       
        SortedSet<String> newts = ts.subSet("Bird", "Zoo");
        System.out.println(newts);
    }
}

