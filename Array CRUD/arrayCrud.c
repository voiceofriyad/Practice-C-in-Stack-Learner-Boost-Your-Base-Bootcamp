#include<stdio.h>
#include<stdlib.h>

int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

int main()
{
    do{
        printf("Enter 1 To Create An Array.\n");
        printf("Enter 2 To Read An Array.\n");
        printf("Enter 3 To Update An Array.\n");
        printf("Enter 4 To Delete An Array.\n");
        printf("Enter 5 To Exit From Work.\n");

        int chooseNumber;
        scanf("%d", &chooseNumber) ;

        switch(chooseNumber)
        {
            case 1:

                do{
                    printf("Enter 1 For Create A New Array.\n");
                    printf("Enter 2 For Insert A New Value in Array.\n");
                    printf("Enter 3 To Exit From Work.\n");
                    int chooseCreate;
                    scanf("%d", &chooseCreate);

                    if(chooseCreate == 1){
                    printf("Enter the size of the array: ");
                        int arraySize = 0;
                        int arrayValue[arraySize];

                        scanf("%d", &arraySize);

                        printf("Enter %d value to create an array: ", arraySize);


                        for(int i = 0; i < arraySize; i++){
                            scanf("%d", &arrayValue[i]);
                        }

                        printf("\n\n");
                        printf("New Array: ");
                        for(int i = 0; i < arraySize; i++){
                            printf("%d ", arrayValue[i]);
                        }
                        printf("\n\n");
                    }

                    else if(chooseCreate == 2){
                        do{
                            printf("Please choose which array you want to Insert a new Value, Existing array or New array: \n");
                            printf("Enter 1 For Existing Array.\n");
                            printf("Enter 2 For New Array.\n");
                            printf("Enter 3 To Exit From Work.\n");
                            int chooseCreateNew;
                            scanf("%d", &chooseCreateNew);

                            if(chooseCreateNew == 1){
                                printf("Enter the location(0-9) where you wish to insert an element: ");
                                int position, value;
                                scanf("%d", &position);


                                printf("Enter the value to insert: ");
                                scanf("%d", &value);

                                array[position] = value;

                                printf("Now the new array is: ");
                                for(int i = 0; i < 10; i++){
                                    printf("%d ", array[i]);
                                }

                                printf("\n\n");

                            }

                            else if(chooseCreateNew == 2){
                                printf("Sorry You Cna't Do This Now. ");

                                printf("\n\n");
                            }
                            else if(chooseCreateNew == 3){
                                exit(0);
                            }

                            else{
                            printf("Please Enter a Value From 1 to 3.\n");
                            }

                        } while(1);


                    }

                    else if(chooseCreate == 3){
                        exit(0);
                    }

                    else{
                        printf("Please Enter a Value From 1 to 3.\n");
                    }


                } while(1);





            case 2:
                do{
                    printf("Enter 1 For Read The Full Array.\n");
                    printf("Enter 2 For Read An Index Value In Array.\n");
                    printf("Enter 3 For Search An Value In Array.\n");
                    printf("Enter 4 To Exit From Work.\n");

                    int chooseRead;
                    scanf("%d", &chooseRead);

                    if(chooseRead == 1){
                        printf("The Array is: ");
                        for(int i = 0; i < 10; i++){
                            printf("%d ", array[i]);
                        }
                        printf("\n\n");
                    }

                    else if(chooseRead == 2){
                        printf("Please Tell Us Which Index(0-9) Value You Want to Read: ");
                        int readIndex;
                        scanf("%d", &readIndex);

                        printf("The Value is: %d\n", array[readIndex]);

                    }
                    else if(chooseRead == 3){
                        printf("Enter The Value You Want To Search: ");
                        int low_index = 0, high_index = 9, mid_index, number;
                        scanf("%d", &number);

                        while(low_index <= high_index){
                            mid_index = (low_index + high_index) / 2;

                            if(number == array[mid_index]){
                                break;
                            }
                            if(number < array[mid_index]){
                                high_index = mid_index - 1;
                            }
                            else{
                                low_index = mid_index + 1;
                            }
                        }

                        if(low_index > high_index){
                            printf("%d is not in the array.\n", number);
                        }
                        else{
                            printf("%d is found in the array. It is the %d th element of the array.\n", array[mid_index], mid_index);
                        }

                        printf("\n\n");

                    }

                    else if(chooseRead == 4){
                        exit(0);
                    }

                    else{
                        printf("Please Enter a Value From 1 to 3.\n");
                    }


                } while(1);




            case 3:
                do{
                    printf("Enter 1 For Update.\n");
                    printf("Enter 2 To Exit From Work.\n");
                    int chooseUpdate;
                    scanf("%d", &chooseUpdate);

                    if(chooseUpdate == 1){
                        printf("Enter the location(0-9) where you wish to Update an element: ");
                        int position1, value1;
                        scanf("%d", &position1);


                        printf("Enter the value to insert: ");
                        scanf("%d", &value1);

                        array[position1] = value1;

                        printf("Now the new array is: ");
                        for(int i = 0; i < 10; i++){
                            printf("%d ", array[i]);
                        }

                        printf("\n\n");
                    }
                    else if(chooseUpdate == 2){
                        exit(0);
                    }

                    else{
                        printf("Please Enter a Value From 1 to 2.\n");
                    }

                } while(1);




            case 4:
                do{
                    printf("Enter 1 For Delete An Index: \n");
                    printf("Enter 2 For Delete A value: \n");
                    printf("Enter 3 To Exit From Work.\n");

                    int chooseDelete;
                    scanf("%d", &chooseDelete);

                    if(chooseDelete == 1){
                        printf("Enter the location(0-9) where you wish to insert an element: ");
                        int position2, value2;
                        scanf("%d", &position2);

                        if(position2 >= 10){
                          printf("\n\nDeletion not possible\n\n");
                        }
                        else{
                          //updating the locations with next elements
                            for(int i = position2 - 1; i < 9; i++)
                            array[i] = array[i+1];
                        }

                        printf("\n\nResultant array is: ");
                        /*
                            the array size gets reduced by 1
                            after deletion of the element
                        */
                        for(int i = 0; i < 9; i++){
                           printf("%d  ", array[i]);
                        }
                        printf("\n\n");
                    }

                    else if(chooseDelete == 2){
                        printf("\n\nEnter the element to be deleted: ");
                        int element, found, pos;
                        scanf("%d", &element);

                        // check the element to be deleted is in array or not
                        for(int i = 0; i < 10; i++)
                        {
                            if(array[i] == element)
                            {
                                found = 1;
                                pos = i;
                                break;  // terminate the loop
                            }
                        }

                        if(found == 1) // the element to be deleted exists in the array
                        {
                            for(int i = pos; i < 9; i++)
                                array[i] = array[i+1];
                        }
                        else{
                            printf("\n\nElement %d is not found in the array\n\n", element);
                        }

                        printf("\n\nResultant array is: ");
                        /*
                            the array size gets reduced by 1
                            after deletion of the element
                        */
                        for(int i = 0; i < 9; i++){
                           printf("%d  ", array[i]);
                        }
                        printf("\n\n");
                    }

                    else if(chooseDelete == 3){
                        exit(0);
                    }

                    else{
                        printf("Please Enter a Value From 1 to 3.\n");
                    }

                } while(1);



            case 5:
                exit(0);


            default:
                printf("Please Enter a Value From 1 to 5.\n");
        }

    }while(1);


}


