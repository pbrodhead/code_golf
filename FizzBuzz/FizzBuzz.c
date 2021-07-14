int main(){
	//char s[80];
	for(int i=1;i<101;i++){
		s[0] = '\0';
		if(!(i%3)) strcat(s,"Fizz");
		if(!(i%5)) strcat(s,"Buzz");
		if((i%3) && (i%5)) sprintf(s, "%d", i);
		strcat(s,"\n");
		printf(s);
	}
}
