#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFF_SIZE 512

int main(int argc, char* argv[]){
  if(argc != 3){
    printf("Arguments count will be 3.\n");
    return 1;
  }
  char* filename = argv[2];
  int fd = open(filename, O_RDONLY);
  if(fd < 0){
    perror("Open\n");
  }
  char buff[BUFF_SIZE];
  char* str = argv[1];
  char ch;
  int index_last;
  while(1){
      index_last = 0;
      while(1){
        read(fd, &ch, 1);
        buff[index_last] = ch;
       // printf("%s\n", buff);
        if(ch == '\n'){
          break;
        }
        ++index_last;
      }

buff[index_last] = '\0';

      if(strstr(buff, str) != NULL){
        printf("%s\n", buff);
      }
      if(read(fd,&ch,1)==0){
        break;
      }
      else{
          lseek(fd,-1,SEEK_CUR);
      }
  }
  return 0;
}
