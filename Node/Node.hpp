#ifndef NODE_H
#define NODE_H

class Node {
    private:
        Node* North;
        Node* North_East;
        Node* East;
        Node* South_East;
        Node* South;
        Node* South_West;
        Node* West;
        Node* North_West;

        int Value;

    public:
        Node();
        Node(int value);
        Node(Node *North = nullptr, Node *North_East = nullptr, Node *East = nullptr, Node *South_East = nullptr, Node *South = nullptr, Node *South_West = nullptr, Node *West = nullptr, Node *North_West = nullptr, int Value = 0);
       
        Node getNorth();
        Node getNorth_East();
        Node getEast();
        Node getSouth_East();
        Node getSouth();
        Node getSouth_West();
        Node getWest();
        Node getNorth_West();
        int  getValue();

        void setNorth(Node North);
        void setNorth_East(Node North_East);
        void setEast(Node East);
        void setSouth_East(Node South_East);
        void setSouth(Node South);
        void setSouth_West(Node South_West);
        void setWest(Node West);
        void setNorth_West(Node North_West);
        void setValue(int value);
};




#endif