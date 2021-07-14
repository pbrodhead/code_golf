i;
main(){
	for(;++i<101;){
		if(!(i%3)) printf("Fizz");
		if(!(i%5)) printf("Buzz");
		if((i%3) && (i%5)) printf("%d", i);
		printf("\n");
	}
}
