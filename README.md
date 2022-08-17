# Wave Collapse Map Generations

This is a project I wanted to try because I am interested in computers randomly performing task for us. The basic idea is you give the computer a 2d map and it will make a randow tile layout. The themes of this project so far are OPP, Pointers and C++.

Step - 1 😊 C++ 
> They are two parts that I am try to accomplishe with C++. First is an object "*node*" that will point in all directions to it neighbours. Next is a "*map*" that will hold all a 2d representation of the nodes and start the **wave collapse** randomly.

1. Node 
>The node was pretty basic to make so far i dont think it will need to be update simple it is a class the points to other obj of the same class with a value. 

```
public:
    Node();
    Node* North;
    Node* North_East;
    ...
    Node* West;
    Node* North_West;
    
    int id;    
    int Value;           
```

2. Map
>The map obj was were some complications arouse. I create a consturctor to make a 2d array based on a user input for size but I was creat in the pointer incorrectly.
obj* arr = new obj[10] 👎❌
obj** arr = new obj*[10] 👍✔

>The problem with the first is that you are creating a pointer to 10 objs but those objs in turn can't hold more than one thing so you are just creating a 1d array.

>The second statement works because you are creating a pointer to pointer which in turn can point to other objs.




---

# Where to next
- Enabling indiviaul edits to node.
- Starting a wave collapse.