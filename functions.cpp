//
//  functions.cpp
//  finalProjectCS1a
//
//  Created by Landon McCorkle on 11/30/17.
//  Copyright © 2017 Landon McCorkle. All rights reserved.
//

#include "imgproc.h"

int readImg(string inputfilename, unsigned char R[][WIDTH],unsigned char G[][WIDTH], unsigned char B[][WIDTH]) {
    fin.ignore(100, '\n');
    fin.ignore(100, '\n');
    fin.ignore(100, '\n');
    for (int y=0; y < HEIGHT; ++y) {
        for (int x=0; x < WIDTH; ++x){
        R[y][x] = fin.get();
        G[y][x] = fin.get();
        B[y][x] = fin.get();
    }

}
return 0;
}


int saveImg(ofstream &fout, unsigned char R[][WIDTH], unsigned char G[][WIDTH], unsigned char B[][WIDTH]);{
    fout << "P6" << endl;
    fout << "644 410" << endl;
    fout << "255" << endl;
    for (int y=0; y < HEIGHT; ++y){
        for (int x=0; x < WIDTH; ++x){
            fout << R[y][x];
            fout << G[y][x];
            fout << B[y][x];
        }
    }
return 0;
}


void horzFlip(unsigned char R[][WIDTH], unsigned char G[][WIDTH], unsigned char B[][WIDTH]);


void vertFlip(unsigned char R[][WIDTH], unsigned char G[][WIDTH], unsigned char B[][WIDTH]);


void negImg(unsigned char R[][WIDTH], unsigned char G[][WIDTH], unsigned char B[][WIDTH]);


void ageImg(unsigned char R[][WIDTH], unsigned char G[][WIDTH], unsigned char B[][WIDTH]);


void addNoise(unsigned int percentage, unsigned char R[][WIDTH], unsigned char G[][WIDTH], unsigned char B[][WIDTH]);


void sharpenImage(unsigned char R[][WIDTH], unsigned char G[][WIDTH], unsigned char B[][WIDTH]);


void zoomImg(unsigned char [HEIGHT][WIDTH], unsigned char G[HEIGHT][WIDTH], unsigned char B[HEIGHT][WIDTH]);
