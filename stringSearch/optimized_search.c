#define LEN_A 2
#define LEN_B 2
#define LEN_P 1768
#define DIST 10

typedef unsigned char uint8_t;

typedef struct {
	uint8_t el[LEN_A];
} Array_A;

typedef struct {
	uint8_t el[LEN_B];
} Array_B;

//typedef struct {
//	uint8_t el[LEN_A + LEN_B];
//} Array_A_B;

typedef struct {
	const uint8_t el[LEN_P];
} Array_P;


Array_P pSequence = {
	0,3,3,0,0,0,2,2,3,3,3,0,3,0,1,1,3,3,1,1,1,0,2,2,3,0,0,1,
	0,0,0,1,1,0,0,1,1,0,0,1,3,3,3,1,2,0,3,1,3,1,3,3,2,3,0,2,
	0,3,1,3,2,3,3,1,3,1,3,0,0,0,1,2,0,0,1,3,3,3,0,0,0,0,3,1,
	3,2,3,2,3,2,2,1,3,2,3,1,0,1,3,1,2,2,1,3,2,1,0,3,2,1,3,3,
	0,2,3,2,1,0,1,3,1,0,1,2,1,0,2,3,0,3,0,0,3,3,0,0,3,0,0,1,
	3,0,0,3,3,0,1,3,2,3,1,2,3,3,2,0,1,0,2,2,0,1,0,1,2,0,2,3,
	0,0,1,3,1,2,3,1,3,0,3,1,3,3,1,3,2,1,0,2,2,1,3,2,1,3,3,0,
	1,2,2,3,3,3,1,2,3,1,1,2,3,2,3,3,2,1,0,2,1,1,2,0,3,1,0,3,
	1,0,2,1,0,1,0,3,1,3,0,2,2,3,3,3,1,2,3,1,1,2,2,2,3,2,3,2,
	0,1,1,2,0,0,0,2,2,3,0,0,2,0,3,2,2,0,2,0,2,1,1,3,3,2,3,1,
	1,1,3,2,2,3,3,3,1,0,0,1,2,0,2,0,0,0,0,1,0,1,0,1,2,3,1,1,
	0,0,1,3,1,0,2,3,3,3,2,1,1,3,2,3,3,3,3,0,1,0,2,2,3,3,1,2,
	1,2,0,1,2,3,2,1,3,1,2,3,0,1,2,3,2,2,1,3,3,3,2,2,0,2,0,1,
	3,1,1,2,3,2,2,0,2,2,0,2,2,3,1,3,3,0,3,1,0,2,0,2,2,1,0,1,
	2,3,1,0,0,1,0,3,1,3,3,0,0,0,2,0,3,2,2,1,0,1,3,3,2,3,2,2,
	1,3,3,0,2,3,0,2,0,0,2,3,3,2,0,0,0,0,0,2,2,1,2,3,3,3,3,2,
	1,1,3,1,0,0,1,3,3,2,0,0,1,0,2,1,1,1,3,0,3,2,3,2,3,3,1,0,
	3,1,0,0,0,1,2,3,3,1,2,2,0,3,2,1,3,1,2,0,0,1,3,2,1,0,1,1,
	3,1,0,3,2,2,3,1,0,3,2,3,3,0,3,2,2,3,3,2,0,2,1,3,2,2,3,0,
	2,1,0,2,0,0,1,3,1,2,0,0,2,2,1,0,3,3,1,0,2,3,0,1,2,2,3,1,
	2,3,0,2,3,2,2,3,2,0,2,0,1,0,1,3,3,2,2,3,2,3,1,1,3,3,2,3,
	1,1,1,3,1,0,3,2,3,2,2,2,1,2,0,0,0,3,0,1,1,0,2,3,2,2,1,3,
	3,0,1,1,2,1,0,0,2,2,3,3,1,3,3,1,3,3,1,2,3,0,0,2,0,0,1,2,
	2,3,0,0,3,0,0,0,2,2,0,2,1,3,2,2,3,2,2,1,1,0,3,0,2,3,3,0,
	1,2,2,1,2,1,1,2,0,3,1,3,0,0,0,2,3,1,0,3,3,3,2,0,1,3,3,0,
	2,2,1,2,0,1,2,0,2,1,3,3,2,2,1,0,1,3,2,0,3,1,1,3,3,0,3,2,
	0,0,2,0,3,3,3,3,1,0,0,2,0,0,0,0,1,3,2,2,0,0,1,0,1,3,0,0,
	0,1,0,3,0,2,1,0,2,3,2,2,3,2,3,3,0,1,1,1,2,3,2,0,0,1,3,1,
	0,3,2,1,2,3,2,0,2,1,3,3,0,0,1,2,2,0,2,2,2,2,1,0,3,0,1,0,
	1,3,1,2,1,3,0,3,2,3,1,2,0,3,0,0,1,0,0,1,3,3,1,3,2,3,2,2,
	1,1,1,3,2,0,3,2,2,1,3,0,1,1,1,3,1,3,3,2,0,2,3,2,1,0,3,3,
	0,0,0,2,0,1,1,3,3,1,3,0,2,1,0,1,2,3,2,1,3,2,2,3,0,0,0,2,
	1,3,3,1,0,3,2,1,0,1,3,3,3,2,3,1,1,2,0,0,1,0,0,1,3,2,2,0,
	1,3,3,3,0,3,3,2,0,1,0,1,3,0,0,2,0,2,2,2,2,3,2,3,0,0,1,3,
	2,1,3,2,1,1,2,3,2,0,0,1,0,3,2,0,2,1,0,3,2,0,0,0,3,3,2,1,
	3,3,2,2,3,0,1,0,1,2,2,0,0,1,2,3,3,1,3,2,0,0,0,0,2,0,2,1,
	3,0,3,2,0,0,3,3,2,1,0,2,0,1,0,1,1,3,3,3,3,2,0,0,0,3,3,0,
	0,0,3,3,2,2,1,0,0,0,2,0,0,0,3,3,3,2,0,1,0,1,1,3,3,1,0,0,
	3,2,2,2,2,0,0,3,2,3,1,1,0,0,0,3,3,3,3,2,3,0,3,3,3,1,1,1,
	3,3,0,0,0,3,3,1,1,0,3,0,0,3,1,0,0,2,0,1,3,0,3,3,1,0,0,1,
	1,0,0,2,2,2,3,3,2,0,0,0,0,2,0,0,0,0,0,2,1,3,3,2,0,3,2,2,
	1,3,3,3,0,3,2,2,2,3,0,2,0,0,3,3,1,2,0,3,1,3,2,3,1,3,0,3,
	1,1,0,2,3,3,2,1,2,3,1,0,1,1,0,0,0,3,2,0,0,3,2,1,0,0,1,1,
	0,0,0,3,2,3,2,1,1,3,3,3,1,0,0,1,3,1,3,1,0,3,2,0,0,2,3,2,
	3,2,0,3,1,0,3,3,2,3,2,2,3,2,0,0,0,1,3,3,1,0,3,2,2,1,0,2,
	0,1,2,2,2,1,2,0,3,3,3,3,2,3,3,0,0,0,2,1,1,0,1,3,3,2,1,2,
	0,0,3,3,3,3,2,3,2,2,1,0,1,3,2,0,2,0,0,3,3,3,2,0,1,3,0,0,
	0,2,0,0,2,2,3,2,1,1,0,1,3,0,1,3,3,2,3,2,2,3,3,0,1,3,3,0,
	1,1,1,1,0,0,0,0,3,2,1,3,2,3,3,2,3,3,0,0,0,0,3,3,3,0,3,3,
	2,3,1,1,0,2,1,0,3,2,3,1,0,1,0,0,3,3,1,0,2,0,0,2,3,0,2,2,
	0,1,1,3,2,0,2,1,0,3,0,2,3,1,3,3,2,1,1,2,0,0,3,0,1,1,0,3,
	0,0,3,2,0,0,3,1,3,2,2,1,3,3,2,0,0,0,0,1,1,0,3,3,1,3,3,1,
	2,3,0,0,2,2,2,3,2,2,3,1,2,1,0,1,3,0,3,3,2,1,1,3,3,3,2,2,
	0,2,2,1,3,2,3,2,3,2,3,3,1,3,1,3,3,0,3,2,3,3,2,2,3,3,2,1,
	1,0,3,0,0,1,0,0,2,3,2,3,2,1,1,3,0,3,3,2,2,2,3,3,1,1,0,1,
	2,3,2,1,3,0,2,1,2,1,3,0,0,1,0,3,0,2,2,3,3,2,3,0,0,1,1,0,
	3,0,1,0,2,2,3,2,3,3,2,3,3,2,2,0,2,0,0,2,2,3,3,1,1,2,0,0,
	2,2,3,1,3,3,0,0,3,2,0,1,0,0,1,1,3,3,1,3,3,2,0,0,0,3,0,1,
	3,1,1,0,0,0,0,0,2,0,2,0,0,0,2,3,1,0,0,1,0,3,1,0,0,3,0,3,
	3,2,3,3,2,2,3,2,0,1,3,3,3,0,0,0,1,3,3,0,0,3,2,0,0,2,0,2,
	0,3,1,2,1,1,0,3,3,0,3,3,3,3,2,2,1,0,3,1,3,3,3,3,3,1,3,2,
	1,3,3,1,1,0,1,0,0,2,3,2,1,3,3,3,3,2,3,2,2,0,0,0,1,3,2,3,
	2,0,0,0,2,2,3,3,3,2,2,0,3,3,0,3,0,0,0,2,1,0,3,3,1,0,0,0,
	1,0,0,0
};


void mpc_main(Array_A INPUT_A, Array_B INPUT_B)
{
	
	uint8_t interm_equality;
	uint8_t final_equality;
	final_equality = 0;
	
	int LEN_A_B;
	LEN_A_B = LEN_A + LEN_B; 	
	int search_len;
	search_len = LEN_P - LEN_A_B;

	// search for every possible distance d
	for(int dist=0; dist<DIST; dist++)
	{
		for(int i=0; i<search_len - dist; i++)
		{
			interm_equality = 1;

			// Search element A
			for(int j=0; j<LEN_A; j++)
			{
				if(INPUT_A.el[j] != pSequence.el[i+j])
				{
					interm_equality = 0;
				}
			}

			// Search element B
			for(int j=0; j<LEN_B; j++)
			{
				if(INPUT_B.el[j] != pSequence.el[i+j+LEN_A+dist])
				{
					interm_equality = 0;
				}
			}

			if(interm_equality == 1)
			{
				final_equality = 1;
			}
		
		}
	}



	uint8_t OUTPUT_final = final_equality;
	
}

