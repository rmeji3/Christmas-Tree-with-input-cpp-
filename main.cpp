/**------------------------------------------

    Program 1: Layered Pine Tree
    Prompt for the number of tree layers and display
    ASCII layered pine tree

    Course: CS 141, Fall 2022.
    System: MacOS and G++
    Author: Rafael Mejia
    Exchanged Ideas: Haider Alzoubi
 ---------------------------------------------**/

#include <iostream>   // for cin and cout
#include <iomanip>    // for setw. The number in setw(...) is the total of blank spaces including the printed item.

using namespace std; // so that we don't need to preface every cin and cout with std::

int main()
{
   
        // Prompt for and get the number of layers for the tree.
        int number_of_tree_layers = 0;
        cout << "Number of tree layers -> ";
        cin >> number_of_tree_layers;

        cout << endl; //do not remove this line. It is essential for the autograder!


        //initialize here
        int spaces = (number_of_tree_layers + 2); //this is to make the spaces get bigger the more layers u add
        int leavesInLayer = 1;


        //
        for(int rows = 1; rows <= number_of_tree_layers; rows++) {//loops the triangle and trunk as many times as the user wants the layers because each time is one layer
            for (int leaveLayer = 0; leaveLayer < 3; leaveLayer++) { // this is making a layer of leaves be 3 rows
                cout << setw(spaces);//for the spaces

                for(int leaves = 0; leaves < leavesInLayer; leaves++) {
                    cout << "*";
                }
                if(leaveLayer == 2){
                    leavesInLayer -= 2;
                    spaces += 2;
                }
                else{
                    leavesInLayer += 2;
                }
                cout << endl;
                spaces = spaces - 1;
            }
        }
        for(int treeLayer = 1; treeLayer <= number_of_tree_layers; treeLayer++) {//for every layer of the leaves it prints 2 rows of the trunk
            cout << setw(number_of_tree_layers + 3) << "|||" << endl;
            cout << setw(number_of_tree_layers + 3) << "|||" << endl;
        }

   

    cout << endl; 
    return 0;
}