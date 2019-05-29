	#ifdef ORIG
	(+ (+ 0.375 (* -3.75 (* x x))) (* 4.375 (* (* (* x x) x) x)))
	#else
	 (  ( 0.375+ ( -3.75* ( x*x )  )  ) + ( 4.375* (  (  ( x*x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
