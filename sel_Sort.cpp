#include<iostream>

void sel_sort(int* arr, int s);


int main(){
	int s = 10;
	int arr[10] = {}; 
	std::cout << "enter  ten digit" << std::endl;
	
	for(int  i = 0; i < s; ++i)
	{
		std::cin>> arr[i];
	}	

	sel_sort(arr, s);

	for(int i = 0; i < s; ++i)
	{
		std::cout<< arr[i] << ' ';
	}
}

void sel_sort(int* arr, int s)
{

	for(int i = 0; i < s - 1; ++i)
	{
		
		int in2 = i;
		
		for(int j = i + 1; j < s; ++j)
		{
			if(arr[j] < arr[in2])
			{
				in2 = j;
			}
		}	
		if(in2 != i)
		{
			std::swap(arr[i], arr[in2]);
		}
	}
}
