#include<main.h>

void Search_Flights()
{
    char ch;
    char source1[15],destination1[15];
    char source,destination;
    int distance = 0;
    
    source_station();

    while(1)
    {
        printf("Enter Source(eg: Bangalore=B) : ");
        source = valid_char();
        if(source == '\0')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    destination_station();
    
    while(1)
    {
        printf("Enter Destination(eg: Bangalore=B) : ");
        destination  = valid_char();
        if(destination  == '\0')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    if(source =='A')
    {
        strcpy(source1,"Ahmedabad");
        if(destination == 'B')
        {
            printf("Available Flight From Ahmedabad to Bangalore is :\n");
            printf("Flight ID: AI707 | Ahmedabad -> Bangalore | Distance: 1235 km | Base Price: Rs. 4940\n"); 
            distance = 1235;
            strcpy(destination1,"Bangalore");
        }
        else if(destination == 'C')
        {
            printf("Available Flight From Ahmedabad to Chenni is :\n");
            printf("Flight ID: SG303 | Ahmedabad -> Chenni | Distance: 1370  km | Base Price: Rs. 5480\n");
            distance = 1370;
            strcpy(destination1,"Chenni");
        }
        else if (destination == 'D')
        {
            printf("Available Flight From Ahmedabad to Delhi is :\n");
            printf("Flight ID: AI101 | Ahmedabad -> Delhi | Distance: 755 km | Base Price: Rs. 3020\n");
            distance = 755;
            strcpy(destination1,"Delhi");
        }
        else if(destination == 'G')
        {
            printf("Available Flight From Ahmedabad to Goa is :\n");
            printf("Flight ID: G8111 | Ahmedabad -> Goa | Distance: 875 km | Base Price: Rs. 3500\n");
            distance = 875;
            strcpy(destination1,"Goa");
        }
        else if(destination == 'H')
        {
            printf("Available Flight From Ahmedabad to Hyderabad  is :\n");
            printf("Flight ID: 6E202 | Ahmedabad -> Hyderabad | Distance: 950 km | Base Price: Rs. 3800\n");
            distance = 950;
            strcpy(destination1,"Hyderabad");
        }
        else
        {
            printf("Sorry No Flight Is Available For Your Destination\n");
        }
    }
    else if(source == 'B')
    {
        strcpy(source1,"Bangalore");
        if(destination == 'A')
        {
            printf("Available Flight From Bangalore to Ahmedabad is :\n");
            printf("Flight ID: AI708 | Bangalore -> Ahmedabad | Distance: 1235 km | Base Price: Rs. 4940\n");
            distance = 1235; 
            strcpy(destination1,"Ahmedabad");
        }
        else if(destination == 'C')
        {
            printf("Available Flight From Bangalore to Chenni is :\n");
            printf("Flight ID: SG304 | Bangalore -> Chenni  | Distance: 290 km | Base Price: Rs. 1160\n");
            distance = 290;
            strcpy(destination1, "Chenni");
        }
        else if (destination == 'D')
        {
            printf("Available Flight From Bangalore to Delhi is :\n");
            printf("Flight ID: AI102 | Bangalore -> Delhi | Distance: 1740 km | Base Price: Rs. 6960\n");
            distance = 1740;
            strcpy(destination1,"Delhi");
        }
        else if(destination == 'G')
        {
            printf("Available Flight From Bangalore to Goa is :\n");
            printf("Flight ID: G8112 | Bangalore -> Goa | Distance: 470 km | Base Price: Rs. 1880\n");
            distance = 470;
            strcpy(destination1, "Goa");
        }
        else if(destination == 'H')
        {
            printf("Available Flight From Bangalore to Hyderabad  is :\n");
            printf("Flight ID: 6E203 | Bangalore -> Hyderabad | Distance: 500 km | Base Price: Rs. 2000\n");
            distance = 500;
            strcpy(destination1,"Hyderabad");
        }
        else
        {
            printf("Sorry No Flight Is Available For Your Destination\n");
        }
    }
    else if(source == 'C')
    {
        strcpy(source1,"Chenni");
        if(destination == 'A')
        {
            printf("Available Flight From Chenni to Ahmedabad is :\n");
            printf("Flight ID: AI709 | Chenni -> Ahmedabad | Distance: 1370 km | Base Price: Rs. 5480\n");
            distance = 1370;
            strcpy(destination1,"Ahmedabad");
        }
        else if(destination == 'B')
        {
            printf("Available Flight From Chenni to Bangalore is :\n");
            printf("Flight ID: SG305 | Chenni -> Bangalore  | Distance: 290 km | Base Price: Rs. 1160\n");
            distance = 290;
            strcpy(destination1,"Bangalore");
        }
        else if (destination == 'D')
        {
            printf("Available Flight From Chenni to Delhi is :\n");
            printf("Flight ID: AI103 | Chenni -> Delhi | Distance: 1760 km | Base Price: Rs. 7040\n");
            distance = 1760;
            strcpy(destination1,"Delhi");
        }
        else if(destination == 'G')
        {
            printf("Available Flight From Chenni to Goa is :\n");
            printf("Flight ID: G8113 | Chenni -> Goa | Distance: 740 km | Base Price: Rs. 2960\n");
            distance = 740;
            strcpy(destination1,"Goa");
        }
        else if(destination == 'H')
        {
            printf("Available Flight From Chenni to Hyderabad  is :\n");
            printf("Flight ID: 6E204 | Chenni -> Hyderabad | Distance: 515 km | Base Price: Rs. 2060\n");
            distance = 515;
            strcpy(destination1,"Hyderabad");
        }
        else
        {
            printf("Sorry No Flight Is Available For Your Destination\n");
        }
    }
    else if (source == 'D')
    {
        strcpy(source1,"Delhi");
        if(destination == 'A')
        {
            printf("Available Flight From Delhi to Ahmedabad is :\n");
            printf("Flight ID: AI710 | Delhi -> Ahmedabad | Distance: 755 km | Base Price: Rs. 3020\n"); 
            distance = 755;
            strcpy(destination1, "Ahmedabad");
        }
        else if(destination == 'B')
        {
            printf("Available Flight From Delhi to Bangalore is :\n");
            printf("Flight ID: SG306 | Delhi -> Bangalore  | Distance: 1740 km | Base Price: Rs. 6960\n");
            distance = 1740;
            strcpy(destination1,"Bangalore");
        }
        else if (destination == 'C')
        {
            printf("Available Flight From Delhi to Chenni is :\n");
            printf("Flight ID: AI104 | Delhi -> Chenni | Distance: 1760 km | Base Price: Rs. 7040\n");
            distance = 1760;
            strcpy(destination1,"Chenni");
        }
        else if(destination == 'G')
        {
            printf("Available Flight From Delhi to Goa is :\n");
            printf("Flight ID: G8114 | Delhi -> Goa | Distance: 1515 km | Base Price: Rs. 6060\n");
            distance = 1515;
            strcpy(destination1,"Goa");
        }
        else if(destination == 'H')
        {
            printf("Available Flight From Delhi to Hyderabad  is :\n");
            printf("Flight ID: 6E205 | Delhi -> Hyderabad | Distance: 1250 km | Base Price: Rs. 5000\n");
            distance = 1250;
            strcpy(destination1,"Hyderabad");
        }
        else
        {
            printf("Sorry No Flight Is Available For Your Destination\n");
        } 
    }
    else if(source == 'G')
    {
        strcpy(source1,"Goa");
        if(destination == 'A')
        {
            printf("Available Flight From Goa to Ahmedabad is :\n");
            printf("Flight ID: AI711 | Goa -> Ahmedabad | Distance: 875 km | Base Price: Rs. 3500\n"); 
            distance = 875;
            strcpy(destination1,"Ahmedabad");
        }
        else if(destination == 'B')
        {
            printf("Available Flight From Goa to Bangalore is :\n");
            printf("Flight ID: SG307 | Goa -> Bangalore  | Distance: 470 km | Base Price: Rs. 1880\n");
            distance = 470;
            strcpy(destination1,"Bangalore");
        }
        else if (destination == 'C')
        {
            printf("Available Flight From Goa to Chenni is :\n");
            printf("Flight ID: AI105 | Goa -> Chenni | Distance: 740 km | Base Price: Rs. 2960\n");
            distance = 740;
            strcpy(destination1,"Chenni");
        }
        else if(destination == 'D')
        {
            printf("Available Flight From Goa to Delhi  is :\n");
            printf("Flight ID: G8115 | Goa -> Delhi | Distance: 1515 km | Base Price: Rs. 6060\n");
            distance = 1515;
            strcpy(destination1,"Delhi");
        }
        else if(destination == 'H')
        {
            printf("Available Flight From Goa to Hyderabad  is :\n");
            printf("Flight ID: 6E206 | Goa -> Hyderabad | Distance: 660 km | Base Price: Rs. 2640\n");
            distance = 660;
            strcpy(destination1,"Hyderabad");
        }
        else
        {
            printf("Sorry No Flight Is Available For Your Destination\n");
        }
    }
    else if(source == 'H')
    {
        strcpy(source1,"Hyderabad");
        if(destination == 'A')
        {
            printf("Available Flight From Hyderabad to Ahmedabad is :\n");
            printf("Flight ID: AI712 | Hyderabad -> Ahmedabad | Distance: 950 km | Base Price: Rs. 3800\n");
            distance = 950; 
            strcpy(destination1,"Ahmedabad");
        }
        else if(destination == 'B')
        {
            printf("Available Flight From Hyderabad to Bangalore is :\n");
            printf("Flight ID: SG308 | Hyderabad -> Bangalore  | Distance: 500 km | Base Price: Rs. 2000\n");
            distance = 500;
            strcpy(destination1,"Bangalore");
        }
        else if (destination == 'C')
        {
            printf("Available Flight From Hyderabad to Chenni is :\n");
            printf("Flight ID: AI106 | Hyderabad -> Chenni | Distance: 515 km | Base Price: Rs. 2060\n");
            distance = 515;
            strcpy(destination1,"Chenni");
        }
        else if(destination == 'D')
        {
            printf("Available Flight From Hyderabad to Delhi  is :\n");
            printf("Flight ID: G8116 | Hyderabad -> Delhi | Distance: 1250 km | Base Price: Rs. 5000\n");
            distance = 1250;
            strcpy(destination1,"Delhi");
        }
        else if(destination == 'G')
        {
            printf("Available Flight From Hyderabad to Goa  is :\n");
            printf("Flight ID: 6E207 | Hyderabad -> Goa | Distance: 660 km | Base Price: Rs. 2640\n");
            distance = 660;
            strcpy(destination1,"Goa");
        }
        else
        {
            printf("Sorry No Flight Is Available For Your Destination\n");
        }
    }
    else
    {
        printf("Wrong Choice/Invalid Input\n");
    }  
    
}
