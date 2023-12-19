#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int room_for_both = 0;

    for(int i = 1; i<=n; i++){
        int people_in_room;
        int room_capacity;

        scanf("%d%d", &people_in_room,&room_capacity);

        if(room_capacity-people_in_room >=2){
            room_for_both++;
        }
    }

    printf("%d\n", room_for_both);



    return 0;
}


