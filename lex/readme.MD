#
These LEX codes work on linux as they are , However to them to work on windows A yywrap function definition is required right before int main().
#
##

int yywrap(){
	return 1;
}

##
