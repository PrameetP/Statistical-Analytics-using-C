/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief C Program to calculate the statistical values of a given array of data
 *
 * This program calculates statistical values including mean, median, maximum and minimum values
 *
 *
 * @author Prameet Patil
 * @date 24 Sept 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

 /* Other Variable Declarations Go Here */
 int mean, median, greatest, max,min;
  /* Statistics and Printing Functions Go Here */
  
        print_array(test,SIZE);
  mean = find_mean(test, SIZE);
  
  
  median = find_median(test ,SIZE);
  
  max = find_maximum(test, SIZE);
  min = find_minimum(test, SIZE);
  print_statistics(mean, median, max, min);

}

/* Add other Implementation File Code Here */
int print_array(unsigned char *arr, int size){
    printf("The array is:\n");
    for(int i=0;i<size;i++)
    {
        printf("array[%d]: %d\n",i,*(arr+i));
        
    }
    printf("\n");

}


int find_mean(unsigned char *arr, int size){
    int tot = 0, avg = 0;
    for(int i=0;i<size;i++)
    {
        tot=tot+(*arr);
    }
    avg = tot/size;
    return avg;
}


int find_median(unsigned char *arr, int size){
     int med_value, index;
        sort_array(arr,size);
        int mid = size/2;
        if(size%2 == 0)
        {
                index = (mid+(mid+1))/2;
        }
        else
        {
                index = (mid+1)/2;
        }
        for(int i = 0; i < index;i++)
        {
                med_value = *arr;
                arr++;
        }
        return med_value;
}


int sort_array(unsigned char * arr,int arr_Size){
     int i,j;
        for(i=0;i< arr_Size;i++)
        {
                for(j=i+1;j<arr_Size;j++)
                {
                        if(*(arr+j)>*(arr+i))
                        {
                                swap((arr+j),(arr+i));
                        }
                }
        }
}


void swap(unsigned char *first,unsigned char *second){
      int temp;
        temp = *second;
        *second = *first;
        *first = temp;
}


int find_maximum(unsigned char* arr, int size){
     int i,j,greatest;
        for(i = 0;i< size;i++ )
        {
                if(*arr >*(arr+i))
                {
                        greatest = *arr; 
                }
        }
        return greatest;
}


int find_minimum(unsigned char* arr, int size){
      int i,j,min;
        for(i = 0;i< size;i++ )
        {
                if(*arr <*(arr+i))
                {
                        min = *arr; 
                }
                arr++;
        }
        return min;
}


int print_statistics(int p_mean,int p_median,int p_max,int p_min){
    printf("1. Mean: %d",p_mean);      
    printf("\n2. Median = %d ",p_median);      
    printf("\n3. Greatest = %d", p_max);
    printf("\n4. Smallest = %d\n",p_min);
}

