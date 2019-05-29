	#ifdef ORIG
	(+ (+ (* 1.875 x) (* -8.75 (* (* x x) x))) (* 7.875 (* (* (* (* x x) x) x) x)))
	#else
	 (  (  ( 1.875*x ) + ( -8.75* (  ( x*x ) *x )  )  ) + ( 7.875* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
