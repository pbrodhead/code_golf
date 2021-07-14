i;
int main(){
	char s[80];
	for(;++i<101;){
		s[0] = '\0';
		if(!(i%3)) strcat(s,"Fizz");
		if(!(i%5)) strcat(s,"Buzz");
		if((i%3) && (i%5)) sprintf(s, "%d", i);
		strcat(s,"\n");
		printf(s);
	}
}
