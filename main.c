#include <stdio.h>
#define MAXSIZE 100
void displayArray(int array[], int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("%d\t", array[i]);
	printf("\n");
	return;
}

void Sort(int array[MAXSIZE], int size)
{
	int i;
	int j;
	int temp;

	printf("Enter number of elements : ");
        scanf("%d", &size);
        printf("Enter the %d integers to be the elements of the array. \n", size);
        for (i = 0; i < size; i++)
                scanf("%d", &array[i]);
	printf("\nThe array entered is : \n");
	displayArray(array,size);

        for (i = 1 ; i < size ; i++)
	{
                j = i;
                while ( j > 0 && array[j-1] > array[j])
		{
                        temp = array[j];
                        array[j] = array[j-1];
                        array[j-1] = temp;
                        j--;
                }
        }
	printf("\n sort has been performed. \n");
	printf("\nSorted array in ascending order :\n");
 	displayArray(array,size);
	return;
}
void findnum(int array[MAXSIZE],int size)
{
    int found;
    int toSearch;
    int i;
    int j;
    int temp;

	printf("Enter number of elements : ");
        scanf("%d", &size);
        printf("Enter the %d integers to be the elements of the array. \n", size);
        for (i = 0; i < size; i++)
                scanf("%d", &array[i]);
	printf("\nThe array entered is : \n");
	displayArray(array,size);

     printf("\nEnter element to search: ");
    scanf("%d", &toSearch);
    found = 0;

    for(i=0; i<size; i++)
    {

        if(array[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

    return 0;
}

void minmax(int array[MAXSIZE],int size)
{
    int i;
    int min;
    int max;
    int temp;

	printf("Enter number of elements : ");
        scanf("%d", &size);
        printf("Enter the %d integers to be the elements of the array. \n", size);
        for (i = 0; i < size; i++)
                scanf("%d", &array[i]);
	printf("\nThe array entered is : \n");
	displayArray(array,size);

    max=array[0];
    min=array[0];
    for(i=1; i<size; i++)
    {
         if(min>array[i])
		  min=array[i];
		   else if(max<array[i])
		    max=array[i];
    }
     printf("minimum of array is : %d",min);
     printf("\nmaximum of array is : %d",max);


return 0;
}
void descending(int array[MAXSIZE],int size)
{
        int i;
        int j;
        int a;
        int temp;

        printf("Enter number of elements\n");
        scanf("%d", &size);

        printf("Enter the numbers \n");
        for (i = 0; i < size; ++i)
	        scanf("%d", &array[i]);
        printf("\nThe array entered is : \n");
        displayArray(array,size);
        /*  sorting begins ... */

        for (i = 0; i < size; ++i)
        {
            for (j = i + 1; j < size; ++j)
            {
                if (array[i] < array[j])
                {
                    a = array[i];
                    array[i] = array[j];
                    array[j] = a;
                }
            }
        }

        printf("The numbers arranged in descending order are given below\n");

        for (i = 0; i < size; ++i)
        {
            printf("%d\n", array[i]);
        }
}
void insertion(int array[MAXSIZE],int size)
{

        int i;
        int item = 10;
        int index = 3;
        int temp;

        printf("Enter number of elements\n");
        scanf("%d", &size);
        int j=size;
        printf("Enter the numbers \n");
        for (i = 0; i < size; ++i)
	        scanf("%d", &array[i]);
        printf("\nThe array entered is : \n");
        displayArray(array,size);
    size = size + 1;

   while( j >= index) {
      array[j+1] = array[j];
      j = j - 1;
   }

   array[index] = item;

   printf("The array elements after insertion :\n");

   for(i = 0; i<size; i++) {
      printf("array[%d] = %d \n", i, array[i]);
   }
}

void main()
{
	int size;
	int array[MAXSIZE];
	int i;
	int j;
	int oper;


	printf("enter corresponding number what you want to perform:'1=sort,2=find,3=minmax,4=descending order,5=descending orrder': ");
	scanf("%d",&oper);
switch (oper)
{
case 1:
    Sort(array,size);
    break;
case 2:
    findnum(array,size);
    break;
case 3:
    minmax(array,size);
    break;
case 4:
    descending(array,size);
    break;
case 5:
    insertion(array,size);
    break;
}
return 0;
}

