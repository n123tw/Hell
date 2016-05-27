#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void new(void);
void search(void);
void soxran(void);
void izvlech();

 typedef struct book
  { char firname[100];
    char secname[100];
    char tel[50];
    struct book *sled;
    struct book *pred;
   } book ;


 book *begin;
 book *end; 
 book *find(char *);
 void spismaker(book *ok,  book **begin, book **end);
 void spis (book *nach);
 void udalenie (book *nach,book *kon,book **begin, book **end);

 int main ()
 {  int i,d;
     
  
      printf ("\n\n");
      printf ("В данной программе вы можете выполнять действия с телефонной книге \n");
      printf ("Список всех действий и то , как их вызвать , представленны ниже : \n"); 
      printf ("  Чтобы вызвать весь список контактов , нажмите 1 , затем Enter \n");
      printf ("  Чтобы добавить контакт , нажмите 2 , затем Enter \n");
      printf ("  Чтобы удалить контакт , нажмите 3, затем Enter \n");
      printf ("  Чтобы найти контакт , нажмите 4  , затем Enter \n"); 
      printf ("  Чтобы сохранить контакты в файл , нажмите 5 , затем Enter \n");
      printf ("  Чтобы загрузить контакты из файла , нажмите 6  , затем Enter \n"); 
      printf ("  Чтобы выйти из программы , нажмите 7 , затем Enter \n");
        
  
    for (i=0;i<2;i++)
     {  
         scanf("%d",&d);
         if (d==1) { spis(begin);}
         if (d==2) { new();}
         if (d==3) { udalenie(begin,end,&begin , &end);}   
         if (d==4) {search();}
         if (d==7) 
          { printf("Вы закрыли телефонную книгу \n\n");
            exit(0);
           }
        if (d==5){soxran();}
        if (d==6){izvlech();}
        if ((d<=0)||(d>=8))
     
      printf ("Вы ввели неправильную команду \n");
      printf("\n \n");
      printf ("  Чтобы вызвать весь список контактов , нажмите 1 , затем Enter \n");
      printf ("  Чтобы добавить контакт , нажмите 2 , затем Enter \n");
      printf ("  Чтобы удалить контакт , нажмите 3, затем Enter \n");
      printf ("  Чтобы найти контакт , нажмите 4  , затем Enter \n"); 
      printf ("  Чтобы сохранить контакты в файл , нажмите 5 , затем Enter \n");
      printf ("  Чтобы загрузить контакты из файла , нажмите 6  , затем Enter \n"); 
      printf ("  Чтобы выйти из программы , нажмите 7 , затем Enter \n");
  
      d=0;
      if (i==1) i=0;}
               

    return 0;
   }


 void new (void)
   {  
       book *kon ;
       int i=0;
       char mas,mas2;
        
     if (!(book *)malloc(sizeof (book)))
          { printf ("Исчерпана память");
         return;    }
     
     kon=(book *)malloc(sizeof (book));
  
    printf("Введите имя для нового контакта и нажмите Enter,пожалуйста.\n");  
    scanf("%s",kon->firname);
    printf("Введите фамилию для нового контакта и нажмите Enter,пожалуйста.\n");  
    scanf("%s",kon->secname);
    printf("Введите номер для нового контакта и нажмите Enter,пожалуйста. \n");  
    scanf("%s",kon->tel);
   
    spismaker(kon, &begin , &end);
    
   }

void spismaker( book *ok, book **begin, book **end)
  {        
        
  book *u;
  book *pre;
  pre=*begin;
        if (!*end)                 //Если до этого связанный список ничего не содержал
         {           
              *begin=ok;
              *end=ok;  
         }
      u=NULL;

 while(pre) {
            if(strcmp(pre->firname, ok->firname)<0)
             {
            u=pre;
            pre=pre->sled;
              }
        else {
           if (u) {
                u->sled=ok;
                ok->sled=pre;
                return;
                 }
            ok->sled=pre;            
          *begin=ok;
            return;
        }
    }

   
    (*end)->sled=ok;
     ok->sled=NULL;
    *end=ok;
   }                                       


 void spis (book *nach)
  { while (nach)
    {
     printf("Имя: %s \n",nach->firname);
     printf("Фамилия : %s \n",nach->secname); 
     printf("Телефон : %s\n\n",nach->tel);

     nach=nach->sled;
    }
   }
  

void search(void)
 {
    char name[100];
    book *ist ;
    book *fin;
    char *uk;
 
    printf("введите имя: \n");
    scanf("%s", name);
    uk=&name[0];

    ist=NULL;
    fin=begin;
     while(fin) {
                if(!strcmp(uk, fin->firname)) ist=fin;                                       
                fin=fin->sled;
                 } 
    
    if(ist) {
             printf("Имя %s\n", ist->firname);
             printf("Фамилия %s\n", ist->secname);
             printf("Телефонный номер %s\n", ist->tel);
             printf("\n");
            }
    else {printf ("Данный контакт не найден\n");}
     
 
 }

void udalenie (book *nach,book *kon,book **begin, book **end)
 {  book *pr;
    book *fi;
    book *ls;
    char name[100];
    char *nm;
     printf ("Введите имя контакта , который хотите удалить : ");
     scanf("%s", name);
     
     nm=&name[0];
     pr=NULL;
     fi=nach;
      while(fi) {
                    if(!strcmp(nm, fi->firname)) {pr=fi;
                                                ls=fi->pred;break;}
                    fi=fi->sled;
                 }
    if(pr) { 
              if (pr==nach) { 
                            *begin=pr->sled;                                                    
                             if(*begin) {(*begin)->pred=NULL;
                              }
                        else *end=NULL;
            }
       if (pr!=nach) 
         {
          ls->sled=pr->sled;           
          if (pr==kon) *end=pr->pred;                   
           }
         printf("Контакт удален ");
         
           } 
     else   printf ("Вы хотите удалить контакт , которого нету \n"); 
  } 


void soxran(void)
 {
    book *kon;
    FILE *f;
    f=fopen("book.txt", "wb");    
    printf("\n Вы успешно сохранили свой список в файле \n");
    kon=begin;
    while(kon) {
                 fwrite(kon, sizeof(book), 1, f);
                 kon=kon->sled;
               }
    fclose(f);
 }


void izvlech()
 {
    book *info;
    FILE *f;
    f=fopen("book.txt", "rb");
    
       while(begin) 
    {
        info=begin->sled;
        free(begin);
        begin=info;
      }
    begin=end=NULL;
    
    while(!feof(f)) 
      {
        info =(book *)malloc( sizeof(book));
        if (!info) {
            printf("нет свободной памяти\n");
            return;
                    }
        if(1 !=fread(info, sizeof(book), 1, f)) break;
        spismaker( info, &begin,&end);     
       }
    fclose(f);
    printf("\n Контакты , находящиеся в файле , успешно скопированы\n");
 }
