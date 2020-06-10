#include "mex.h"
#include "speedLimiter.h"
 
void speedLimiter_mex(double y[], double spdCmd[], double spdMeas[], double x[], double m[])
{
  y[0] = speedLimiter(spdCmd[0],spdMeas[0],x[0],m[0]);
}

void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  double *x,*y,*m,*spdCmd,*spdMeas;
  int i;
  size_t mrows,ncols;
  
  /* Check for proper number of arguments. */
  if(nrhs!=4) {
    mexErrMsgIdAndTxt( "MATLAB:timestwo:invalidNumInputs",
            "Four inputs required.");
  } else if(nlhs>1) {
    mexErrMsgIdAndTxt( "MATLAB:timestwo:maxlhs",
            "Too many output arguments.");
  }
  
  for (i = 0; i < 4; i++){
      /* The four inputs must be a noncomplex scalar double.*/
      mrows = mxGetM(prhs[i]);
      ncols = mxGetN(prhs[i]);
      if( !mxIsDouble(prhs[i]) || mxIsComplex(prhs[i]) ||
          !(mrows==1 && ncols==1) ) {
        mexErrMsgIdAndTxt( "MATLAB:timestwo:inputNotRealScalarDouble",
                "Input must be a noncomplex scalar double.");
      }
  }
  
  /* Create matrix for the return argument. */
  plhs[0] = mxCreateDoubleMatrix(1, 1, mxREAL);
  
  /* Assign pointers to each input and output. */
  spdCmd = mxGetPr(prhs[0]);
  spdMeas = mxGetPr(prhs[1]);
  x = mxGetPr(prhs[2]);
  m = mxGetPr(prhs[3]);
  
  y = mxGetPr(plhs[0]);
  
  /* Call the timestwo subroutine. */
  speedLimiter_mex(y,spdCmd,spdMeas,x,m);
}
