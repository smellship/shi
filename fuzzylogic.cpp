#include <algorithm>
#include "fuzzylogic.h"

/////////////////////////////////////////////////////////////////

//Initialise Fuzzy Rules

//Initialise Fuzzy Rules

//Initialise Fuzzy Rules

//Initialise Fuzzy Rules

void initFuzzyRules(fuzzy_system_rec *fl) {
	
   /* 优化的25条模糊规则，以提高稳定性 */
   
   // Rule 1: IF X is NL AND Y is NL THEN Force is PL
   fl->rules[0].inp_index[0] = INPUT_X;
   fl->rules[0].inp_index[1] = INPUT_Y;
   fl->rules[0].inp_fuzzy_set[0] = in_nl;
   fl->rules[0].inp_fuzzy_set[1] = in_nl;
   fl->rules[0].out_fuzzy_set = out_pl;

   // Rule 2: IF X is NL AND Y is NS THEN Force is PL
   fl->rules[1].inp_index[0] = INPUT_X;
   fl->rules[1].inp_index[1] = INPUT_Y;
   fl->rules[1].inp_fuzzy_set[0] = in_nl;
   fl->rules[1].inp_fuzzy_set[1] = in_ns;
   fl->rules[1].out_fuzzy_set = out_pl;

   // Rule 3: IF X is NL AND Y is ZE THEN Force is PM
   fl->rules[2].inp_index[0] = INPUT_X;
   fl->rules[2].inp_index[1] = INPUT_Y;
   fl->rules[2].inp_fuzzy_set[0] = in_nl;
   fl->rules[2].inp_fuzzy_set[1] = in_ze;
   fl->rules[2].out_fuzzy_set = out_pm;

   // Rule 4: IF X is NL AND Y is PS THEN Force is PS
   fl->rules[3].inp_index[0] = INPUT_X;
   fl->rules[3].inp_index[1] = INPUT_Y;
   fl->rules[3].inp_fuzzy_set[0] = in_nl;
   fl->rules[3].inp_fuzzy_set[1] = in_ps;
   fl->rules[3].out_fuzzy_set = out_ps;

   // Rule 5: IF X is NL AND Y is PL THEN Force is ZE
   fl->rules[4].inp_index[0] = INPUT_X;
   fl->rules[4].inp_index[1] = INPUT_Y;
   fl->rules[4].inp_fuzzy_set[0] = in_nl;
   fl->rules[4].inp_fuzzy_set[1] = in_pl;
   fl->rules[4].out_fuzzy_set = out_ze;

   // Rule 6: IF X is NS AND Y is NL THEN Force is PL
   fl->rules[5].inp_index[0] = INPUT_X;
   fl->rules[5].inp_index[1] = INPUT_Y;
   fl->rules[5].inp_fuzzy_set[0] = in_ns;
   fl->rules[5].inp_fuzzy_set[1] = in_nl;
   fl->rules[5].out_fuzzy_set = out_pl;

   // Rule 7: IF X is NS AND Y is NS THEN Force is PM
   fl->rules[6].inp_index[0] = INPUT_X;
   fl->rules[6].inp_index[1] = INPUT_Y;
   fl->rules[6].inp_fuzzy_set[0] = in_ns;
   fl->rules[6].inp_fuzzy_set[1] = in_ns;
   fl->rules[6].out_fuzzy_set = out_pm;

   // Rule 8: IF X is NS AND Y is ZE THEN Force is PS
   fl->rules[7].inp_index[0] = INPUT_X;
   fl->rules[7].inp_index[1] = INPUT_Y;
   fl->rules[7].inp_fuzzy_set[0] = in_ns;
   fl->rules[7].inp_fuzzy_set[1] = in_ze;
   fl->rules[7].out_fuzzy_set = out_ps;

   // Rule 9: IF X is NS AND Y is PS THEN Force is ZE
   fl->rules[8].inp_index[0] = INPUT_X;
   fl->rules[8].inp_index[1] = INPUT_Y;
   fl->rules[8].inp_fuzzy_set[0] = in_ns;
   fl->rules[8].inp_fuzzy_set[1] = in_ps;
   fl->rules[8].out_fuzzy_set = out_ze;

   // Rule 10: IF X is NS AND Y is PL THEN Force is NS
   fl->rules[9].inp_index[0] = INPUT_X;
   fl->rules[9].inp_index[1] = INPUT_Y;
   fl->rules[9].inp_fuzzy_set[0] = in_ns;
   fl->rules[9].inp_fuzzy_set[1] = in_pl;
   fl->rules[9].out_fuzzy_set = out_ns;

   // Rule 11: IF X is ZE AND Y is NL THEN Force is PM
   fl->rules[10].inp_index[0] = INPUT_X;
   fl->rules[10].inp_index[1] = INPUT_Y;
   fl->rules[10].inp_fuzzy_set[0] = in_ze;
   fl->rules[10].inp_fuzzy_set[1] = in_nl;
   fl->rules[10].out_fuzzy_set = out_pm;

   // Rule 12: IF X is ZE AND Y is NS THEN Force is PS
   fl->rules[11].inp_index[0] = INPUT_X;
   fl->rules[11].inp_index[1] = INPUT_Y;
   fl->rules[11].inp_fuzzy_set[0] = in_ze;
   fl->rules[11].inp_fuzzy_set[1] = in_ns;
   fl->rules[11].out_fuzzy_set = out_ps;

   // Rule 13: IF X is ZE AND Y is ZE THEN Force is ZE
   fl->rules[12].inp_index[0] = INPUT_X;
   fl->rules[12].inp_index[1] = INPUT_Y;
   fl->rules[12].inp_fuzzy_set[0] = in_ze;
   fl->rules[12].inp_fuzzy_set[1] = in_ze;
   fl->rules[12].out_fuzzy_set = out_ze;

   // Rule 14: IF X is ZE AND Y is PS THEN Force is NS
   fl->rules[13].inp_index[0] = INPUT_X;
   fl->rules[13].inp_index[1] = INPUT_Y;
   fl->rules[13].inp_fuzzy_set[0] = in_ze;
   fl->rules[13].inp_fuzzy_set[1] = in_ps;
   fl->rules[13].out_fuzzy_set = out_ns;

   // Rule 15: IF X is ZE AND Y is PL THEN Force is NM
   fl->rules[14].inp_index[0] = INPUT_X;
   fl->rules[14].inp_index[1] = INPUT_Y;
   fl->rules[14].inp_fuzzy_set[0] = in_ze;
   fl->rules[14].inp_fuzzy_set[1] = in_pl;
   fl->rules[14].out_fuzzy_set = out_nm;

   // Rule 16: IF X is PS AND Y is NL THEN Force is PS
   fl->rules[15].inp_index[0] = INPUT_X;
   fl->rules[15].inp_index[1] = INPUT_Y;
   fl->rules[15].inp_fuzzy_set[0] = in_ps;
   fl->rules[15].inp_fuzzy_set[1] = in_nl;
   fl->rules[15].out_fuzzy_set = out_ps;

   // Rule 17: IF X is PS AND Y is NS THEN Force is ZE
   fl->rules[16].inp_index[0] = INPUT_X;
   fl->rules[16].inp_index[1] = INPUT_Y;
   fl->rules[16].inp_fuzzy_set[0] = in_ps;
   fl->rules[16].inp_fuzzy_set[1] = in_ns;
   fl->rules[16].out_fuzzy_set = out_ze;

   // Rule 18: IF X is PS AND Y is ZE THEN Force is NS
   fl->rules[17].inp_index[0] = INPUT_X;
   fl->rules[17].inp_index[1] = INPUT_Y;
   fl->rules[17].inp_fuzzy_set[0] = in_ps;
   fl->rules[17].inp_fuzzy_set[1] = in_ze;
   fl->rules[17].out_fuzzy_set = out_ns;

   // Rule 19: IF X is PS AND Y is PS THEN Force is NM
   fl->rules[18].inp_index[0] = INPUT_X;
   fl->rules[18].inp_index[1] = INPUT_Y;
   fl->rules[18].inp_fuzzy_set[0] = in_ps;
   fl->rules[18].inp_fuzzy_set[1] = in_ps;
   fl->rules[18].out_fuzzy_set = out_nm;

   // Rule 20: IF X is PS AND Y is PL THEN Force is NL
   fl->rules[19].inp_index[0] = INPUT_X;
   fl->rules[19].inp_index[1] = INPUT_Y;
   fl->rules[19].inp_fuzzy_set[0] = in_ps;
   fl->rules[19].inp_fuzzy_set[1] = in_pl;
   fl->rules[19].out_fuzzy_set = out_nl;

   // Rule 21: IF X is PL AND Y is NL THEN Force is ZE
   fl->rules[20].inp_index[0] = INPUT_X;
   fl->rules[20].inp_index[1] = INPUT_Y;
   fl->rules[20].inp_fuzzy_set[0] = in_pl;
   fl->rules[20].inp_fuzzy_set[1] = in_nl;
   fl->rules[20].out_fuzzy_set = out_ze;

   // Rule 22: IF X is PL AND Y is NS THEN Force is NS
   fl->rules[21].inp_index[0] = INPUT_X;
   fl->rules[21].inp_index[1] = INPUT_Y;
   fl->rules[21].inp_fuzzy_set[0] = in_pl;
   fl->rules[21].inp_fuzzy_set[1] = in_ns;
   fl->rules[21].out_fuzzy_set = out_ns;

   // Rule 23: IF X is PL AND Y is ZE THEN Force is NM
   fl->rules[22].inp_index[0] = INPUT_X;
   fl->rules[22].inp_index[1] = INPUT_Y;
   fl->rules[22].inp_fuzzy_set[0] = in_pl;
   fl->rules[22].inp_fuzzy_set[1] = in_ze;
   fl->rules[22].out_fuzzy_set = out_nm;

   // Rule 24: IF X is PL AND Y is PS THEN Force is NL
   fl->rules[23].inp_index[0] = INPUT_X;
   fl->rules[23].inp_index[1] = INPUT_Y;
   fl->rules[23].inp_fuzzy_set[0] = in_pl;
   fl->rules[23].inp_fuzzy_set[1] = in_ps;
   fl->rules[23].out_fuzzy_set = out_nl;

   // Rule 25: IF X is PL AND Y is PL THEN Force is NL
   fl->rules[24].inp_index[0] = INPUT_X;
   fl->rules[24].inp_index[1] = INPUT_Y;
   fl->rules[24].inp_fuzzy_set[0] = in_pl;
   fl->rules[24].inp_fuzzy_set[1] = in_pl;
   fl->rules[24].out_fuzzy_set = out_nl;

   return;
}
void initMembershipFunctions(fuzzy_system_rec *fl) {
	
   /* The X membership functions - 进一步优化以提高响应精度 */
   fl->inp_mem_fns[INPUT_X][in_nl] = init_trapz (-4.0,-3.0,-2.0,-1.0,left_trapezoid);
   fl->inp_mem_fns[INPUT_X][in_ns] = init_trapz (-2.0,-1.0,-0.2,0.0,regular_trapezoid);
   fl->inp_mem_fns[INPUT_X][in_ze] = init_trapz (-0.2,-0.05,0.05,0.2,regular_trapezoid);
   fl->inp_mem_fns[INPUT_X][in_ps] = init_trapz (0.0,0.2,1.0,2.0,regular_trapezoid);
   fl->inp_mem_fns[INPUT_X][in_pl] = init_trapz (1.0,2.0,3.0,4.0,right_trapezoid);

   /* The Y membership functions - 进一步优化以提高响应精度 */
   fl->inp_mem_fns[INPUT_Y][in_nl] = init_trapz (-4.0,-3.0,-2.0,-1.0,left_trapezoid);
   fl->inp_mem_fns[INPUT_Y][in_ns] = init_trapz (-2.0,-1.0,-0.2,0.0,regular_trapezoid);
   fl->inp_mem_fns[INPUT_Y][in_ze] = init_trapz (-0.2,-0.05,0.05,0.2,regular_trapezoid);
   fl->inp_mem_fns[INPUT_Y][in_ps] = init_trapz (0.0,0.2,1.0,2.0,regular_trapezoid);
   fl->inp_mem_fns[INPUT_Y][in_pl] = init_trapz (1.0,2.0,3.0,4.0,right_trapezoid);

   return;
}

void initFuzzySystem (fuzzy_system_rec *fl) {

   //Note: The settings of these parameters will depend upon your fuzzy system design
   fl->no_of_inputs = 2;  /* Inputs are handled 2 at a time only */
   fl->no_of_rules = 25;
   fl->no_of_inp_regions = 5;
   fl->no_of_outputs = 9;
	
   // 进一步优化系数以获得更好的稳定性
   coefficient_A = 5;   // 增加角度影响权重
   coefficient_B = 0.03;  // 减小角速度影响权重
   coefficient_C = 0.5;   // 增加位置影响权重
   coefficient_D = 0.01;  // 减小速度影响权重
	
   // 调整输出值，使控制更加平滑和精确
   fl->output_values[out_nvl] = -30.0;   // 减小最大输出力
   fl->output_values[out_nl]  = -20.0;
   fl->output_values[out_nm]  = -10.0;
   fl->output_values[out_ns]  = -3.0;
   fl->output_values[out_ze]  = 0.0;
   fl->output_values[out_ps]  = 3.0;
   fl->output_values[out_pm]  = 10.0;
   fl->output_values[out_pl]  = 20.0;
   fl->output_values[out_pvl] = 40.0;

   fl->rules = (rule *) malloc ((size_t)(fl->no_of_rules*sizeof(rule)));
   initFuzzyRules(fl);
   initMembershipFunctions(fl);
   fl->allocated = true;
   return;
}

//////////////////////////////////////////////////////////////////////////////

trapezoid init_trapz (float x1,float x2,float x3,float x4, trapz_type typ) {
	
   trapezoid trz;
   trz.a = x1;
   trz.b = x2;
   trz.c = x3;
   trz.d = x4;
   trz.tp = typ;
   switch (trz.tp) {
	   
      case regular_trapezoid:
         	 trz.l_slope = 1.0/(trz.b - trz.a);
         	 trz.r_slope = 1.0/(trz.c - trz.d);
         	 break;
	 
      case left_trapezoid:
         	 trz.r_slope = 1.0/(trz.a - trz.b);
         	 trz.l_slope = 0.0;
         	 break;
	 
      case right_trapezoid:
         	 trz.l_slope = 1.0/(trz.b - trz.a);
         	 trz.r_slope = 0.0;
         	 break;
   }  /* end switch  */
   
   return trz;
}  /* end function */

//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
float trapz (float x, trapezoid trz) {
   switch (trz.tp) {
	   
      case left_trapezoid:
         	 if (x <= trz.a)
         	    return 1.0;
         	 if (x >= trz.b)
         	    return 0.0;
         	 /* a < x < b */
         	 return trz.r_slope * (x - trz.b);
	 
	 
      case right_trapezoid:
         	 if (x <= trz.a)
         	    return 0.0;
         	 if (x >= trz.b)
         	    return 1.0;
         	 /* a < x < b */
         	 return trz.l_slope * (x - trz.a);
	 
      case regular_trapezoid:
         	 if ((x <= trz.a) || (x >= trz.d))
         	    return 0.0;
         	 if ((x >= trz.b) && (x <= trz.c))
         	    return 1.0;
         	 if ((x >= trz.a) && (x <= trz.b))
         	    return trz.l_slope * (x - trz.a);
         	 if ((x >= trz.c) && (x <= trz.d))
         	    return  trz.r_slope * (x - trz.d);
         	    
	 }  /* End switch  */
	 
   return 0.0;  /* should not get to this point */
}  /* End function */

//////////////////////////////////////////////////////////////////////////////
float min_of(float values[],int no_of_inps) {
   int i;
   float val;
   val = values [0];
   for (i = 1;i < no_of_inps;i++) {
       if (values[i] < val)
	  val = values [i];
   }
   return val;
}



//////////////////////////////////////////////////////////////////////////////
float fuzzy_system (float inputs[],fuzzy_system_rec fz) {
   int i,j;
   short variable_index,fuzzy_set;
   float sum1 = 0.0,sum2 = 0.0,weight;
   float m_values[MAX_NO_OF_INPUTS];
	
   
   for (i = 0;i < fz.no_of_rules;i++) {
      for (j = 0;j < fz.no_of_inputs;j++) {
	   variable_index = fz.rules[i].inp_index[j];
	   fuzzy_set = fz.rules[i].inp_fuzzy_set[j];
	   m_values[j] = trapz(inputs[variable_index],
	       fz.inp_mem_fns[variable_index][fuzzy_set]);
	   } /* end j  */
      
       weight = min_of (m_values,fz.no_of_inputs);
				
       sum1 += weight * fz.output_values[fz.rules[i].out_fuzzy_set];
       sum2 += weight;
   } /* end i  */
 
	
	if (fabs(sum2) < TOO_SMALL) {
      cout << "\r\nFLPRCS Error: Sum2 in fuzzy_system is 0.  Press key: " << endl;
      //~ getch();
      //~ exit(1);
      return 0.0;
   }
   
   return (sum1/sum2);
}  /* end fuzzy_system  */

//////////////////////////////////////////////////////////////////////////////
void free_fuzzy_rules (fuzzy_system_rec *fz) {
   if (fz->allocated){
	   free (fz->rules);
	}
	
   fz->allocated = false;
   return;
}