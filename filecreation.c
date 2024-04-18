#include <stdio.h>

int main ()
{
    FILE *pF; 
    char buffer[255];
    char choice;
    pF = fopen ("write.txt","r");
    
    if (pF == NULL) {
        printf("Error opening file");
    }
    
    printf("Initial content of the file:\n");
    while(fgets(buffer,255,pF)!=NULL)
    {
    
    printf("%s",buffer);
    }
     fclose(pF);
    

    
    pF = fopen("write.txt","a");
    if (pF == NULL) {
        printf("Error opening file");
    }
    printf("\nDo you want to edit the file? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y'){
        printf("Enter a string you want to add(press Ctrl+C when done)\n");
         while (fgets(buffer, 1000 , stdin) != NULL) {
            fputs(buffer, pF);
        }
    }
    fclose(pF);
    printf("\nFile has been edited successfully.\n");
    

    
    

   
    //remove("write.txt");

    return 0;



}