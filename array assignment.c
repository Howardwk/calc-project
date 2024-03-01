#include<stdio.h>
int main() 
{

    int marks[9] = {1,2,3,4,5,6,7,8,9};
    int pos, i, var;
    int size = 9;

    
     printf("Displaying elements in array:\t ");

    for (int i = 0; i < 9; ++i) {
        printf("%d\t", marks[i]);
    }
   
    printf("\nEnter the element position to delete : ");
    scanf("%d", &pos);

    
    /* Invalid delete position */
    if(pos < 1|| pos >8)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        var=marks[pos-1];
        /* Copy next element value to current element */
        for(i=pos-1; i<size-1; i++)
        {
            marks[i] = marks[i + 1];
        }

        /* Decrement array size by 1 */
        size--;
    printf("\nElements of array after omitting are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", marks[i]);
        }
    for (i=size; i> pos-1; i--){
        marks[i]=marks[i-1];
    }
    marks[pos-1] = var;
    printf("\nElements of array after re-inserting : ");
        for(i=0; i<9; i++)
        {
            printf("%d\t", marks[i]);
        }
    marks[pos-1]= 0;
    printf("\nElements of array after deleting : ");
        for(i=0; i<9; i++)
        {
            printf("%d\t", marks[i]);
        }
    }
    
    return 0;
}