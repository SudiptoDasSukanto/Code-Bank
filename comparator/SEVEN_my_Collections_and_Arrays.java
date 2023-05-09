/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package myCollections;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

/**
 *
 * @author Muhammad Ibrahim
 */
class anotherperson implements Comparator<anotherperson>{
    String name;
    int expense;
    
    
    @Override
    public int compare(anotherperson p1, anotherperson p2) {
        if (p1.expense > p2.expense) return -1;
        else if (p1.expense < p2.expense)  return 1;
        else {
                if (p1.name.compareTo(p2.name) < 0) return 1;
                else return -1;
                }
    }
}

public class SEVEN_my_Collections_and_Arrays {
    public static void main (String args[]){
        anotherperson p[] = new anotherperson[10];
        int expenses[] = {3, 2, 3, 55, 43, 1, 3,4 ,56, 77};
        String names[] = {};
        for (int i = 0; i < 10; i++){
            anotherperson pp = new anotherperson();
            pp.expense = expenses[i];
            pp.name = "name_" + Integer.toString(i);
            p[i] = pp;
        }
        
        for (anotherperson o : p){
            System.out.println("Name: " + o.name + ", expense: " + o.expense);
        }
        
        ArrayList<anotherperson> mylist = new ArrayList<anotherperson>();
        for (anotherperson o : p){
            mylist.add(o);
        }

        System.out.println("Before shuffling...");
        for (anotherperson o : mylist){
            System.out.println("Name: " + o.name + ", Expense: " + o.expense);
        }
        
        Collections.shuffle(mylist);
        
        System.out.println("After shuffling...");
        for (anotherperson o : mylist){
            System.out.println("Name: " + o.name + ", Expense: " + o.expense);
        }
        
        Collections.sort(mylist, new anotherperson());
        
        System.out.println("Showing after sorting...");
        for (anotherperson o : mylist){
            System.out.println("Name: " + o.name + ", Expense: " + o.expense);
        }

        System.out.println("Finally, the use of Arrays class .... ");
        int a [] = {3, 3, 56, 77, 2, 1, 45, 666, 2, 33};
        
        Arrays.sort(a);
        for (int v : a){
            System.out.println(v);
        }
        
        System.out.println(Arrays.binarySearch(a, 56));
        //System.out.println(a);
    }
     /*     Collections.sort(list_of_instances, new Comparator<Instance>(){
            public int compare(Instance s1, Instance s2) {
                //return s1.getFirstName().compareToIgnoreCase(s2.getFirstName());
                if (s1.value(att) > s2.value(att))
                    return 1;//ascending
                else if (s1.value(att) < s2.value(att))
                    return -1;
                else 
                    return 0;
            }
        });
*/   
}
