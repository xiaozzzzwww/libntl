//把该文件放进NTL的根目录里

#include"GF2.h"
#include"GF2X.h"
#include"GF2E.h"
#include"GF2XVec.h"
#include"GF2EX.h"
#include"HNF.h"
#include"Lazy.h"
#include"LazyTable.h"
#include"LLL.h"
#include"RR.h"
#include"ZZ.h"
#include"ZZVec.h"
#include"ZZX.h"
#include"ZZ_p.h"
#include"ZZ_pE.h"
#include"ZZ_pEX.h"
#include"ZZ_pX.h"
#include"lzz_p.h"
#include"lzz_pE.h"
#include"lzz_pEX.h"
#include"lzz_pX.h"
#include"matrix.h"
#include"mat_GF2.h"
#include"mat_GF2E.h"
#include"mat_RR.h"
#include"mat_ZZ.h"
#include"mat_ZZ_p.h"
#include"mat_ZZ_pE.h"
#include"mat_lzz_p.h"
#include"mat_lzz_pE.h"

#include"mat_poly_ZZ.h"
#include"mat_poly_ZZ_p.h"
#include"mat_poly_lzz_p.h"

#include"tools.h"

#include"pair.h"

#include"quad_float.h"

#include"vec_GF2.h"
#include"vec_GF2E.h"
#include"vec_RR.h"
#include"vec_ZZ.h"
#include"vec_ZZ_p.h"
#include"vec_ZZ_pE.h"
#include"vec_lzz_p.h"
#include"vec_lzz_pE.h"

#include"xdouble.h"

#include"vec_GF2XVec.h"
#include"vec_ZZVec.h"
#include"vec_double.h"
#include"vec_long.h"
#include"vec_quad_float.h"
#include"vec_ulong.h"
#include"vec_vec_GF2.h"
#include"vec_vec_GF2E.h"
#include"vec_vec_RR.h"
#include"vec_vec_ZZ.h"
#include"vec_vec_ZZ_p.h"
#include"vec_vec_ZZ_pE.h"
#include"vec_vec_long.h"
#include"vec_vec_lzz_p.h"
#include"vec_vec_lzz_pE.h"
#include"vec_vec_ulong.h"
#include"vec_xdouble.h"

#include"pair_GF2EX_long.h"
#include"pair_GF2X_long.h"
#include"pair_ZZX_long.h"
#include"pair_ZZ_pEX_long.h"
#include"pair_ZZ_pX_long.h"
#include"pair_lzz_pEX_long.h"
#include"pair_lzz_pX_long.h"

#include"BasicThreadPool.h"

#include<string>
#include<cstdarg>
#include<sstream>

// std::string& ZZToString(const NTL::ZZ& z)
// {
//     std::stringstream buffer;
//     buffer << z;
//     return buffer.str();
// }
// NTL::ZZ& StringToZZ(const std::string& c)
// {
//     std::stringstream buffer;
//     buffer.str(c);
//     NTL::ZZ ret;
//     buffer >> ret;
//     return ret;
// }
