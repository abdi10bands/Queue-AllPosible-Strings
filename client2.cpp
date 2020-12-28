//CS311 Yoshii
//INSTRUCTION:
//Look for ** to complete this program 
//The string output should match my hw1queueDemo.out 

//=========================================================
//HW#: HW1P2 queue application (generate all strings)
//Your name: Abdiel Verdin
//Complier:  g++
//File type: client program client2.cpp
//===========================================================

using namespace std;
#include <iostream>
#include <stdlib.h>
#include <string>
#include "queue.h"

//Purpose of the program: Given a set of characters, we would like to generate and display all possible strings consisting of these characters
//Algorithm: We are going to have to loop through these following options: Remove a string and display it, add the string, then add tthe string, and again add the string , causing the queue to overflow 
int main()
{ 
  queue Qobject;
  // ** "A", "B", "C" in the queue
  string word1= "A";
  string word2= "B";
  string word3= "C";
  // ** while loop -- indefinitely
  int temp=0;
  Qobject.add(word1);
  Qobject.add(word2);
  Qobject.add(word3);
  while(temp!=1) 
    {
      try
	{//** 
	  string erased;
	 // Qobject.add(word1);
	 // Qobject.add(word2);
	 // Qobject.add(word3);
	  Qobject.remove(erased);
	  cout<<erased<<endl; 
	  Qobject.add(erased+word1);
	  Qobject.add(erased+word2);
	  Qobject.add(erased+word3);
	}
      // catches
      //	{ 
	  //**
	  catch (queue::Overflow)
	    {cerr << "Error: Overflow. Too many strings";  exit(1);}
	  catch (queue::Underflow)
	    {cerr << "Error: Underflow. Too few strings.";  exit(1);}
	  //	}
    }// end of loop

}

