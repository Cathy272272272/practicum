	#ifdef ORIG
	(+ (+ (+ (+ 0.273438 (* -9.84375 (* x x))) (* 54.140625 (* (* (* x x) x) x))) (* -93.84375 (* (* (* (* (* x x) x) x) x) x))) (* 50.273438 (* (* (* (* (* (* (* x x) x) x) x) x) x) x)))
	#else
	 (  (  (  ( 0.273438+ ( -9.84375* ( x*x )  )  ) + ( 54.140625* (  (  ( x*x ) *x ) *x )  )  ) + ( -93.84375* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( 50.273438* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
