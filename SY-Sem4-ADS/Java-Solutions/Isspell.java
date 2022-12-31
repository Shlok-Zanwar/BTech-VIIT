import java.util.*;

import java.io.*;
public class Isspell
{
public static  Hashtable <Character,LinkedList<String>> hash = new Hashtable <>();
//function to create a file containing hashtable 
public static void filecreate() {
char q; 
do
{
    System.out.println("Enter a String");
    Scanner in = new Scanner (System.in);
    String s=in.nextLine(); 
    char f=s.charAt(0); //extract 1st char key
       if (hash.get(f) == null )
    {
        LinkedList <String> newlist = new LinkedList <String>(); 
        newlist.add(s); //value
        hash.put(f,newlist);
    } 
    else
    {
      LinkedList <String> oldlist = hash.get(f);
      oldlist.add(s);
        hash.put(f,oldlist);
    }
System.out.println("The hash table is" + hash); 
System.out.println("Continue press y/n");
q=in.next().charAt(0);
} while(q!='n');

try {
    FileOutputStream fileOut = new FileOutputStream("hash.txt");
    ObjectOutputStream objectOut = new ObjectOutputStream(fileOut); 
    objectOut.writeObject(hash);
    objectOut.close();
    System.out.println("The HASH TABLE was succesfully written to the file");
    } 
catch (Exception e) {
    System.out.println(e);
        }
}
//function to implement ispell
public static int isspell()
{
Scanner in = new Scanner(System.in);
String input="";
System.out.println("Input : ---"); 
input = in.nextLine();
char x = input.charAt(0); 
try {
    FileInputStream fileIn = new FileInputStream("hash.txt");
    ObjectInputStream objectIn = new ObjectInputStream (fileIn);
    Hashtable<Character,LinkedList<String>> nhash = (Hashtable <Character,LinkedList<String>>) objectIn.readObject();
    LinkedList <String> list = nhash.get(x); 
    ArrayList <String> match = new ArrayList<>();
if (list == null) {System.out.println("\nNO RESULTS"); return 0;}
int n = list.size();
int i;
for (i=0 ; i<n ; i++)
{
String word = list.get(i); 
if(word.contains(input))
{
    match.add(word);
}
}
if(match.size() == 0) { System.out.println("No results") ; }
else { System.out.println("Did you mean : \n" + match ); }
objectIn.close();
} catch(FileNotFoundException e) {System.out.println(e);} catch(IOException e) {System.out.println(e);} catch(ClassNotFoundException e) {System.out.println(e);} return 0;
}

public static void main (String[] args) {
do
{
System.out.println("1. Create Hashtable \n 2. Enter Word \n 3. exit ------ ");
Scanner in =new Scanner (System.in);
int x = in.nextInt() ;
int flag =1 ;
switch(x)
{
case 1: filecreate();break;
case 2:
isspell();
break;
case 3: System.exit(0);
}
}while (true);
}
}