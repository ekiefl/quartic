/* Solve Polynomials of up to the fourth degree. (over complex numbers)
 * Algorithms by Ferrari, Tartaglia, Cardano, et al. (16th century Italy)
 */

#ifndef __QUARTIC_H__
#define __QUARTIC_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct {
    double real;
    double imag;
} complex_t;

int solve_poly(int degree, const complex_t* poly, complex_t* results);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* __QUARTIC_H__ */