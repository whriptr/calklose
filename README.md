# smores

word 

safe city

Given  a double  variable  named  x that has been declared  and given  a value , let's use a binary search technique to assign  an estimate of its square root to another double  variable , root that has also been declared . Let's assume  that x's value  is greater than  1.0 -- that will simplify things a bit . Here's the general idea:

Since x>1, we know its square root must be between  1 and x itself. So declare  two other variables  of type  double  (a and b say) and initialize  them to 1 and x respectively. So we know the square root must be between  a and b. Our strategy is to change a and b and make them closer and closer to each other but alway make sure that the root we're looking for is between  them. (Such a condition  that must always hold is called an invariant.)

To do this we will have a loop that at each step finds the midpoint of a and b. It then squares this midpoint value  and if the square of the midpoint is less than  x we know that the root of x must be bigger than this midpoint: so we assign  the midpoint to a (making a bigger and shrinking our a and b interval by half!)-- and we still can be sure that the root is between  a and b. Of course if the midpoint's square is greater than  x we do the opposite: we assign  b the value  of midpoint.

But when to stop the loop? In this exercise, just stop when the interval between  a and b is less than  0.00001 and assign  root the midpoint of a and b then.

We call this a binary search also because at each stage we cut the interval under consideration in half. Efficient as this method  is, old Isaac Newton discovered an algorithm that is even more efficient and that's what the library function sqrt uses.
