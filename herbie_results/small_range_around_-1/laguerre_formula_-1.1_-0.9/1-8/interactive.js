function start(x) {
	return ((((((((1.0 + (-8.0 * x)) + (14.0 * (x * x))) + (-9.333333 * ((x * x) * x))) + (2.916667 * (((x * x) * x) * x))) + (-0.466667 * ((((x * x) * x) * x) * x))) + (0.038889 * (((((x * x) * x) * x) * x) * x))) + (-0.001587 * ((((((x * x) * x) * x) * x) * x) * x))) + (2.5e-05 * (((((((x * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((((((((-8.0 * x) - 1.0) * (-8.0 * x)) + (1.0 * 1.0)) * ((((-0.466667 * x) - 2.916667) * ((-0.466667 * x) + 2.916667)) * ((x * x) * (x * x)))) + ((math.pow(1.0, 3.0) + math.pow((-8.0 * x), 3.0)) * ((-0.466667 * x) - 2.916667))) / ((((-0.466667 * x) * (-0.466667 * x)) - (2.916667 * 2.916667)) * (math.pow(((-8.0 * x) * (-8.0 * x)), 3.0) - math.pow((1.0 * ((-8.0 * x) - 1.0)), 3.0)))) * (((-0.466667 * x) + 2.916667) * ((((-8.0 * x) * (-8.0 * x)) * ((-8.0 * x) * (-8.0 * x))) + (((1.0 * ((-8.0 * x) - 1.0)) * (1.0 * ((-8.0 * x) - 1.0))) + (((-8.0 * x) * (-8.0 * x)) * (1.0 * ((-8.0 * x) - 1.0))))))) + (((0.038889 * math.pow(x, 6.0)) - (0.001587 * math.pow(x, 7.0))) + (2.5e-05 * math.pow((x * x), (3.0 + 1.0))))) + ((x * x) * ((x * -9.333333) + 14.0)));
}
