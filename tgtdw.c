#include <stdio.h>
int select;
int rootselect;
int wr4thselect;
int main(){
    system("clear");
    printf("TGTDW PKG MANAGER\n[1] RootManX Repository\n[2] Wr4th Repository\n Select Repo : ");
    scanf("%d", &select);
    if(select==2){
        printf("[1] TGT-X Phising \n[2] TGT SMSER \n[3] Wortex \n Select Program : ");
        scanf("%d",&wr4thselect);
        if(wr4thselect==1){
            system("git clone https://github.com/T5heAlyx/TGT-X-Pishing");
            printf("\n Operation Succesfuly\n");
        }
        if(wr4thselect==2){
            system("git clone https://github.com/T5heAlyx/TGT-SMSER");
            printf("\n Operation Succesfuly\n");
        } 
        if(wr4thselect==3){
            system("git clone https://github.com/T5heAlyx/Wortex");
            printf("\n Operation Succesfuly\n");
        }

    }
    if(select==1){
        printf("[1] hesapmakinesi2.1\n[2] PezevenkOs CPanel\n[3] Roblox Afk Hack Linux\n[4] ZozoChat All Versions\n Select Program : ");
        scanf("%d",&rootselect);
        if(rootselect==1){
            system("git clone https://github.com/Sxss7B4X4/hesapmakinesi2.1");
            printf("\n Operation Succesfuly \n");
        }
        if(rootselect==2){
            system("git clone https://github.com/Sxss7B4X4/pezevenkoscpanel");
            printf("\n Operation Succesfuly\n");
        }

        if(rootselect==3){
            system("git clone https://github.com/Sxss7B4X4/robloxafkhacklinux");
            printf("\n Operation Succesfully \n");

        }
        if(rootselect==4){
            system("git clone https://github.com/Sxss7B4X4/zozochat");
            system("git clone https://github.com/Sxss7B4X4/zozochatv2");
            system("git clone https://github.com/Sxss7B4X4/zozochatv2.2");
            system("git clone https://github.com/Sxss7B4X4/zozochatv2.3");
            system("git clone https://github.com/Sxss7B4X4/zozochatv2.4");
            system("git clone https://github.com/Sxss7B4X4/zozochatv2.5");
            printf("\n Operation Succesfuly \n");
        }
    }
    return 0;
}
