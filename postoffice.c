#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_STRING_LENGTH 6

struct package
{
	char* id;
	int weight;
};

typedef struct package package;

struct post_office
{
	int min_weight;
	int max_weight;
	package* packages;
	int packages_count;
};

typedef struct post_office post_office;

struct town
{
	char* name;
	post_office* offices;
	int offices_count;
};

typedef struct town town;



void print_all_packages(town t) 
{
    int i,j;
    printf("%s\n",t.name);
    for(i=0;i<t.offices_count;i++)
    {
        
        printf("\t%d:\n",i);
        for(j=0;j<t.offices[i].packages_count;j++)
        {
            printf("\t\t%s\n",t.offices[i].packages[j].id);
        }
    }
}

void send_all_acceptable_packages(town* source, int source_office_index, town* target, int target_office_index) 
{	
int i=0,j,k;//1-target 0-source
int wt;
int min1,max1;
int packagecount1,packagecount0;
int count1=0;
packagecount0=source->offices[source_office_index].packages_count;

min1=target->offices[target_office_index].min_weight;
max1=target->offices[target_office_index].max_weight;

 

for(i=0;i<packagecount0;i++)
{
  packagecount1 = target->offices[target_office_index].packages_count;
 

  wt = source->offices[source_office_index].packages[i].weight;

  if (wt >= min1 && wt <= max1) {
    target->offices[target_office_index].packages =
        realloc(target->offices[target_office_index].packages,
                sizeof(package) * (packagecount1 + 1));

    target->offices[target_office_index].packages[packagecount1] =
        source->offices[source_office_index].packages[i];

    target->offices[target_office_index].packages_count++;
    source->offices[source_office_index].packages_count--;
       }
}
}

town town_with_most_packages(town* towns, int towns_count)
 {
     int i,j,k;
     int packagecount[20];
     int max;
     int index;
for(i=0;i<towns_count;i++)
{
    for(j=0;j<towns[i].offices_count;j++)
    {
        packagecount[i]+=towns[i].offices[j].packages_count;
    }
}
for(i=0;i<towns_count;i++)
{
    if(packagecount[i]>max)
    {
        max=packagecount[i];
        index=i;
    }
}
return towns[index];

}

town* find_town(town* towns, int towns_count, char* name)
 {
     int i;
     int index;
     for(i=0;i<towns_count;i++)
     {
            if(strcmp(towns[i].name,name)==0)
        {
            index=i;
        }

    }
    return towns+index;
 }

int main()
{
	int towns_count;
	scanf("%d", &towns_count);

	town* towns = malloc(sizeof(town)*towns_count);
	for (int i = 0; i < towns_count; i++)
     {
		towns[i].name = malloc(sizeof(char) * MAX_STRING_LENGTH);
		scanf("%s", towns[i].name);
		scanf("%d", &towns[i].offices_count);

		towns[i].offices = malloc(sizeof(post_office)*towns[i].offices_count);

		for (int j = 0; j < towns[i].offices_count; j++)
         {
			scanf("%d%d%d", &towns[i].offices[j].packages_count, &towns[i].offices[j].min_weight, &towns[i].offices[j].max_weight);

			towns[i].offices[j].packages = malloc(sizeof(package)*towns[i].offices[j].packages_count);

			for (int k = 0; k < towns[i].offices[j].packages_count; k++)
             {
				towns[i].offices[j].packages[k].id = malloc(sizeof(char) * MAX_STRING_LENGTH);
				scanf("%s", towns[i].offices[j].packages[k].id);
				scanf("%d", &towns[i].offices[j].packages[k].weight);
			}
		}
	}
	int queries;
	scanf("%d", &queries);
	char town_name[MAX_STRING_LENGTH];
	while (queries--) {
		int type;
		scanf("%d", &type);
		switch (type) {
		case 1:
			scanf("%s", town_name);
			town* t = find_town(towns, towns_count, town_name);
			print_all_packages(*t);
			break;
		case 2:
			scanf("%s", town_name);
			town* source = find_town(towns, towns_count, town_name);
			int source_index;
			scanf("%d", &source_index);
			scanf("%s", town_name);
			town* target = find_town(towns, towns_count, town_name);
			int target_index;
			scanf("%d", &target_index);
			send_all_acceptable_packages(source, source_index, target, target_index);
			break;
		case 3:
			printf("Town with the most number of packages is %s\n",                                                     town_with_most_packages(towns, towns_count).name);
			break;
		}
	}
	return 0;
}
 

