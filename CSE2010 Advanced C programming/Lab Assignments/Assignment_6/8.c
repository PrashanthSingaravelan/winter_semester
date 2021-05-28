#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int main() {
	int fptr;
	char message_read[100];
	char message_write[100] = "Hello, this is Prashanth from US";

	fptr = open("text_1.txt",O_RDWR);
	printf("fptr : %d",fptr);
	if(fptr!=-1) {
		printf("\nFile opened successfully");
		write(fptr,message_write,sizeof(message_write));  // writing the contents into the file

		lseek(fptr,0,SEEK_SET);  // Pointing to the beginning of the file

		read(fptr,message_read,sizeof(message_write)); // reading the contents from the file and stores in the message_read
		printf("\n %s was written into the file\n",message_read);

		close(fptr);
	     }
	return 0;
}
