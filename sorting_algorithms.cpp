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
		int j;
		bool elements_were_swapped;
		int last_unsorted_element = number - 1;
		do {
			elements_were_swapped = false;
			for (j = 0; j < last_unsorted_element; j++) {
				if (array[j] > array[j + 1]) {
					int swap = array[j];
					array[j] = array[j+1];
					array[j+1] = swap;
					elements_were_swapped = true;
				}
			}
			last_unsorted_element--;
		} while (elements_were_swapped);
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
