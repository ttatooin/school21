#ifndef FIELD_H
#define FIELD_H

#define MAX_HYS 6561

typedef struct
{
	int fld[81]; // main field
	int map[81][10]; // possibilities map
	int fil; // number of placed numbers
	int hys[81]; // actions hystory
}field;

#endif