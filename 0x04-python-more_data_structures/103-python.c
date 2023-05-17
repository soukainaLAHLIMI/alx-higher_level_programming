#include <stdio.h>
#include <Python.h>

/**
 *
 * print
 *
 * Return
 *
 */
void print_python_bytes(PyObject *p)
{
	char *string;
        long int size, i, limit;
        
        printf("[.] bytes object info\n");
        if(!PyBytes_Check(p))
        {       
                printf(" [ERROR] Invalid Bytes Object\n");
                return;
        }

        size = ((PyVarObject *)(p)->ob_size;
        string = ((PyBytesObject *)p)->ob_sval;

	printf(" size: %ld\n", size);
	printf(" trying string: %s\n", string);

	if(size >= 10)
	limit = 10;
	else
	limit = size + 1;

	printf(" first %ld bytes:", limit);

	for (i = 0; i < limit; i++)
	if (string[i] >= 0)
	printf(" %02x", string[i]);
	else
	printf(" %02x", 256 + string[i]);
	printf("\n");
	}
	/**
	 *
	 * print
	 *
	 * Return
	 */
void print_python_list(PyObject *p)
{
	long int size, i;




