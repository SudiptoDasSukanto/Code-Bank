/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package myCollections;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.ListIterator;


/**
 *
 * @author Muhammad Ibrahim
 */
/**
 *
 * @author Ibrahim
 */
class userdefined{
    int a;
    String name;
}
public class ONE_myarraylist_and_linkedlist {
    static void show (ArrayList<Integer> list){
        System.out.println("Printing the arraylist...");
        for (int val : list){
            System.out.print(val + " ");//auto-unboxing is being performed
        }
        System.out.println("");
    }
    public static void main (String args[]){
        //class ArrayList<T> { 
         //  ArrayList(){
        ArrayList<Integer> mylist = new ArrayList<Integer>();
        for (int i=0; i < 10; i++){
            mylist.add(i);//autoboxing
        }
        show(mylist);
        System.out.println(mylist);//this works bcz toString() is overridden 
        //in ArrayList class as such.
        
        mylist.add(3, 1000);
        show(mylist);
        
        System.out.println(mylist.contains(100000));
        System.out.println(mylist.contains(9));
        
        System.out.println("Value at index 5: " + mylist.get(5));
        //mylist.equals(myanotherlist);
        
        System.out.println("Index of 1000: " + mylist.indexOf(1000));
        
        Integer array[] = new Integer[mylist.size()];
        array = mylist.toArray(array);
        for (int i = 0; i < array.length; i++){
            System.out.print(array[i] + " ");
        }
        System.out.println("");
        
        
        System.out.println("Iterator...");
        Iterator<Integer> it;
        it = mylist.iterator();
        while(it.hasNext()){
            System.out.println(it.next());
        }

        System.out.println("ListIterator...");
        System.out.println(mylist.size());
        ListIterator<Integer> lit = mylist.listIterator(10);
        while(lit.hasPrevious()){
            System.out.println(lit.previous());
        }
        
        mylist.size();
        mylist.clear();
        show(mylist);

        System.out.println("Now demonstrating linked list ...");
        LinkedList<Integer> mylinkist = new LinkedList<Integer>();
        for (int i = 0; i < 10; i++){
             mylinkist.add(i);
        }
        System.out.println(mylinkist);
        
         mylinkist.addFirst(10);
        System.out.println( mylinkist);


    }
}
