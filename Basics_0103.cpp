#include <stdio.h>

int main()
{
    printf("Hello world\n");
    printf("%d", sizeof(int));

    ///type casting
    i = (int)5.6;
    printf("3. i = %d\n", i);
    f = (float)1/3;
    printf("4. f = %\n", f);
    ///char* s = 2.3 // type casting error
    int x = "7"; ///"7" is a char* '7' is a char

    ///declare a constant
    const double myPI = 3.14;
    const char* name = "Do Thi Khanh Linh"
    printf("myPi = %f\n", myPI);

    /** define a new data type
    1. enum(enumeration)**/
    enum Ngay {Thu2 = 2, Thu3, Thu4, Thu5, Thu6, Thu7, CN = 1};
    printf("Ngay 1 = %d\n", Thu2);
    printf("Ngay 2 = %d\n", Thu3);
    return 0;
}
	//2.struct
	struct student
	{
		char* ID;
		char* name;
		double* diem;
	};
	struct student sv = {"01234","Do Thi Khanh Linh",2.0};
	printf("sv ID = %s \n",sv.ID);
	printf("sv name= %s \n",sv.name);
	printf("sv diem= %lf \n",sv.diem);
	//use sizeof() to determine the size of struct
	printf("Size of Struct Student is %d",sizeof(struct student));
}

