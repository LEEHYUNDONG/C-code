#include <stdio.h>
#include <string.h>
#include <termios.h>

void Loaddata1(info *arr, int *pnum) {
    FILE *file = fopen("a.txt","rb");
    if (file == NULL) {
        return;
    }
    while(1) {
        fread(arr[*pnum].name,sizeof(arr[*pnum].name),1,file);
        fread(arr[*pnum].id,sizeof(arr[*pnum].id),1,file);
        fread(arr[*pnum].psw,sizeof(arr[*pnum].psw),1,file);
        fread(arr[*pnum].sch,sizeof(arr[*pnum].sch),1,file);
        fread(arr[*pnum].city,sizeof(arr[*pnum].city),1,file);
        fread(arr[*pnum].age,sizeof(arr[*pnum].age),1,file);
        if (feof(file) != 0) {
            break;
        }
            (*pnum)++;
    }
}

void Savedata1(info *arr,int *pnum) {
    int i;
    FILE *file = fopen("a.txt","wb");
    if (file == NULL) {
        return;
    }
    for(i=0;i<(*pnum)+1;i++) {
        fwrite(arr[i].name,sizeof(arr[i].name),1,file);
        fwrite(arr[i].id,sizeof(arr[i].id),1,file);
        fwrite(arr[i].psw,sizeof(arr[i].psw),1,file);
        fwrite(arr[i].sch,sizeof(arr[i].sch),1,file);
        fwrite(arr[i].city,sizeof(arr[i].city),1,file);
        fwrite(arr[i].age,sizeof(arr[i].age),1,file);
    }
}

int getch() {
    
    int ch;
    struct termios buf;
    struct termios save;

    tcgetattr(0, &save);
    buf = save;

    buf.c_lflag &= ~(ICANON|ECHO);
    buf.c_cc[VMIN] = 1;
    buf.c_cc[VTIME] = 0;

    tcsetattr(0, TCSAFLUSH, &buf);
    ch = getchar();
    tcsetattr(0, TCSAFLUSH, &save);
    return ch;
}

void Sign_up(info *arr, int *osnum, int *pnum) {
    if ((*pnum) < MAX_P) {
    
    char ch;
    char psw[20];
    int j;

    printf("Name : ");
    fgets(arr[*pnum].name,sizeof(arr[*pnum].name),stdin);
    
    printf("Id : ");
    fgets(arr[*pnum].id,sizeof(arr[*pnum].id),stdin);
    
    printf("Password : ");
    for(j=0; j<19; j++) {
        ch = getch();
        if(ch == '\n') break;
        putchar('*');
        psw[j] = ch;
    }
    printf("\n");

    strncpy(arr[*pnum].psw,psw,strlen(psw));
    
    printf("School : ");
    fgets(arr[*pnum].sch,sizeof(arr[*pnum].sch),stdin);
    
    printf("City : ");
    fgets(arr[*pnum].city,sizeof(arr[*pnum].city),stdin);
    
    printf("Age : ");
    fgets(arr[*pnum].age,sizeof(arr[*pnum].age),stdin);
    
    (*pnum)++;
    (*osnum) = (*pnum) - 1;
    }

    else {
        printf("User is Full\n");
    }
}

void Sign_in(info *arr, int *pnum,int *osnum) {
    
    int i,j;
    char id[20];
    char psw[20];
    char ch;
    int pn;

    printf("----------------\n");
    printf("ID : ");
    fgets(id,sizeof(id),stdin);

    for(i = 0; i < (*pnum); i++) {
        if(strncmp(arr[i].id,id,strlen(id)) == 0) {
            break;
        }
    }

    pn = i;
    
    while(1) {
        printf("PASSWORD : ");
        for(j=0; j<19; j++) {
        ch = getch();
        if(ch == '\n') break;
        putchar('*');
        psw[j] = ch;
    }
    printf("\n");

    if(strncmp(arr[pn].psw, psw, strlen(psw)) == 0) {
        (*osnum) = pn;
        printf("---------------\n"); break;
        }
    else {
        printf("Acess Denied\n"); break;
    }
    }
}

void List_of_user(info *arr, int *pnum) {
    int i;
    for(i=0;i<(*pnum)+1;i++) {
        printf("\n-------------------------\n");
        printf("Name : %s\n",arr[i].name);
        printf("ID : %s\n",arr[i].id);
        printf("Age : %s\n",arr[i].age);
        printf("School : %s\n",arr[i].sch);
        printf("City : %s\n",arr[i].city);
    }
}
