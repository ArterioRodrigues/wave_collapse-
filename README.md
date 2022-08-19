# Wave Collapse Map Generations 🗺

This is a project I wanted to try because I am interested in computers randomly performing task for us. The basic idea is you give the computer a 2d map and it will make a randow tile layout. The themes of this project so far are OPP, Pointers and C++.

## Step - 1 😊 C++ 
They are two parts that I am try to accomplishe with C++. First is an object "*node*" that will point in all directions to it neighbours. Next is a "*map*" that will hold all a 2d representation of the nodes and start the **wave collapse** randomly.

1. Node 
The node was pretty basic to make so far i dont think it will need to be update simple it is a class the points to other obj of the same class with a value. 

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

**Node v1.1** update. I added a state to each node as the wave function require me to know what can be change and what affects it. So i add new functions to check state update state and change state.
```
void setDefaultState(int value);
void setState(int value[] , int size);
void displayState();
int* getState();
int  getStateSize();

```

2. Map
The map obj was were some complications arouse. I create a consturctor to make a 2d array based on a user input for size but I was creat in the pointer incorrectly.</br>
```
obj*  arr  = new obj[10]   👎 ❌ 
obj** arr = new obj*[10]   👍 ✔
```
The problem with the first is that you are creating a pointer to 10 objs but those objs in turn can't hold more than one thing so you are just creating a 1d array.</br>
The second statement works because you are creating a pointer to pointer which in turn can point to other objs.</br></br>

**Map v1.1** So I have been working on the wave collape so far I have the program randomly chose a value and location. Now I think my objective is to have it also keep state of each 
Node and what possible values it can be and to update the nodes around it. (ps. I also added ways to display the map i.e displayMap() no biggie 🤷‍♂️)
```
void Map::WaveCollapse(){
    int rand_row = rand()%(row-1) + 1;
    int rand_col = rand()%(col-1) + 1;
    int rand_value = rand()%(value+1);
    
    arr[rand_row][rand_col].value =  rand_value;

    cout << "rand_row: " << rand_row << endl;
    cout << "rand_col: " << rand_col << endl;
    cout << "rand_value: " << rand_value << endl;
}
```

3. State
Now here we start to run into problems!!! 😡 
When I started working on the wave collaspe i realized their are alot of stuff i have to keep track of naming a fee
* a nodes state aka what values it can hold 
* all possible state - so like a power state
* way to change the node state and for it to save it

I approache this problem by first trying to make a class for states but it ended up being super over complicated for in my head no reason. I fell back and choose a simplier approach. Frist i gave each node a array of possible states it can be 
```
...
int* state;
...
```

And added a map in the Map obj to hold and adam state or state that holds the rules for all states in the map and how each should change.

```
...
map<int , vector<int> > adam_state;
map<int , vector<int> >::iterator itr;
int num_state;
...
```

So far this seem to be a more elegante and simple way than my previous class attempt.

4. Problems

So I have over look a very big problem at this point my program works complete exept for one big problem it only works with a max state of 3. Which is super small. The problem is that as one node state changes the it updates it surronding states.

[{1,2,3} {1,2,3} {1,2,3}]                                   [{1,2,3} {1,2,3} {1,2,3}]
[{1,2,3} {1,2,3} {1,2,3}]     <span style="color:blue">     [{2,3}    {2,3}    {2,3}]  </span>
[{1,2,3} {1,2,3} {1,2,3}]     <span style="color:blue">     [{2,3}     {3}     {2,3}]  </span>
[{1,2,3} {1,2,3} {1,2,3}]     <span style="color:blue">     [{2,3}    {2,3}    {2,3}]  </span>
[{1,2,3} {1,2,3} {1,2,3}]                                   [{1,2,3} {1,2,3} {1,2,3}]


but a glaring oversight is that when a state has more that 3 state then when you change the state of the surrond node you have to in turn also change the state of those node until the *wave* is over.

</hr>

## Just Updated 🔥🔥

Since i started the wave collapse function i realized i need alot more stuff to make my life easier. so heres a list of what I added: 

* an array node to hold all surrond nodes
* master node to hold current node
* various node class function to set the surronding nodes 


</br>
</br>
</hr>

# Where to next
- Enabling indiviaul edits to node.
- Starting a wave collapse.