void removeConsecutiveDuplicates(char *input) {
	   if(input[0]=='\0'||input[1]=='\0'){
              return ;
       }
     if(input[0]==input[1]){
           for(int i=1;input[i]!='\0';i++){
               input[i]=input[i+1]; 
           }
         return removeConsecutiveDuplicates(input);
     }
    else{
        return removeConsecutiveDuplicates(input+1);
    }
    

}
