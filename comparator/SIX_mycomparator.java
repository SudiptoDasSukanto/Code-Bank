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
class person implements Comparator<person>{
    String name;
    int expense;

    @Override
    public int compare(person p1, person p2) {
        if (p1.expense > p2.expense) return 1;
        else                         return -1;
    }
}
public class SIX_mycomparator {
    public static void main(String args[]){
        person p[] = new person[10];
        int expenses[] = {3, 2, 3, 55, 43, 1, 3, 4, 56, 77};
        String names[] = {};
        for (int i = 0; i < 10; i++){
            person pp = new person();
            pp.expense = expenses[i];
            pp.name = "name_" + Integer.toString(i);
            p[i] = pp;
        }
        
        for (person o : p){
            System.out.println("Name: " + o.name + ", expense: " + o.expense);
        }
        
        TreeSet<person> treep = new TreeSet<person>(new person());
        for (person o : p){
            treep.add(o);
        }
        System.out.println("After treeSet...");
        for (person o : treep){
            System.out.println("Name: " + o.name + ", expense: " + o.expense);
        }
//        System.out.println(treep);
    }

    }

