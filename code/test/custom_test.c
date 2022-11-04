#include "syscall.h"

#define MAX_LENGTH 17
#define FILE_NUMBER 22

int main(void)
{
	OpenFileId fid;
    int i;
    char fileName1[] = "customfile1.txt";
    char fileName2[] = "customfile2.txt";
    char fileName3[] = "customfile3.txt";
    char fileName4[] = "customfile4.txt";
    char fileName5[] = "customfile5.txt";
    char fileName6[] = "customfile6.txt";
    char fileName7[] = "customfile7.txt";
    char fileName8[] = "customfile8.txt";
    char fileName9[] = "customfile9.txt";
    char fileName10[] = "customfile10.txt";
    char fileName11[] = "customfile11.txt";
    char fileName12[] = "customfile12.txt";
    char fileName13[] = "customfile13.txt";
    char fileName14[] = "customfile14.txt";
    char fileName15[] = "customfile15.txt";
    char fileName16[] = "customfile16.txt";
    char fileName17[] = "customfile17.txt";
    char fileName18[] = "customfile18.txt";
    char fileName19[] = "customfile19.txt";
    char fileName20[] = "customfile20.txt";
    char fileName21[] = "customfile21.txt";
    char fileName22[] = "customfile22.txt";
    
    int success= Create(fileName1);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName2);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName3);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName4);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName5);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName6);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName7);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName8);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName9);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName10);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName11);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName12);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName13);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName14);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName15);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName16);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName17);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName18);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName19);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName20);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName21);
    if (success != 1) MSG("Failed on creating file");

    success= Create(fileName22);
    if (success != 1) MSG("Failed on creating file");
    
    fid = Open(fileName1);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName2);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName3);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName4);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName5);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName6);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName7);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName8);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName9);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName10);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName11);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName12);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName13);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName14);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName15);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName1);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName16);
    if (fid < 0) MSG("Failed on opening file");

    fid = Open(fileName17);
    if (fid < 0) MSG("Failed on opening file");

    success = Write(fileName17, 16, -3);
	if (success < 0) MSG("Failed on writing file");
    

    Halt();
}

/*
char test[] = "abcdefghijklmnopqrstuvwxyzzzz!";
	int success= Create("file1.test");
	OpenFileId fid;
	int i;
	if (success != 1) MSG("Failed on creating file");
	fid = Open("file1.test");
	
	if (fid < 0) MSG("Failed on opening file");
	
	for (i = 0; i < 30; ++i) {
		int count = Write(test + i, 1, fid);
		if (count != 1) MSG("Failed on writing file");
	}
       
	success = Close(fid);
	if (success != 1) MSG("Failed on closing file");
	MSG("Success on creating file1.test");
	Halt();
*/
