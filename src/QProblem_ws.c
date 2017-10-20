39*nV
1*(nC*nV)
18*nC
5*nVC_max




struct QProblem_ws{

	real_t *delta_xFR;
	real_t *delta_xFX;
	real_t *delta_yAC;
	real_t *delta_yFX;
	real_t *delta_g;
	real_t *delta_lb;
	real_t *delta_ub;
	real_t *delta_lbA;
	real_t *delta_ubA;

	real_t *gMod;

	real_t *aFR;
	real_t *wZ;

	real_t *delta_g2;
	real_t *delta_xFX2;
	real_t *delta_xFR2;
	real_t *delta_yAC2;
	real_t *delta_yFX2;
	real_t *nul;
	real_t *Arow;

	real_t *xiC;
	real_t *xiC_TMP;
	real_t *xiB;
	real_t *Arow2;
	real_t *num;

	real_t *w;
	real_t *tmp;

	real_t *delta_g3;
	real_t *delta_xFX3;
	real_t *delta_xFR3;
	real_t *delta_yAC3;
	real_t *delta_yFX3;
	real_t *nul2;

	real_t *xiC2;
	real_t *xiC_TMP2;
	real_t *xiB2;
	real_t *num2;

	real_t *Hz;
	real_t *z;
	real_t *ZHz;
	real_t *r;

	real_t *tmp2;
	real_t *Hz2;
	real_t *z2;
	real_t *r2;
	real_t *rhs;

	real_t *delta_xFX4;
	real_t *delta_xFR4;
	real_t *delta_yAC4;
	real_t *delta_yFX4;
	real_t *nul3;
	real_t *ek;
	real_t *x_W;
	real_t *As;
	real_t *Ax_W;

	real_t *num3;
	real_t *den;
	real_t *delta_Ax_l;
	real_t *delta_Ax_u;
	real_t *delta_Ax;
	real_t *delta_x;

	real_t *_A;

	real_t *grad;
	real_t *AX;

	};







	real_t *delta_xFR = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *delta_xFX = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *delta_yAC = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);
	real_t *delta_yFX = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *delta_g = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *delta_lb = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *delta_ub = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *delta_lbA = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);
	real_t *delta_ubA = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);

	real_t *gMod = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *aFR = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *wZ = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *delta_g2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *delta_xFX2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *delta_xFR2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *delta_yAC2 = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t); //
	real_t *delta_yFX2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *nul = (real_t *) c_ptr; c_ptr += (nVC_max)*sizeof(real_t);
	real_t *Arow = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *xiC = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);
	real_t *xiC_TMP = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);
	real_t *xiB = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *Arow2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *num = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *w = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *tmp = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);

	real_t *delta_g3 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *delta_xFX3 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *delta_xFR3 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *delta_yAC3 = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t); //
	real_t *delta_yFX3 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *nul2 = (real_t *) c_ptr; c_ptr += (nVC_max)*sizeof(real_t); //

	real_t *xiC2 = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t); //
	real_t *xiC_TMP2 = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t); //
	real_t *xiB2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *num2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //

	real_t *Hz = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *z = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *ZHz = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *r = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *tmp2 = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t); //
	real_t *Hz2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *z2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *r2 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *rhs = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *delta_xFX4 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *delta_xFR4 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *delta_yAC4 = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t); //
	real_t *delta_yFX4 = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t); //
	real_t *nul3 = (real_t *) c_ptr; c_ptr += (nVC_max)*sizeof(real_t); //
	real_t *ek = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *x_W = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *As = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);
	real_t *Ax_W = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);

	real_t *num3 = (real_t *) c_ptr; c_ptr += (nVC_max)*sizeof(real_t); //
	real_t *den = (real_t *) c_ptr; c_ptr += (nVC_max)*sizeof(real_t);
	real_t *delta_Ax_l = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);
	real_t *delta_Ax_u = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);
	real_t *delta_Ax = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);
	real_t *delta_x = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);

	real_t *_A = (real_t *) c_ptr; c_ptr += (nC*nV)*sizeof(real_t);

	real_t *grad = (real_t *) c_ptr; c_ptr += (nV)*sizeof(real_t);
	real_t *AX = (real_t *) c_ptr; c_ptr += (nC)*sizeof(real_t);
