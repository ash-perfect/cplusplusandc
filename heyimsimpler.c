/*
 * heyimsimpler.c
 *
 *  Created on: Jun 9, 2017
 *      Author: lexi
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int poscounter,i,j,tag,k,size;
	int *poss;
//	char sting[]="Star Wars is an American epic space operStar Wars is an American epic space operStar Wars is an American epic space oper";
	char sting[]="Star Wars is an American epic space opera franchise, centered on a film series created by George Lucas. It depicts the adventures of various characters a long time ago in a galaxy far, far away. The franchise began in 1977 with the release of the film Star Wars (later subtitled Episode IV: A New Hope in 1981),[2][3] which became a worldwide pop culture phenomenon. It was followed by the successful sequels The Empire Strikes Back (1980) and Return of the Jedi (1983); these three films constitute the original Star Wars trilogy. A prequel trilogy was released between 1999 and 2005, which received mixed reactions from both critics and fans. A sequel trilogy began in 2015 with the release of Star Wars: The Force Awakens. All seven films were nominated for Academy Awards (with wins going to the first two films) and have been commercial successes, with a combined box office revenue of over $7.5 billion,[4] making Star Wars the third highest-grossing film series.[5] Spin-off films include the animated Star Wars: The Clone Wars (2008) and Rogue One (2016), the latter of which is the first in an upcoming series of anthology films. The series has spawned an extensive media franchise including books, television series, computer and video games, and comic books, all of which take place within the same continuity as the films, resulting in significant development of the series's fictional universe, with the non-canonical works falling under the defunct Star Wars Legends label. Star Wars also holds a Guinness World Records title for the Most successful film merchandising franchise. In 2015, the total value of the Star Wars franchise was estimated at USD $42 billion,[6][7] making Star Wars the second highest-grossing media franchise of all time. In 2012, The Walt Disney Company bought Lucasfilm for $4.06 billion and earned the distribution rights to all subsequent Star Wars films, beginning with the release of The Force Awakens in 2015.[8] The former distributor, 20th Century Fox, retains the physical distribution rights for the first two Star Wars trilogies, owns permanent rights for the original 1977 film and continues to hold the rights for the prequel trilogy and the first two sequels to A New Hope until May 2020.[9][10] Walt Disney Studios owns digital distribution rights to all the Star Wars films, excluding A New Hope.[10][11]";
	char *search;
	size=sizeof(sting)/sizeof(sting[0]);
	search = (char*) calloc(40,sizeof(char));
	poss= (int*) calloc(size,sizeof(int));
	printf("Enter the string\n");
	scanf("%[^\t]s",search);
	for(i=0;i<size;i++){
		tag=1;
		for(j=0;j<40&&search[j]!='\0';j++){
			if(sting[j+i]!=search[j])
				tag=0;
		}
		if(tag){
			poss[poscounter]=i;
			poscounter++;
				}
	}
	printf("There are totally %d repeatations.\n They are :\n",poscounter);
			for(k=0;k<poscounter;k++)
				printf("%d\n",poss[k]);
    return 0;
}
