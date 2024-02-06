import math

'''
    ---------------------------------------------------------------------------------------------                                                                                          
                        Welcome to the Univerisal 369 Matrix (u369m)                              
            This program will find the u369m within an infinite amount of numbers                 
                                                                                                  
                           Written by: The Lonely Programmer ©2024                                
                                ASCII Rabbit by: Linda Ball                                       
                                                                                                  
     three69 scans through the set of numbers starting from 0 adding each digit in each           
     number within the set of numbers to each other. We call these u369m variables.               
     u369m variables are found only through addition to break down to ints 3, 6, 9.               
     Each u369m variable is found every 3 beats. Every known object in the universe               
     consists of the u369m. u369m is an irrational sequence and is attached to both               
     Space and Time. u369m can be found in within the 12hr-clock and the 24hr-clock.              
     The u369m sequence is also attached to 9s stairway to heaven with the number line.           
                                                                                                  
                 369m variable i.e. 3,6,9,1+2=(3), 1+5=(6), 1+8=(9) ...                           
              u369m sequence = 3,6,9,12,15,18,21,24,27,30,33,36,39,42,45 ...                      
                                                                                                  
                      This algorithm is a Polynomial Cubic Equation                               
                                                                                                  
       It will glitch out on certain systems when the input is greater than 7 digits              
                                                                                                  
     Follow the white rabbit   //   |----------------------------------------------------------|  
                              ('>   | To thank the programmer one can with a donation sent via |  
                              /rr   | crypto or BPAY.                                          |  
                             *\\))_ | Bitcoin adddress   : 176YjSfsQviREFaRjQto3NHB2s7SfAut18  |  
                                    | BPAY - Biller code : 261792                              |  
                                    |        Customer ref: 1007252248                          |  
                                    |----------------------------------------------------------|  
                                                                                                  
     You live in a Quantum Thermal Dynamic System. Each string of data within the universe        
     contains the u369m sequence. Using numerical conversion systems such as Binary, Hex,         
     Base 1-10, and so on, we can convert and calculate everyday objects into in base 10.         
     By using Mathematical concepts such as theorems, conjectures, and anything else one is       
     able to apply the u369m within the mathematics of the object while constructing.             
     Building physical objects takes metaphysical Mathematics such as Particle Mathematics.       
     One can use this program to enter any number one wants as to find the u369m sequence         
     Each beat allows for integration within design patterns.                                     
     i.e. When measuring in millimetres for a design job this program allows for instant          
     physical and metaphysical connection of u369m variables.                                     
                                                                                                  
     The Poincare Conjecture is proof of how a 1-Dimensional Object homeomorphs into a            
     3-Dimensional Object.                                                                        
                                                                                                  
     The Human Eye sees between 60-90Hz.                ,-""-.                                    
     The Human Eye's frame rate is between 30-60fps.   / ,--. \\                                  
                                                      | ( () ) | every click has its consequences 
                                                       \\`--' /                                   
                                                        `-..-'  hjw                                                                                                                                            
    --------------------------------------------------------------------------------------------- 
																									'''

n = 1

print("\n 					   Welcome To The Universal 369 Matrix")
print("\n 					   Please read the file notes carefully")
print("		This program calculates the 369 String within the infinite universal set of Real Numbers\n")
print("			    Be mindful of the 0 missing at the beginning out of the output\n")
userinput = input("Enter Number: ")
print("\n")
cu = int(userinput)
 
def getSum(n):
    
    sum = 0
    while (n != 0):
       
        sum = sum + (n % 10)
        n = n//10
       
    return sum

while n < cu:
	j = n * 3
	m = getSum(j)
	p = getSum(m)
	print(getSum(p), end=" ")
	n+=1

print("\n")
