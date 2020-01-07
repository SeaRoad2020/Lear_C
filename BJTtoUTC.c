#include <stdio.h>
/*基本思路就是因为要减8小时，另8为分类讨论的节点*/
    int main(){
   	int bjt=0,utc=0;
 	  scanf("%d",&bjt);
 	  if(bjt/100<8)
 	{
 		utc=bjt+1600;
	 }
	 else if(bjt/100==8){
	 	int fen=0,shi=0;
	 	fen = bjt%100;
	 	shi = fen/10;
	 	if (shi==0){
	 		utc = fen%10;
		 }
		 else{
		 	utc = bjt - 800;
		 }
	 	
	 }
	 else if(bjt/100>8){
	 	utc = bjt - 800;
	 }
	 printf("%d",utc);
 	
 }
