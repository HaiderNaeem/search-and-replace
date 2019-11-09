#include <stdio.h>

#define MAXLINE 258

int getLine(char line[]);
int isAMatch(const char line[], int from, const char s[]);
int stringLength(const char s[]);

int main(int argc, char* argv[]){
	int found = 0;
	char oldString[MAXLINE], newString[MAXLINE];
	char oldLine[MAXLINE];  // standard input text line
	char newLine[MAXLINE];  // text line to be sent to standard output
	int i, j, k, len;

	// Checking arguments
	if( argc != 3 ){
		fprintf(stderr,"Usage: %s oldString newString\n", argv[0]);
		return 1;
	}
	if( stringLength(argv[1]) == 0 ){
		fprintf(stderr,"oldString must have at least one character\n");
		return 2;
	}

	// Copy first argument to oldString char array
	for(i=0;argv[1][i]!='\0';i++)
	       oldString[i]=argv[1][i];
	oldString[i]='\0';

	// Copy second argument to newString char array
	for(i=0;argv[2][i]!='\0';i++)
	       newString[i]=argv[2][i];
	newString[i]='\0';

	getLine(oldLine);
	i=0;
	k=0;

	while(oldLine[i]!= '\0'){
	if(isAMatch(oldLine, i, oldString) == 1){// if match is 1
	j=0; // init j to 0
	while(newString[j]!='\0'){
	newLine[k]=newString[j];// copy from newString till it ends
	j++; k++;

}// end while  new
	len=0; // init len to 0
	while(oldString[len]!='\0'){
	i++; len++; //skip i to length of oldString
	//printf("%d\n", len);
}
}// end if
	else{
	newLine[k]=oldLine[i]; // copy oldLine to newLine
	i++;
	k++;
} //end else
}// end while old Line

	newLine[k]='\0';
	printf("%s\n", newLine);
}// end main


int getLine(char line[]){
	int i, c;

	for(i=0; (c=getchar()) != EOF && c!= '\n'; i++){
	line[i] = c;
}
	if(c == '\n'){
	line[i] = c;
}
	line[i] = '\0';
	return i;

}


int isAMatch(const char line[], int from, const char s[]){
	int i, j, result;
	result=0;
	i=from; // i starts from
	j=0; // j is initilised to 0(starting position of oldString)
	while(s[j]!='\0'){ // while we have string in oldString
	if(line[i] == s[j]){ // check if thier indexes match
	result++; // if they do increase result
} // end if
	i++;
	j++;
}// end while //  j is equal to string length of oldString
	if(result==stringLength(s)){ // if amount of strings matched were size of olString
	return 1;
}
	else{return 0;}
}

int stringLength(const char s[]){
	int i = 0;

	while(s[i] != '\0'){
	i++;
}

return i;
}
