#include <stdio.h>

void Transform0(const char* in_path, const char* out_path)
{
   //Copy the word and replace the first character.
   FILE* in_txt = fopen(in_path, "r" );
   char buff[255];
   while(fscanf(in_txt, "%s", buff))
   {
   		//if it's a lowercase letter
   		if (buff[0] > 96 && buff[0] < 123)
   		{
   			buff[0] = buff[0] - 32;
   			printf(buff);
   		}
   }

}

void Transform1(char* in_path, char* out_path)
{
   //Go through each character.
   //See if it has a letter equviliant on our defined list.
   //If it does, copy the whole word, and replace that character. If there are multiple copy multiple times.
}

void Transform2(char* in_path, char* out_path)
{
   //Go through each line.
      //Go through each line.
      //Append each word to each other, with nothing, @, &, #, $, £, EURO, between them.
}

void Transform3(char* in_path, char* out_path)
{
   //Go through each line, add all combinations of 1-6 characters to the begining and end. 
}

int main ()
{
   //Read Args passed by command line.
	Transform0("test.txt", "");
   //Run transformation method.
   //write to file.
}