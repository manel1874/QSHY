#define LEN_A 2
#define LEN_B 2
#define LEN_P 1000

typedef unsigned char uint8_t;

typedef struct {
	uint8_t el[LEN_A];
} Array_A;

typedef struct {
	uint8_t el[LEN_B];
} Array_B;

typedef struct {
	uint8_t el[LEN_A + LEN_B];
} Array_A_B;

typedef struct {
	const uint8_t el[LEN_P];
} Array_P;


Array_P pSequence = {
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 1, 1, 1, 3, 0, 1, 1, 1, 3,
	0, 0, 1, 1, 3, 0, 1, 1, 1, 3
};


Array_A_B concatenate(Array_A in_a, Array_B in_b)
{

	Array_A_B array_in_a_b;

	for(int i=0; i<LEN_A; i++)
	{
		array_in_a_b.el[i] = in_a.el[i];

	}

	for(int i=0; i < LEN_B ; i++)
	{
		array_in_a_b.el[LEN_A+i] = in_b.el[i];
	}
	
	return array_in_a_b;

}

uint8_t mpc_main(Array_A INPUT_A, Array_B INPUT_B)
{
	
	uint8_t interm_equality;
	uint8_t final_equality;
	final_equality = 0;
	
	int LEN_A_B;
	LEN_A_B = LEN_A + LEN_B; 	
	int search_len;
	search_len = LEN_P - LEN_A_B;

	Array_A_B in_a_b = concatenate(INPUT_A, INPUT_B);
	
	for(int i=0; i<search_len; i++)
	{
		interm_equality = 1;
		for(int j=0; j<LEN_A_B; j++)
		{
			if(in_a_b.el[j] != pSequence.el[i+j])
			{
				interm_equality = 0;
			}
		}
		if(interm_equality == 1)
		{
			final_equality = 1;
		}
	
	}

	return final_equality;
	
}

