#include <stdio.h>
void bestFit(int block[], int blockSIZE, int process[], int processSIZE)
{
    printf("SI\t\tProcess\t\tBlock Number\t\tBlock Size\t\tRemaining Space\n");
    for (int i = 0; i < processSIZE; i++)
    {
        int bestIdx = -1;
        for (int j = 0; j < blockSIZE; j++)
        {
            if (block[j] >= process[i])
            {
                if (bestIdx == -1)
                    bestIdx = j;
                else if (block[bestIdx] > block[j])
                    bestIdx = j;
            }
        }
        if (bestIdx != -1)
        {
            
            printf("%d\t\t%d\t\t%d\t\t\t%d\t\t\t",i + 1, process[i],bestIdx, block[bestIdx]);
            block[bestIdx] = block[bestIdx] - process[i];
            printf("%d\n",block[bestIdx]);
        }
        else
            printf("%d \t\t %d \t\t is not allocated\n",i + 1, process[i]);
    }
}
void worstFIT(int block[], int blockSIZE, int process[], int processSIZE)
{
    printf("SI\t\tProcess\t\tBlock Number\t\tBlock Size\t\tRemaining Space\n");
    for (int i = 0; i < processSIZE; i++)
    {
        int worstFIT = -1;
        for (int j = 0; j < blockSIZE; j++)
        {
            if (block[j] >= process[i])
            {
                if (worstFIT == -1)
                    worstFIT = j;
                else if (block[worstFIT] < block[j])
                    worstFIT = j;
            }
        }

        if (worstFIT != -1)
        {
            printf("%d\t\t%d\t\t%d\t\t\t%d\t\t\t",i + 1, process[i],worstFIT, block[worstFIT]);
            block[worstFIT] = block[worstFIT] - process[i];
            printf("%d\n",block[worstFIT]);
        }
        else
            printf("%d \t\t %d \t\t is not allocated\n",i + 1, process[i]);
    }
}
void firstFIT(int block[], int blockSIZE, int process[], int processSIZE)
{
    printf("SI\t\tProcess\t\tBlock Number\t\tBlock Size\t\tRemaining Space\n");
    for (int i = 0; i < processSIZE; i++)
    {
        int flag = 0;
        for (int j = 0; j < blockSIZE; j++)
        {
            if (block[j] >= process[i])
            {
                   printf("%d\t\t%d\t\t%d\t\t\t%d\t\t\t",i + 1, process[i],j+1, block[j]);
                   block[j] = block[j] - process[i];
                   printf("%d\n",block[j]);
                flag = 1;
                break;
            }
        }

        if (flag != 1)
        {
            printf("%d \t\t %d \t\t is not allocated\n",i + 1, process[i]);
        }
    }
}

int main (){
       int BZ, PZ,i;
       printf(">> Memory Allocation <<\n");
       printf("\n");
       
       printf("Enter Block Size ");
       scanf("%d",&BZ);
       int block[BZ];
       printf("Enter Memory Spaces \n");
       for (i=0; i < BZ; i++){
              scanf("%d",&block[i]);
       }
       
       printf("No of Processes ");
       scanf("%d",&PZ);
       int process[PZ];
       printf("Enter Process Spaces \n");
       for (i=0; i < PZ; i++){
              scanf("%d",&process[i]);
       }
       printf("<<---Possible Arrangements--->>\n");
       printf("1.BestFit\n2.FirstFit\n3.WorstFit\n");       
              printf("4.Exit\n");
              scanf("%d",&i);
              switch (i){
              case 1 : bestFit(block, BZ, process, PZ);
                       break;
              case 2 : firstFIT(block, BZ, process, PZ);
                       break;
              case 3 : worstFIT(block, BZ, process, PZ);
                       break;
              default : i = 0;
                     printf("END OF PROGRAM\n");
                     break;
              }      
}
