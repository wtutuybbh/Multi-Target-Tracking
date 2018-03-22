#pragma once
#include <armadillo>
#include <opencv2\opencv.hpp>

//int rx = 600, ry = 450;
int rx = 500, ry = 500;
int bgwidth = 1000, bgheight = 1000;
int radius = bgwidth / 2;
cv::Point center(bgwidth / 2, bgheight / 2);
cv::Point Rat(rx, ry);

int initt = 0, endt = 30;
double initx = 100, inity = 400;
double dstx = 700, dsty = 100;
double nx = 2, ny = 2;
int len = endt - initt;
double initvx = (dstx - initx) / len, initvy = (dsty - inity) / len;

int initt2 = 15, endt2 = 40;
double initx2 = 200, inity2 = 650;
double dstx2 = 800, dsty2 = 550;
double nx2 = 2, ny2 = 2;
int len2 = endt2 - initt2;
double initvx2 = (dstx2 - initx2) / len2, initvy2 = (dsty2 - inity2) / len2;

int lent = std::max(endt, endt2);
