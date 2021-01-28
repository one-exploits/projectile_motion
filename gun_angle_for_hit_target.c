#include <stdio.h>
#include <math.h>
#include <stdlib.h>
static void info(void);
struct angle{
	double radian;
	double digree;
	
	
};
struct angle gun_angle(float,float,float);
struct angle gun_angle(float u,float s,float g){
	    struct angle agl;
        agl.radian=(asin((g*s)/(u*u)))/(2);	
 	   agl.digree=((180/M_PI)*(agl.radian));
 	   return agl; 
}	

int main(){
	struct angle ANGLE;
	float bullet_velocity;
	float target_distance;
	const float gravity=9.80665;
	info();
while(1){
	printf("\nEnter Velocity Of Bullet/Object :");
	scanf("%f",&bullet_velocity);	
	printf("\nEnter Target Distance :");	
    scanf("%f",&target_distance);		
	
	ANGLE=gun_angle(bullet_velocity,target_distance,gravity);
	//printf("\nGun angle in radian is %f",ANGLE.radian);
    printf("\nGun angle in digree is %f",ANGLE.digree);
   // usleep(20000);   
	}
	return 0; 
	}

static void info(){
printf("\n\n\nAuthor : One-Exploits @GNU/Projects"
"\nÂ©Mohammad Arquam(C.E.O)"
"\n+______________________________________________+"
"\n| Programmer,H@cker,Web developer,Web designer,|\n| Data Scientist,Software developer,YouTuber,  |\n| Blogger and more.\t\t\t       |\n|\t\t\t\t\t       |"
"\n| Gmail: oneexploits@gmail.com\t\t       |"
"\n| GitHub: https://github.com/one-exploits      |"
"\n| Insta: https://www.instagram.com/one_exploits\|"
"\n| Website: https://one-exploits.business.site/ |"
"\n|\t\t\t\t\t       |"
"\n| \t\t\tVersion:1.00.00\t       |\n"
"|\t\t\tDate:28/01/2021,Thu    |"
"\n+______________________________________________+");

}
