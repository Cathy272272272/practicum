	#ifdef ORIG
	(+ (+ (+ -0.3125 (* 6.5625 (* x x))) (* -19.6875 (* (* (* x x) x) x))) (* 14.4375 (* (* (* (* (* x x) x) x) x) x)))
	#else
	 (  (  ( -0.3125+ ( 6.5625* ( x*x )  )  ) + ( -19.6875* (  (  ( x*x ) *x ) *x )  )  ) + ( 14.4375* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
