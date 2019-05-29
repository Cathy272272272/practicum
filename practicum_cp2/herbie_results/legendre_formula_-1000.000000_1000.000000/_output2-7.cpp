	#ifdef ORIG
	(+ (+ (+ (* -2.1875 x) (* 19.6875 (* (* x x) x))) (* -43.3125 (* (* (* (* x x) x) x) x))) (* 26.8125 (* (* (* (* (* (* x x) x) x) x) x) x)))
	#else
	 (  (  (  ( -2.1875*x ) + ( 19.6875* (  ( x*x ) *x )  )  ) + ( -43.3125* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 26.8125* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
