function start(x) {
	return (((-0.3125 + (6.5625 * (x * x))) + (-19.6875 * (((x * x) * x) * x))) + (14.4375 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((math.cbrt(((((x * x) * (x * x)) * (((x * x) * 14.4375) + -19.6875)) + (-0.3125 + ((x * x) * 6.5625)))) * math.cbrt(((((x * x) * (x * x)) * (((x * x) * 14.4375) + -19.6875)) + (-0.3125 + ((x * x) * 6.5625))))) * math.cbrt(((((((x * 6.5625) * x) + -0.3125) * (((x * 6.5625) * x) + -0.3125)) - ((((x * (x * 14.4375)) + -19.6875) * ((x * x) * (x * x))) * (((x * (x * 14.4375)) + -19.6875) * ((x * x) * (x * x))))) / ((((x * 6.5625) * x) + -0.3125) - (((x * (x * 14.4375)) + -19.6875) * ((x * x) * (x * x)))))));
}
