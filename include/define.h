

#ifndef MATCH_DEFINE_H
#define MATCH_DEFINE_H


#ifdef WIN_x64

	typedef struct CvPoint2D64f
	{
		double x;
		double y;
	}
	CvPoint2D64f;

	typedef struct CvRect
	{
		int x;
		int y;
		int width;
		int height;
	}
	CvRect;

	typedef union Cv32suf
	{
		int i;
		unsigned u;
		float f;
	}
	Cv32suf;


	/* absolute value */
	#ifndef ABS
	#define ABS(x) ( ( (x) < 0 )? -(x) : (x) )
	#endif

	static int myround(double x)
	{
		return ((int)((x)>0 ? (x)+0.5 : (x)-0.5));	
	}

	static int cvCeil( double value )
	{
		int temp = myround(value);
		Cv32suf diff;
		diff.f = (float)(temp - value);
		return temp + (diff.i < 0);
	}

#endif




#endif