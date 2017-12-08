//
//  main.cpp
//  finalProjectCS1a
//
//  Created by Landon McCorkle on 11/30/17.
//  Copyright © 2017 Landon McCorkle. All rights reserved.
//

#include "imgproc.h"

int main()
{
    //Definitions
unsigned char R[HEIGHT][WIDTH];
unsigned char G[HEIGHT][WIDTH];
unsigned char B[HEIGHT][WIDTH];

string inputfilename = "ssse.ppm";

ifstream fin;
fin.open(inputfilename.c_str())

ofstream fout;

string outputfilename = "ssse_test.ppm";

int successR, successW;

reading(fin, R, G, B);
fin.close();
fout.open(outputfilename.c_str());
saving(fout, R, G, B);
fout.cluse();

return 0;

    cout << "*** Welcome to my Microgram final project ***" << endl << endl;
    cout << "Please press ENTER to continue: " << endl << endl;
    cin.get();

    char menuChoice;
    
    cout << "(1) Read Image File" << endl;
    cout << "(2) Save modified image" << endl;
    cout << "(3) Horizontal Flip" << endl;
    cout << "(4) Vertical flip" << endl;
    cout << "(5) Add a Negative Effect" << endl;
    cout << "(6) Age the photo (Sephia)" << endl;
    cout << "(7) Add Noise to the photo" << endl;
    cout << "(8) Sharpen the Image" << endl;
    cout << "(9) (BONUS) Zoom in" << endl;
    cin >> menuChoice;
    
    switch (menuChoice)
    
    //case 1:

}
