/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package myCollections;

import java.util.HashMap;
import java.util.TreeMap;

/**
 *
 * @author Muhammad Ibrahim
 */
public class THREE_myhashmap_and_treemap {
    public static void main(String [] args){
        HashMap<String, String> dict = new HashMap<String, String>();
        
        dict.put("kolom", "pen");
        dict.put("akash", "sky");
        dict.put("boi", "book");

        System.out.println(dict);
        
        for (String key : dict.keySet()){
            System.out.println(key);
        }

        for (String val : dict.values()){
            System.out.println(val);
        }

        System.out.println("Contains boi? " + dict.containsKey("boi"));
        System.out.println("Contains book? " + dict.containsValue("book"));

        System.out.println("Showing both at the same time...");
        int i = 0;
        for (HashMap.Entry<String, String> entry : dict.entrySet()){
            System.out.println("Pair: " + i++);
            System.out.println(entry.getKey());
            System.out.println(entry.getValue());
        }
        
        System.out.println("Now demonstrating treemap ...");
        TreeMap<String, String> tdict = new TreeMap<String, String>();
        tdict.put("kolom", "pen");
        tdict.put("akash", "sky");
        tdict.put("boi", "book");

        System.out.println(tdict);
        
        for (String key : tdict.keySet()){
            System.out.println(key);
        }
        for (String val : tdict.values()){
            System.out.println(val);
        }
    }
       
}
