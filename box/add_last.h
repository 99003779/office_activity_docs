/**
 * @file add_last.h
 * @author Neha Tabassum (neha.tabassum@ltts.com)
 * @brief This file stores header for all the boxes
 * @version 0.1
 * @date 2021-02-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

# ifndef _ADD_LAST_H_
# define _ADD_LAST_H_

/**
 * @brief Structure which holds information of unique_id,length,breadth,height,color,weight of every box
 */
/**
 * @brief add_boxes adding data for the boxes
 * @param [in] box1 array where boxes to be added
 * @param [in] number_of_boxes total number of boxes
 * @return all the boxes
 */
int add_last(int unique_ID,int length, int breadth, int height, char color, int height)
{
    int n, i;
    for(i = 0; i<n; i++) {
        printf("\nEnter Unique ID:");
        scanf("%d",&arrayOfBoxes[i].uniqueID);
        printf("\nEnter length:");
        scanf("%d",&arrayOfBoxes[i].length);
		printf("\nEnter breadth:");
        scanf("%d",&arrayOfBoxes[i].breadth);
		printf("\nEnter height:");
        scanf("%d",&arrayOfBoxes[i].height);
        printf("\nEnter Box color:");
        scanf("%s",arrayOfBoxes[i].color);
        printf("\nEnter weight:");
        scanf("%d",&arrayOfBoxes[i].weight);
		printf("Box Added\n");
    }

}
Box* add_boxes(Box* box1,unsigned int number_of_boxes);

# endif