char *_memset(char *s, char b, unsigned int n) 
{ 
	/**
	 * *fill a block of memory with a specific value
	 * * s: starting address of memory to be filled
	 * ub: the desired value
	 *  
	// // n: number of bytes to be changed
	// returns: changed array with new value for n bytes
	*/
	int i = 0;
       
	for (; n > 0; i++)
	 {
		 s[i] = b;
		 n--; 
	 }
	 return (s);
}
	
