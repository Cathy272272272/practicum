function start(x) {
	return ((((((((518918400.0 + (-8302694400.0 * (x * x))) + (19372953600.0 * (((x * x) * x) * x))) + (-15498362880.0 * (((((x * x) * x) * x) * x) * x))) + (5535129600.0 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-984023040.0 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x))) + (89456640.0 * (((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x))) + (-3932160.0 * (((((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x))) + (65536.0 * (((((((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((math.cbrt((((((((x * -8302694400.0) * x) + ((19372953600.0 * x) * math.pow(x, 3.0))) + 518918400.0) * ((((x * -8302694400.0) * x) + ((19372953600.0 * x) * math.pow(x, 3.0))) + 518918400.0)) - (((((x * x) * 5535129600.0) + -15498362880.0) * (math.pow(x, 3.0) * math.pow(x, 3.0))) * ((((x * x) * 5535129600.0) + -15498362880.0) * (math.pow(x, 3.0) * math.pow(x, 3.0))))) / (((((x * -8302694400.0) * x) + ((19372953600.0 * x) * math.pow(x, 3.0))) + 518918400.0) - ((((x * x) * 5535129600.0) + -15498362880.0) * (math.pow(x, 3.0) * math.pow(x, 3.0)))))) * math.cbrt(((518918400.0 + ((math.pow(x, 8.0) * 5535129600.0) - (8302694400.0 * (x * x)))) + (((-15498362880.0 * (x * x)) + 19372953600.0) * ((x * x) * (x * x)))))) * math.cbrt((((((((x * -8302694400.0) * x) + 518918400.0) * (((x * -8302694400.0) * x) + 518918400.0)) - ((5535129600.0 * math.pow((x * x), (3.0 + 1.0))) * (5535129600.0 * math.pow((x * x), (3.0 + 1.0))))) / ((((x * -8302694400.0) * x) + 518918400.0) - (5535129600.0 * math.pow((x * x), (3.0 + 1.0))))) + (((-15498362880.0 * (x * x)) + 19372953600.0) * ((x * x) * (x * x)))))) + ((((x * (x * 65536.0)) + -3932160.0) * ((math.pow(x, 3.0) * math.pow(x, 3.0)) * math.pow((x * x), (3.0 + 1.0)))) + (((x * x) * math.pow((x * x), (3.0 + 1.0))) * (-984023040.0 + ((89456640.0 * x) * x)))));
}
