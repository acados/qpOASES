22*nV
1*(nV*nV)
1*(nV+1)






struct QProblemB_ws{

	real_t *ub_new_far;
	real_t *lb_new_far;

	real_t *g_new;
	real_t *lb_new;
	real_t *ub_new;

	real_t *g_new2;
	real_t *lb_new2;
	real_t *ub_new2;

	real_t *Hx;

	real_t *_H;

	real_t *g_original;
	real_t *lb_original;
	real_t *ub_original;

	real_t *delta_xFR;
	real_t *delta_xFX;
	real_t *delta_yFX;
	real_t *delta_g;
	real_t *delta_lb;
	real_t *delta_ub;

	real_t *gMod;

	real_t *num;
	real_t *den;

	real_t *rhs;
	real_t *r;

	};





	real_t *ub_new_far = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *lb_new_far = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *g_new = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *lb_new = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *ub_new = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *g_new2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *lb_new2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *ub_new2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //

	real_t *Hx = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *_H = (real_t *) c_ptr; c_ptr += (nV*nV)*sizeof(real_t);

	real_t *g_original = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *lb_original = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *ub_original = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *delta_xFR = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *delta_xFX = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *delta_yFX = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *delta_g = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *delta_lb = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *delta_ub = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *gMod = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *num = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *den = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *rhs = (real_t *) c_ptr; c_ptr += (nV+1)*sizeof(real_t);
	real_t *r = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
