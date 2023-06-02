/* Linearization */
#include "Motoreducteur_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *Motoreducteur_linear_model_frame()
{
  return "model linearized_model \"Motoreducteur\" \n  parameter Integer n = 2 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[m] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m];\n"
  "  output Real y[p];\n"
  "\n"
  "  Real 'x_inertia.w' = x[1];\n""  Real 'x_lossyGear.phi_a' = x[2];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linearized_model;\n";
}
const char *Motoreducteur_linear_model_datarecovery_frame()
{
  return "model linearized_model \"Motoreducteur\" \n parameter Integer n = 2 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 0 \"number of outputs\";\n  parameter Integer nz = 47 \"data recovery variables\";\n"
  "  parameter Real x0[2] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[47] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "  parameter Real Cz[nz, n] =\n\t[%s];\n\n"
  "  parameter Real Dz[nz, m] = zeros(nz, m);%s\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m];\n"
  "  output Real y[p];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_inertia.w' = x[1];\n""  Real 'x_lossyGear.phi_a' = x[2];\n"
  "  Real 'z_der(emf.phi)' = z[1];\n""  Real 'z_emf.phi' = z[2];\n""  Real 'z_emf.tau' = z[3];\n""  Real 'z_emf.v' = z[4];\n""  Real 'z_emf.w' = z[5];\n""  Real 'z_ground.p.i' = z[6];\n""  Real 'z_ground.p.v' = z[7];\n""  Real 'z_inertia.a' = z[8];\n""  Real 'z_inertia.flange_a.tau' = z[9];\n""  Real 'z_lossyGear.a_a' = z[10];\n""  Real 'z_lossyGear.eta_mf1' = z[11];\n""  Real 'z_lossyGear.eta_mf2' = z[12];\n""  Real 'z_lossyGear.flange_a.tau' = z[13];\n""  Real 'z_lossyGear.interpolation_result[1,1]' = z[14];\n""  Real 'z_lossyGear.interpolation_result[1,2]' = z[15];\n""  Real 'z_lossyGear.interpolation_result[1,3]' = z[16];\n""  Real 'z_lossyGear.interpolation_result[1,4]' = z[17];\n""  Real 'z_lossyGear.lossPower' = z[18];\n""  Real 'z_lossyGear.phi_b' = z[19];\n""  Real 'z_lossyGear.phi_support' = z[20];\n""  Real 'z_lossyGear.quadrant1' = z[21];\n""  Real 'z_lossyGear.quadrant1_p' = z[22];\n""  Real 'z_lossyGear.quadrant2' = z[23];\n""  Real 'z_lossyGear.quadrant2_p' = z[24];\n""  Real 'z_lossyGear.quadrant3' = z[25];\n""  Real 'z_lossyGear.quadrant3_m' = z[26];\n""  Real 'z_lossyGear.quadrant4' = z[27];\n""  Real 'z_lossyGear.quadrant4_m' = z[28];\n""  Real 'z_lossyGear.sa' = z[29];\n""  Real 'z_lossyGear.tauLoss' = z[30];\n""  Real 'z_lossyGear.tauLossMax' = z[31];\n""  Real 'z_lossyGear.tauLossMax_p' = z[32];\n""  Real 'z_lossyGear.tauLossMin' = z[33];\n""  Real 'z_lossyGear.tauLossMin_m' = z[34];\n""  Real 'z_lossyGear.tau_bf1' = z[35];\n""  Real 'z_lossyGear.tau_bf2' = z[36];\n""  Real 'z_lossyGear.tau_bf_a' = z[37];\n""  Real 'z_lossyGear.tau_eta' = z[38];\n""  Real 'z_lossyGear.tau_eta_m' = z[39];\n""  Real 'z_lossyGear.tau_eta_p' = z[40];\n""  Real 'z_resistor.LossPower' = z[41];\n""  Real 'z_resistor.R_actual' = z[42];\n""  Real 'z_resistor.i' = z[43];\n""  Real 'z_resistor.v' = z[44];\n""  Real 'z_torque.phi_support' = z[45];\n""  Real 'z_torque2.phi_support' = z[46];\n""  Real 'z_torque2.tau' = z[47];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linearized_model;\n";
}
#if defined(__cplusplus)
}
#endif

