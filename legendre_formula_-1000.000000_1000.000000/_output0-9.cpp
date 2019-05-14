	#ifdef ORIG
	(+ (+ (+ (+ (* 2.460938 x) (* -36.09375 (* (* x x) x))) (* 140.765625 (* (* (* (* x x) x) x) x))) (* -201.09375 (* (* (* (* (* (* x x) x) x) x) x) x))) (* 94.960938 (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x)))
	#else
	 (  (  (  (  ( 2.460938*x ) + ( -36.09375* (  ( x*x ) *x )  )  ) + ( 140.765625* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( -201.09375* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 94.960938* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
