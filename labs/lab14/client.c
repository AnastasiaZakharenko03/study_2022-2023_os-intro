/*
* client.c - реализация клиента
*
* чтобы запустить пример, необходимо:
* 1. запустить программу server на одной консоли;
* 2. запустить программу client на другой консоли.
*/

 #include "common.h"


 int main()
 {
 int writefd; /* дескриптор для записи в FIFO */
 int msglen;

 /* баннер */
 printf("FIFO Client...\n");

 for(int i=0; i<4; i++)
   {
     /* получим доступ к FIFO */
     if((writefd = open(FIFO_NAME, O_WRONLY)) < 0)
       {
	 fprintf(stderr, "%s: Невозможно открыть FIFO (%s)\n", __FILE__, strerror(errno));
	 exit(-1);
       }

       long int ttime = time(NULL);
       char* text = ctime(&ttime);
       /* передадим сообщение серверу */
       msglen = strlen(text);
       if(write(writefd, text, msglen) != msglen)
	 {
	   fprintf(stderr, "%s: Ошибка записи в FIFO (%s)\n", __FILE__, strerror(errno));
	   exit(-2);
	 }
       sleep (5);
       }
 
 /* закроем доступ к FIFO */
 close(writefd);
 exit(0);
 }
