function start(x) {
	return (((-0.3125 + (6.5625 * (x * x))) + (-19.6875 * (((x * x) * x) * x))) + (14.4375 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((math.pow(math.pow((((x * 6.5625) * x) + -0.3125), 3.0), 3.0) + ((math.pow((((x * x) * (x * x)) * (-19.6875 + ((x * x) * 14.4375))), 3.0) * (((((x * x) * (x * x)) * (((x * 14.4375) * x) + -19.6875)) * (((x * x) * (x * x)) * (((x * 14.4375) * x) + -19.6875))) * (((x * x) * (x * x)) * (((x * 14.4375) * x) + -19.6875)))) * math.pow((((x * x) * (x * x)) * (-19.6875 + ((x * x) * 14.4375))), 3.0))) / ((math.pow((((x * x) * (x * x)) * (-19.6875 + ((14.4375 * x) * x))), 3.0) * (math.pow((((x * x) * (x * x)) * (-19.6875 + ((14.4375 * x) * x))), 3.0) + ((((x * (x * 6.5625)) + -0.3125) * ((x * (x * 6.5625)) + -0.3125)) * (- ((x * (x * 6.5625)) + -0.3125))))) + (math.pow(((x * (x * 6.5625)) + -0.3125), 3.0) * math.pow(((x * (x * 6.5625)) + -0.3125), 3.0)))) / ((((((x * x) * (x * x)) * ((14.4375 * (x * x)) + -19.6875)) - ((x * (x * 6.5625)) + -0.3125)) * (((x * x) * (x * x)) * ((14.4375 * (x * x)) + -19.6875))) + (((x * (x * 6.5625)) + -0.3125) * ((x * (x * 6.5625)) + -0.3125))));
}