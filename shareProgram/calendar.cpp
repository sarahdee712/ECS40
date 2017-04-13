#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int create()
{
	Day* = days;
	days = malloc(30 * sizeof(Day));
	count = 0;
}

const readFile(){
	char *fgets(char *line, 36, stdin);
	for (line = 0; line < 36; line = line + 1)
	{
		month = strtok(line, "/");					//need to initialize month, day, year as arrays not vars?
		day = strtok(NULL, "/");
		year = strtok(NULL, ",")
	}
	create(dayTemp = &Day, day, month, year);			//calls create()
	equal(&dayTemp, &day);								//calls equal()

	int lessThan(&dayTemp, &day)
	{
		for (i = 0; i < 30; i++)
		{
			if dayTemp[i] < Day[i]
			{
				days[i + 1] = Day[i];
				Day[i] = dayTemp[i];
			}
			else
			continue;							//continue?
		}
	}
}

int resize(*Calendar)
{													//resize()
	for (i = 0; i < 30; i++)					//days array 30 and readFile must be kept under 36 lines -> relation?, also not 30 b/c changes
	{
		if (count[i] = size[30])				//size[] not always 30
			int new = malloc(sizeof(Day))*;			//how to make double the size
		new = &Day[i];							//used correctly?
	}
	free days;
	days = new;
}

int getDate()
{
		month = strtok(line, "/");					//need to initialize month, day, year as arrays not vars?
		if (month < 1 || month. > 12)
			return 0;
		else
			return month;
		day = strtok(NULL, "/");
		if (day < 1 || day > 31)
			return 0;
		else
			return day;
		year = strtok(NULL, ",")
			if (year < 2000 || year > 2017)
				return 0;
			else
				return year;
}

int dateSearch(&day, &month, &year)					//possible/makes sense? also dateSearch gets not from prompt but from getDate()?
{
	printf("Please enter the month, day, and year (mm/dd/yy): %str", %str);
	getDate(&str);
	create(&day, &month, &year);
	if (equal(&Day, &day) = 1)						//possible to do this? and what comparing
	{
		print(&Day);
		return;
	}
}

char subjectSearch(){
	subjectSearch(&Day, )
}