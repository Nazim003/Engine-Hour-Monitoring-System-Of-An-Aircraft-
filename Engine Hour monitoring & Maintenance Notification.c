#include <stdio.h>
int main() {
    int EngineHour = 0;
    int Threshold = 50; // hours
    int flownHours;
    int ans;
    
    while(EngineHour < Threshold) {
        printf("Input Flown Hours : ");
        scanf("%d",&flownHours);
        
        if(flownHours<Threshold){
                printf("No need any Maintenance!! \n \n");
                printf("Your Current hours is : %d \n \n" , flownHours);
                
        }
        
           if(flownHours >= Threshold) {
                printf("WARNING!! \n Maintenance is Required! \n ");
                printf("Would you like to reset hours??? \n Type 1 for reset & 2 for Terminate : "); 
            
            scanf("%d",&ans);
            
            if(ans == 1){
                EngineHour = 0;
                
                
            }
            
            if(ans == 2){
                return 0;
            }
            
                
            }
        }
       
    }
