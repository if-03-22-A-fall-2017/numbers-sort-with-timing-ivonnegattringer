/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		Ivonne Gattringer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
void init_random(int* array, int number){
	for (int i = 0; i < number; i++) {
		array[i] = rand() % 1025;
	}
}
	void bubble_sort(int* array, int number){
		int endNumber = number-1;
		bool is_sorted = false;
		while (is_sorted == false) {
			is_sorted = true;
			for (int i = 0; i < endNumber; i++) {
				if(array[i]> array[i+1]){
					int swap = array[i];
					array[i] = array[i+1];
					array[i+1] = swap;
					is_sorted = false;
				}
				endNumber--;
			}
		}
  }
void	insertion_sort(int* array, int number){
	int j,i;
	for (j = 1; j < number; j++) {
			int key = array[j];
			i = j - 1;
			while (i >= 0 && array[i] > key) {
				array[i + 1] = array[i];
				i--;
			}
			array[i + 1] = key;
		}
  }
