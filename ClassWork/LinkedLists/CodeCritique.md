# Assignment 05 Code Critique
Name: AJ Ferraro
Cousre: COMP B12
Instructor: Richard Miles
Date Submitted: 2020/04/19

Code Critique
---
The main difference between my implementation and the best one is the function 
for deleting nodes: my implementation deletes the first instance of a given node
in the list, and the provided implementation deletes all instances. It does this
by first deleting instances of the key from the front and them back of the list,
and then looping through from the start of the list again to remove all
instances of the key. Unfortunately, this causes some buggy behavior, namely
that trying to delete an item from an empty list, or trying to delete an item
from a list containing only instances of that item will cause an address
boundary error, which doesn't happen with my implementation. My delete function
works by looping through the list until it finds the first node matching the
key, then changes around the pointers of the surrounding nodes so that they skip
past the node to be deleted, and then deletes it using the delete keyword. This
was the most challenging part of implementing the linked list, making sure that
all the pointers were arranged properly and I didn't accidentally loose track of
the other items in the list. Memory management was also a challenge, and I left
a lot of unused pointers in memory without deleting them. Other than that, our
two implementations don't differ greatly, I used `nullptr` instead of `NULL`,
and I don't set the temporary pointer `temp` or `newNode` to `nullptr` after I'm
done with it. The best implementation also loops trough the list more
efficiently in the print function: using 
```c++
while(temp != NULL)
```
instead of
```c++
while(currentNode->next != nullptr)
```
This loops through the entire list, while mine only loops until it hits the
tail. I think I originally did it like this because I was so afraid of
dereferencing a `nullptr` that I wanted to be safe. I do, however, perform the
print operation on the tail after the loop, so this accomplished the same thing
in the end.
