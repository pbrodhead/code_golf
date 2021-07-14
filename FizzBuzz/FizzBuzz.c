i,a,b;
main(){
	for(;++i<101;){
		if(a=!(i%3)) printf("Fizz");
		if(b=!(i%5)) printf("Buzz");
		if(!(a|b)) printf("%d", i);
		printf("\n");
	}
}
