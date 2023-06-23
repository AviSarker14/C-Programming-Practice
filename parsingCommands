#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
  int opt;
  while((opt=getopt(argc,argv,":c:f:s:d:u:")) != -1) {
    switch(opt) {
      case 'c':
      case 'd':
      case 'u':
        printf("option: %c\n", opt); break;
      case 'f':
        printf("filename: %s\n", optarg); break;
      case 's':
        printf("char: %s\n", optarg); break;
      case ':':
        printf("Missing Arg: %c\n",optopt); break;
      case '?':
        printf("unknown option: %c\n", optopt); break;
    }
  }
  for(; optind < argc; optind++)
    printf("other arguments: %s\n", argv[optind]);
}
