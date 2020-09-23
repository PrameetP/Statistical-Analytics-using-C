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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print the given array to the screen
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param *arr The base address of array of 8-bit data
 * @param  size The size if the array of data 
 * 
 * 
 *
 * @return no return value
 */
int print_array(unsigned char*, int);


/**
 * @brief find the mean of the given array of data
 *
 * This function takes the base address and size of the array of data and returns the mean value of the data
 *
 * @param arr The base address of array of 8-bit data
 * @param  size The size if the array of data 
 * 
 *
 * @return avg The mean value of the data
 */
int find_mean(unsigned char* , int);

 
/**
 * @brief Sort the array in largest to smallest order
 *
 * This function takes the base address and size of the array of data and the sorts the array in largest to smallest order
 *
 * @param arr The base address of array of 8-bit data
 * @param  size The size if the array of data
 *
 * @return No return value
 */
int sort_array(unsigned char *, int);
/**
 * @brief find the median of the given array of data
 *
 * This function takes the base address and size of the array of data and returns the median value of the data
 *
 * @param arr The base address of array of 8-bit data
 * @param  size The size if the array of data 
 * 
 *
 * @return median The median value of the data
 */
int find_median(unsigned char * , int);


/**
 * @brief Swap the position of the two variables
 *
 * This function takes as an input the two variables and swaps their positions. This is used in sorting functionality
 *
 * @param first The first element to be swapped
 * @param second The second element to be swapped

 *
 * @return No return value
 */
void swap(unsigned char*, unsigned char*);
/**
 * @brief find the maximum of the given array of data
 *
 * This function takes the base address and size of the array of data and returns the maximum value from the array of data
 *
 * @param arr The base address of array of 8-bit data
 * @param  size The size if the array of data 
 * 
 *
 * @return greatest The maximum value of the data
 */
int find_maximum(unsigned char*,int); 
/**
 * @brief find the minimum of the given array of data
 *
 * This function takes the base address and size of the array of data and returns the minimum value from the array of data
 *
 * @param arr The base address of array of 8-bit data
 * @param  size The size if the array of data 
 * 
 *
 * @return min The minimum value of the data
 */
int find_minimum(unsigned char*,int);
/**
 * @brief Print the statistical values
 *
 * This function takes as an input the mean, median, maximum and minimum values of the array of data and Prints them on the screen
 *
 * @param mean The mean value of the array of data
 * @param  median The median value of the array of data
 * @param  greatest The maximum value from the array of data
 * @param  median The minimum value from the array of data
 *
 * @return No return value
 */

int print_statistics(int,int,int,int);

#endif /* __STATS_H__ */
#endif /* __STATS_H__ */
