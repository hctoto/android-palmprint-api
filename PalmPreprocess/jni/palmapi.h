#ifndef _PALMAPI_H_
#define _PALMAPI_H_

void PrepareLabelPalm(int wid, int hei);
void PrepareEnhence(int wid, int hei);

int LabelCentralArea(unsigned char *nv21_frame, int wid, int hei);
int LabelPalmArea(unsigned char *nv21_frame, int wid, int hei);

int EnhencePalm(unsigned char *palmMap, int wid, int hei, unsigned char *gray_frame, int wid2, int hei2);

#endif