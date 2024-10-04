#include <stdio.h>
#include <string.h>

int main() {
  int counter1[] = {0,0,0,0};
  int counter2[] = {0,0,0,0};

  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

// Loop through first string adding to counter
  for(int i = 0; i < strlen(s1); i++){
    if(s1[i] == 'a'){
      counter1[0]++;
    }
    if(s1[i] == 'b'){
      counter1[1]++;
    }    
    if(s1[i] == 'c'){
      counter1[2]++;
    }
      if(s1[i] == 'd'){
      counter1[3]++;
    }
  }

// Loop through second string adding to counter
  for(int i = 0; i < strlen(s2); i++){
    if(s2[i] == 'a'){
      counter2[0]++;
    }
    if(s2[i] == 'b'){
      counter2[1]++;
    }    
    if(s2[i] == 'c'){
      counter2[2]++;
    }
      if(s2[i] == 'd'){
      counter2[3]++;
    }
  }
  
  int flag = 0;
  for(int j = 0; j < 4; j++ ){
    if(counter1[j] != counter2[j]){
      flag++;
    }
  }

  printf("%i %i %i %i\n", counter1[0], counter1[1], counter1[2], counter1[3]);
  printf("%i %i %i %i\n", counter2[0], counter2[1], counter2[2], counter2[3]);

  if(flag >= 1){
    printf("Not Anagram!\n");
  } else {
    printf("Anagram!\n");
  }
}