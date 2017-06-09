/*
 * heyimsimple.cpp
 *
 *  Created on: Jun 9, 2017
 *      Author: lexi
 */

#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class check{
private:
	char *st;
	char *ch;
	int *poss;
	int times,sizes,sizec,poscounter;
public:
	check(char *str,char *chr){
		poscounter=0;
		sizes=strlen(str);
		sizec=strlen(chr);
		st=new char[sizes];
		ch=new char[sizec];
		poss=new int[sizes];
		for(int i=0;str[i]!='\0';i++)
			st[i]=str[i];
		for(int i=0;chr[i]!='\0';i++)
			ch[i]=chr[i];
		calculate();
	}
	void calculate(){
		for(int i=0;i<sizes;i++)
			if(strcheck(i)){
				poss[poscounter]=i;
				poscounter++;
			}
	}
	bool strcheck(int in){
		for(int i=0;i<sizec&&ch[i]!='\0';i++){
			if(st[in+i]!=ch[i])
				return 0;
		}
		return 1;
	}
	void display(){
		cout<<"There are totally "<<poscounter<<"repeatations.\n"<<"They are :";
		for(int i=0;i<poscounter;i++)
			cout<<poss[i]<<endl;
	}
	int strlen(char *blah){
		int i;
		for(i=0;blah[i]!='\0';i++);
		return i;
	}
};
int main(){
//	char sting[]="Star Wars is an American epic space operStar Wars is an American epic space operStar Wars is an American epic space oper";
	char sting[]="Star Wars is an American epic space opera franchise, centered on a film series created by George Lucas. It depicts the adventures of various characters a long time ago in a galaxy far, far away. The franchise began in 1977 with the release of the film Star Wars (later subtitled Episode IV: A New Hope in 1981),[2][3] which became a worldwide pop culture phenomenon. It was followed by the successful sequels The Empire Strikes Back (1980) and Return of the Jedi (1983); these three films constitute the original Star Wars trilogy. A prequel trilogy was released between 1999 and 2005, which received mixed reactions from both critics and fans. A sequel trilogy began in 2015 with the release of Star Wars: The Force Awakens. All seven films were nominated for Academy Awards (with wins going to the first two films) and have been commercial successes, with a combined box office revenue of over $7.5 billion,[4] making Star Wars the third highest-grossing film series.[5] Spin-off films include the animated Star Wars: The Clone Wars (2008) and Rogue One (2016), the latter of which is the first in an upcoming series of anthology films. The series has spawned an extensive media franchise including books, television series, computer and video games, and comic books, all of which take place within the same continuity as the films, resulting in significant development of the series's fictional universe, with the non-canonical works falling under the defunct Star Wars Legends label. Star Wars also holds a Guinness World Records title for the Most successful film merchandising franchise. In 2015, the total value of the Star Wars franchise was estimated at USD $42 billion,[6][7] making Star Wars the second highest-grossing media franchise of all time. In 2012, The Walt Disney Company bought Lucasfilm for $4.06 billion and earned the distribution rights to all subsequent Star Wars films, beginning with the release of The Force Awakens in 2015.[8] The former distributor, 20th Century Fox, retains the physical distribution rights for the first two Star Wars trilogies, owns permanent rights for the original 1977 film and continues to hold the rights for the prequel trilogy and the first two sequels to A New Hope until May 2020.[9][10] Walt Disney Studios owns digital distribution rights to all the Star Wars films, excluding A New Hope.[10][11]";
	char *search;
	printf("Enter the string\n");
	search=new char[40];
	scanf("%[^\t]s",search);
	check c(sting,search);
	c.display();
}
