#pragma once
#include "Product.h"

void Name_search(Product* list, int size, char* name);
void Serial_num_search(Product* list, int size, int num);
void Print_Rating(int total_rate, int rating_count);
void Website_ranking(int* total, int* count);
void Low_to_high(Product* list, int size);
void Select_cat(Product* list, int size);