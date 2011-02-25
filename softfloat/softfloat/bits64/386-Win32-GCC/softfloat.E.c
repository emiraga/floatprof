# 1 "../softfloat.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "../softfloat.c"
# 33 "../softfloat.c"
# 1 "./milieu.h" 1
# 36 "./milieu.h"
# 1 "./../../../processors/386-GCC.h" 1
# 21 "./../../../processors/386-GCC.h"
typedef char flag;
typedef unsigned char uint8;
typedef signed char int8;
typedef int uint16;
typedef int int16;
typedef unsigned int uint32;
typedef signed int int32;

typedef unsigned long long int uint64;
typedef signed long long int int64;
# 39 "./../../../processors/386-GCC.h"
typedef unsigned char bits8;
typedef signed char sbits8;
typedef unsigned short int bits16;
typedef signed short int sbits16;
typedef unsigned int bits32;
typedef signed int sbits32;

typedef unsigned long long int bits64;
typedef signed long long int sbits64;
# 37 "./milieu.h" 2




enum {
    FALSE = 0,
    TRUE = 1
};
# 34 "../softfloat.c" 2
# 1 "./softfloat.h" 1
# 46 "./softfloat.h"
typedef unsigned int float32;
typedef unsigned long long float64;

typedef struct {
    unsigned long long low;
    unsigned short high;
} floatx80;


typedef struct {
    unsigned long long low, high;
} float128;





extern signed char float_detect_tininess;
enum {
    float_tininess_after_rounding = 0,
    float_tininess_before_rounding = 1
};




extern signed char float_rounding_mode;
enum {
    float_round_nearest_even = 0,
    float_round_down = 1,
    float_round_up = 2,
    float_round_to_zero = 3
};




extern signed char float_exception_flags;
enum {
    float_flag_invalid = 1,
    float_flag_divbyzero = 4,
    float_flag_overflow = 8,
    float_flag_underflow = 16,
    float_flag_inexact = 32
};





void float_raise( signed char );




float32 int32_to_float32( int );
float64 int32_to_float64( int );

floatx80 int32_to_floatx80( int );


float128 int32_to_float128( int );

float32 int64_to_float32( long long );
float64 int64_to_float64( long long );

floatx80 int64_to_floatx80( long long );


float128 int64_to_float128( long long );





int float32_to_int32( float32 );
int float32_to_int32_round_to_zero( float32 );
long long float32_to_int64( float32 );
long long float32_to_int64_round_to_zero( float32 );
float64 float32_to_float64( float32 );

floatx80 float32_to_floatx80( float32 );


float128 float32_to_float128( float32 );





float32 float32_round_to_int( float32 );
float32 float32_add( float32, float32 );
float32 float32_sub( float32, float32 );
float32 float32_mul( float32, float32 );
float32 float32_div( float32, float32 );
float32 float32_rem( float32, float32 );
float32 float32_sqrt( float32 );
char float32_eq( float32, float32 );
char float32_le( float32, float32 );
char float32_lt( float32, float32 );
char float32_eq_signaling( float32, float32 );
char float32_le_quiet( float32, float32 );
char float32_lt_quiet( float32, float32 );
char float32_is_signaling_nan( float32 );




int float64_to_int32( float64 );
int float64_to_int32_round_to_zero( float64 );
long long float64_to_int64( float64 );
long long float64_to_int64_round_to_zero( float64 );
float32 float64_to_float32( float64 );

floatx80 float64_to_floatx80( float64 );


float128 float64_to_float128( float64 );





float64 float64_round_to_int( float64 );
float64 float64_add( float64, float64 );
float64 float64_sub( float64, float64 );
float64 float64_mul( float64, float64 );
float64 float64_div( float64, float64 );
float64 float64_rem( float64, float64 );
float64 float64_sqrt( float64 );
char float64_eq( float64, float64 );
char float64_le( float64, float64 );
char float64_lt( float64, float64 );
char float64_eq_signaling( float64, float64 );
char float64_le_quiet( float64, float64 );
char float64_lt_quiet( float64, float64 );
char float64_is_signaling_nan( float64 );






int floatx80_to_int32( floatx80 );
int floatx80_to_int32_round_to_zero( floatx80 );
long long floatx80_to_int64( floatx80 );
long long floatx80_to_int64_round_to_zero( floatx80 );
float32 floatx80_to_float32( floatx80 );
float64 floatx80_to_float64( floatx80 );

float128 floatx80_to_float128( floatx80 );






extern signed char floatx80_rounding_precision;




floatx80 floatx80_round_to_int( floatx80 );
floatx80 floatx80_add( floatx80, floatx80 );
floatx80 floatx80_sub( floatx80, floatx80 );
floatx80 floatx80_mul( floatx80, floatx80 );
floatx80 floatx80_div( floatx80, floatx80 );
floatx80 floatx80_rem( floatx80, floatx80 );
floatx80 floatx80_sqrt( floatx80 );
char floatx80_eq( floatx80, floatx80 );
char floatx80_le( floatx80, floatx80 );
char floatx80_lt( floatx80, floatx80 );
char floatx80_eq_signaling( floatx80, floatx80 );
char floatx80_le_quiet( floatx80, floatx80 );
char floatx80_lt_quiet( floatx80, floatx80 );
char floatx80_is_signaling_nan( floatx80 );
# 230 "./softfloat.h"
int float128_to_int32( float128 );
int float128_to_int32_round_to_zero( float128 );
long long float128_to_int64( float128 );
long long float128_to_int64_round_to_zero( float128 );
float32 float128_to_float32( float128 );
float64 float128_to_float64( float128 );

floatx80 float128_to_floatx80( float128 );





float128 float128_round_to_int( float128 );
float128 float128_add( float128, float128 );
float128 float128_sub( float128, float128 );
float128 float128_mul( float128, float128 );
float128 float128_div( float128, float128 );
float128 float128_rem( float128, float128 );
float128 float128_sqrt( float128 );
char float128_eq( float128, float128 );
char float128_le( float128, float128 );
char float128_lt( float128, float128 );
char float128_eq_signaling( float128, float128 );
char float128_le_quiet( float128, float128 );
char float128_lt_quiet( float128, float128 );
char float128_is_signaling_nan( float128 );
# 35 "../softfloat.c" 2





int8 float_rounding_mode = float_round_nearest_even;
int8 float_exception_flags = 0;

int8 floatx80_rounding_precision = 80;







# 1 "../softfloat-macros" 1
# 42 "../softfloat-macros"
extern inline void shift32RightJamming( bits32 a, int16 count, bits32 *zPtr )
{
    bits32 z;

    if ( count == 0 ) {
        z = a;
    }
    else if ( count < 32 ) {
        z = ( a>>count ) | ( ( a<<( ( - count ) & 31 ) ) != 0 );
    }
    else {
        z = ( a != 0 );
    }
    *zPtr = z;

}
# 68 "../softfloat-macros"
extern inline void shift64RightJamming( bits64 a, int16 count, bits64 *zPtr )
{
    bits64 z;

    if ( count == 0 ) {
        z = a;
    }
    else if ( count < 64 ) {
        z = ( a>>count ) | ( ( a<<( ( - count ) & 63 ) ) != 0 );
    }
    else {
        z = ( a != 0 );
    }
    *zPtr = z;

}
# 102 "../softfloat-macros"
extern inline void
 shift64ExtraRightJamming(
     bits64 a0, bits64 a1, int16 count, bits64 *z0Ptr, bits64 *z1Ptr )
{
    bits64 z0, z1;
    int8 negCount = ( - count ) & 63;

    if ( count == 0 ) {
        z1 = a1;
        z0 = a0;
    }
    else if ( count < 64 ) {
        z1 = ( a0<<negCount ) | ( a1 != 0 );
        z0 = a0>>count;
    }
    else {
        if ( count == 64 ) {
            z1 = a0 | ( a1 != 0 );
        }
        else {
            z1 = ( ( a0 | a1 ) != 0 );
        }
        z0 = 0;
    }
    *z1Ptr = z1;
    *z0Ptr = z0;

}
# 139 "../softfloat-macros"
extern inline void
 shift128Right(
     bits64 a0, bits64 a1, int16 count, bits64 *z0Ptr, bits64 *z1Ptr )
{
    bits64 z0, z1;
    int8 negCount = ( - count ) & 63;

    if ( count == 0 ) {
        z1 = a1;
        z0 = a0;
    }
    else if ( count < 64 ) {
        z1 = ( a0<<negCount ) | ( a1>>count );
        z0 = a0>>count;
    }
    else {
        z1 = ( count < 64 ) ? ( a0>>( count & 63 ) ) : 0;
        z0 = 0;
    }
    *z1Ptr = z1;
    *z0Ptr = z0;

}
# 174 "../softfloat-macros"
extern inline void
 shift128RightJamming(
     bits64 a0, bits64 a1, int16 count, bits64 *z0Ptr, bits64 *z1Ptr )
{
    bits64 z0, z1;
    int8 negCount = ( - count ) & 63;

    if ( count == 0 ) {
        z1 = a1;
        z0 = a0;
    }
    else if ( count < 64 ) {
        z1 = ( a0<<negCount ) | ( a1>>count ) | ( ( a1<<negCount ) != 0 );
        z0 = a0>>count;
    }
    else {
        if ( count == 64 ) {
            z1 = a0 | ( a1 != 0 );
        }
        else if ( count < 128 ) {
            z1 = ( a0>>( count & 63 ) ) | ( ( ( a0<<negCount ) | a1 ) != 0 );
        }
        else {
            z1 = ( ( a0 | a1 ) != 0 );
        }
        z0 = 0;
    }
    *z1Ptr = z1;
    *z0Ptr = z0;

}
# 225 "../softfloat-macros"
extern inline void
 shift128ExtraRightJamming(
     bits64 a0,
     bits64 a1,
     bits64 a2,
     int16 count,
     bits64 *z0Ptr,
     bits64 *z1Ptr,
     bits64 *z2Ptr
 )
{
    bits64 z0, z1, z2;
    int8 negCount = ( - count ) & 63;

    if ( count == 0 ) {
        z2 = a2;
        z1 = a1;
        z0 = a0;
    }
    else {
        if ( count < 64 ) {
            z2 = a1<<negCount;
            z1 = ( a0<<negCount ) | ( a1>>count );
            z0 = a0>>count;
        }
        else {
            if ( count == 64 ) {
                z2 = a1;
                z1 = a0;
            }
            else {
                a2 |= a1;
                if ( count < 128 ) {
                    z2 = a0<<negCount;
                    z1 = a0>>( count & 63 );
                }
                else {
                    z2 = ( count == 128 ) ? a0 : ( a0 != 0 );
                    z1 = 0;
                }
            }
            z0 = 0;
        }
        z2 |= ( a2 != 0 );
    }
    *z2Ptr = z2;
    *z1Ptr = z1;
    *z0Ptr = z0;

}
# 283 "../softfloat-macros"
extern inline void
 shortShift128Left(
     bits64 a0, bits64 a1, int16 count, bits64 *z0Ptr, bits64 *z1Ptr )
{

    *z1Ptr = a1<<count;
    *z0Ptr =
        ( count == 0 ) ? a0 : ( a0<<count ) | ( a1>>( ( - count ) & 63 ) );

}
# 302 "../softfloat-macros"
extern inline void
 shortShift192Left(
     bits64 a0,
     bits64 a1,
     bits64 a2,
     int16 count,
     bits64 *z0Ptr,
     bits64 *z1Ptr,
     bits64 *z2Ptr
 )
{
    bits64 z0, z1, z2;
    int8 negCount;

    z2 = a2<<count;
    z1 = a1<<count;
    z0 = a0<<count;
    if ( 0 < count ) {
        negCount = ( ( - count ) & 63 );
        z1 |= a2>>negCount;
        z0 |= a1>>negCount;
    }
    *z2Ptr = z2;
    *z1Ptr = z1;
    *z0Ptr = z0;

}
# 337 "../softfloat-macros"
extern inline void
 add128(
     bits64 a0, bits64 a1, bits64 b0, bits64 b1, bits64 *z0Ptr, bits64 *z1Ptr )
{
    bits64 z1;

    z1 = a1 + b1;
    *z1Ptr = z1;
    *z0Ptr = a0 + b0 + ( z1 < a1 );

}
# 357 "../softfloat-macros"
extern inline void
 add192(
     bits64 a0,
     bits64 a1,
     bits64 a2,
     bits64 b0,
     bits64 b1,
     bits64 b2,
     bits64 *z0Ptr,
     bits64 *z1Ptr,
     bits64 *z2Ptr
 )
{
    bits64 z0, z1, z2;
    int8 carry0, carry1;

    z2 = a2 + b2;
    carry1 = ( z2 < a2 );
    z1 = a1 + b1;
    carry0 = ( z1 < a1 );
    z0 = a0 + b0;
    z1 += carry1;
    z0 += ( z1 < carry1 );
    z0 += carry0;
    *z2Ptr = z2;
    *z1Ptr = z1;
    *z0Ptr = z0;

}
# 395 "../softfloat-macros"
extern inline void
 sub128(
     bits64 a0, bits64 a1, bits64 b0, bits64 b1, bits64 *z0Ptr, bits64 *z1Ptr )
{

    *z1Ptr = a1 - b1;
    *z0Ptr = a0 - b0 - ( a1 < b1 );

}
# 413 "../softfloat-macros"
extern inline void
 sub192(
     bits64 a0,
     bits64 a1,
     bits64 a2,
     bits64 b0,
     bits64 b1,
     bits64 b2,
     bits64 *z0Ptr,
     bits64 *z1Ptr,
     bits64 *z2Ptr
 )
{
    bits64 z0, z1, z2;
    int8 borrow0, borrow1;

    z2 = a2 - b2;
    borrow1 = ( a2 < b2 );
    z1 = a1 - b1;
    borrow0 = ( a1 < b1 );
    z0 = a0 - b0;
    z0 -= ( z1 < borrow1 );
    z1 -= borrow1;
    z0 -= borrow0;
    *z2Ptr = z2;
    *z1Ptr = z1;
    *z0Ptr = z0;

}







extern inline void mul64To128( bits64 a, bits64 b, bits64 *z0Ptr, bits64 *z1Ptr )
{
    bits32 aHigh, aLow, bHigh, bLow;
    bits64 z0, zMiddleA, zMiddleB, z1;

    aLow = a;
    aHigh = a>>32;
    bLow = b;
    bHigh = b>>32;
    z1 = ( (bits64) aLow ) * bLow;
    zMiddleA = ( (bits64) aLow ) * bHigh;
    zMiddleB = ( (bits64) aHigh ) * bLow;
    z0 = ( (bits64) aHigh ) * bHigh;
    zMiddleA += zMiddleB;
    z0 += ( ( (bits64) ( zMiddleA < zMiddleB ) )<<32 ) + ( zMiddleA>>32 );
    zMiddleA <<= 32;
    z1 += zMiddleA;
    z0 += ( z1 < zMiddleA );
    *z1Ptr = z1;
    *z0Ptr = z0;

}
# 479 "../softfloat-macros"
extern inline void
 mul128By64To192(
     bits64 a0,
     bits64 a1,
     bits64 b,
     bits64 *z0Ptr,
     bits64 *z1Ptr,
     bits64 *z2Ptr
 )
{
    bits64 z0, z1, z2, more1;

    mul64To128( a1, b, &z1, &z2 );
    mul64To128( a0, b, &z0, &more1 );
    add128( z0, more1, 0, z1, &z0, &z1 );
    *z2Ptr = z2;
    *z1Ptr = z1;
    *z0Ptr = z0;

}
# 507 "../softfloat-macros"
extern inline void
 mul128To256(
     bits64 a0,
     bits64 a1,
     bits64 b0,
     bits64 b1,
     bits64 *z0Ptr,
     bits64 *z1Ptr,
     bits64 *z2Ptr,
     bits64 *z3Ptr
 )
{
    bits64 z0, z1, z2, z3;
    bits64 more1, more2;

    mul64To128( a1, b1, &z2, &z3 );
    mul64To128( a1, b0, &z1, &more2 );
    add128( z1, more2, 0, z2, &z1, &z2 );
    mul64To128( a0, b0, &z0, &more1 );
    add128( z0, more1, 0, z1, &z0, &z1 );
    mul64To128( a0, b1, &more1, &more2 );
    add128( more1, more2, 0, z2, &more1, &z2 );
    add128( z0, z1, 0, more1, &z0, &z1 );
    *z3Ptr = z3;
    *z2Ptr = z2;
    *z1Ptr = z1;
    *z0Ptr = z0;

}
# 546 "../softfloat-macros"
static bits64 estimateDiv128To64( bits64 a0, bits64 a1, bits64 b )
{
    bits64 b0, b1;
    bits64 rem0, rem1, term0, term1;
    bits64 z;

    if ( b <= a0 ) return 0xFFFFFFFFFFFFFFFFLL;
    b0 = b>>32;
    z = ( b0<<32 <= a0 ) ? 0xFFFFFFFF00000000LL : ( a0 / b0 )<<32;
    mul64To128( b, z, &term0, &term1 );
    sub128( a0, a1, term0, term1, &rem0, &rem1 );
    while ( ( (sbits64) rem0 ) < 0 ) {
        z -= 0x100000000LL;
        b1 = b<<32;
        add128( rem0, rem1, b0, b1, &rem0, &rem1 );
    }
    rem0 = ( rem0<<32 ) | ( rem1>>32 );
    z |= ( b0<<32 <= rem0 ) ? 0xFFFFFFFF : rem0 / b0;
    return z;

}
# 578 "../softfloat-macros"
static bits32 estimateSqrt32( int16 aExp, bits32 a )
{
    static const bits16 sqrtOddAdjustments[] = {
        0x0004, 0x0022, 0x005D, 0x00B1, 0x011D, 0x019F, 0x0236, 0x02E0,
        0x039C, 0x0468, 0x0545, 0x0631, 0x072B, 0x0832, 0x0946, 0x0A67
    };
    static const bits16 sqrtEvenAdjustments[] = {
        0x0A2D, 0x08AF, 0x075A, 0x0629, 0x051A, 0x0429, 0x0356, 0x029E,
        0x0200, 0x0179, 0x0109, 0x00AF, 0x0068, 0x0034, 0x0012, 0x0002
    };
    int8 index;
    bits32 z;

    index = ( a>>27 ) & 15;
    if ( aExp & 1 ) {
        z = 0x4000 + ( a>>17 ) - sqrtOddAdjustments[ index ];
        z = ( ( a / z )<<14 ) + ( z<<15 );
        a >>= 1;
    }
    else {
        z = 0x8000 + ( a>>17 ) - sqrtEvenAdjustments[ index ];
        z = a / z + z;
        z = ( 0x20000 <= z ) ? 0xFFFF8000 : ( z<<15 );
        if ( z <= a ) return (bits32) ( ( (sbits32) a )>>1 );
    }
    return ( (bits32) ( ( ( (bits64) a )<<31 ) / z ) ) + ( z>>1 );

}






static int8 countLeadingZeros32( bits32 a )
{
    static const int8 countLeadingZerosHigh[] = {
        8, 7, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4,
        3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    int8 shiftCount;

    shiftCount = 0;
    if ( a < 0x10000 ) {
        shiftCount += 16;
        a <<= 16;
    }
    if ( a < 0x1000000 ) {
        shiftCount += 8;
        a <<= 8;
    }
    shiftCount += countLeadingZerosHigh[ a>>24 ];
    return shiftCount;

}






static int8 countLeadingZeros64( bits64 a )
{
    int8 shiftCount;

    shiftCount = 0;
    if ( a < ( (bits64) 1 )<<32 ) {
        shiftCount += 32;
    }
    else {
        a >>= 32;
    }
    shiftCount += countLeadingZeros32( a );
    return shiftCount;

}







extern inline flag eq128( bits64 a0, bits64 a1, bits64 b0, bits64 b1 )
{

    return ( a0 == b0 ) && ( a1 == b1 );

}







extern inline flag le128( bits64 a0, bits64 a1, bits64 b0, bits64 b1 )
{

    return ( a0 < b0 ) || ( ( a0 == b0 ) && ( a1 <= b1 ) );

}







extern inline flag lt128( bits64 a0, bits64 a1, bits64 b0, bits64 b1 )
{

    return ( a0 < b0 ) || ( ( a0 == b0 ) && ( a1 < b1 ) );

}







extern inline flag ne128( bits64 a0, bits64 a1, bits64 b0, bits64 b1 )
{

    return ( a0 != b0 ) || ( a1 != b1 );

}
# 52 "../softfloat.c" 2
# 61 "../softfloat.c"
# 1 "./softfloat-specialize" 1
# 37 "./softfloat-specialize"
int8 float_detect_tininess = float_tininess_after_rounding;
# 46 "./softfloat-specialize"
void float_raise( int8 flags )
{

    float_exception_flags |= flags;

}




typedef struct {
    flag sign;
    bits64 high, low;
} commonNaNT;
# 71 "./softfloat-specialize"
flag float32_is_nan( float32 a )
{

    return ( 0xFF000000 < (bits32) ( a<<1 ) );

}






flag float32_is_signaling_nan( float32 a )
{

    return ( ( ( a>>22 ) & 0x1FF ) == 0x1FE ) && ( a & 0x003FFFFF );

}







static commonNaNT float32ToCommonNaN( float32 a )
{
    commonNaNT z;

    if ( float32_is_signaling_nan( a ) ) float_raise( float_flag_invalid );
    z.sign = a>>31;
    z.low = 0;
    z.high = ( (bits64) a )<<41;
    return z;

}






static float32 commonNaNToFloat32( commonNaNT a )
{

    return ( ( (bits32) a.sign )<<31 ) | 0x7FC00000 | ( a.high>>41 );

}







static float32 propagateFloat32NaN( float32 a, float32 b )
{
    flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;

    aIsNaN = float32_is_nan( a );
    aIsSignalingNaN = float32_is_signaling_nan( a );
    bIsNaN = float32_is_nan( b );
    bIsSignalingNaN = float32_is_signaling_nan( b );
    a |= 0x00400000;
    b |= 0x00400000;
    if ( aIsSignalingNaN | bIsSignalingNaN ) float_raise( float_flag_invalid );
    if ( aIsSignalingNaN ) {
        if ( bIsSignalingNaN ) goto returnLargerSignificand;
        return bIsNaN ? b : a;
    }
    else if ( aIsNaN ) {
        if ( bIsSignalingNaN | ! bIsNaN ) return a;
 returnLargerSignificand:
        if ( (bits32) ( a<<1 ) < (bits32) ( b<<1 ) ) return b;
        if ( (bits32) ( b<<1 ) < (bits32) ( a<<1 ) ) return a;
        return ( a < b ) ? a : b;
    }
    else {
        return b;
    }

}
# 164 "./softfloat-specialize"
flag float64_is_nan( float64 a )
{

    return ( 0xFFE0000000000000LL < (bits64) ( a<<1 ) );

}






flag float64_is_signaling_nan( float64 a )
{

    return
           ( ( ( a>>51 ) & 0xFFF ) == 0xFFE )
        && ( a & 0x0007FFFFFFFFFFFFLL );

}







static commonNaNT float64ToCommonNaN( float64 a )
{
    commonNaNT z;

    if ( float64_is_signaling_nan( a ) ) float_raise( float_flag_invalid );
    z.sign = a>>63;
    z.low = 0;
    z.high = a<<12;
    return z;

}






static float64 commonNaNToFloat64( commonNaNT a )
{

    return
          ( ( (bits64) a.sign )<<63 )
        | 0x7FF8000000000000LL
        | ( a.high>>12 );

}







static float64 propagateFloat64NaN( float64 a, float64 b )
{
    flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;

    aIsNaN = float64_is_nan( a );
    aIsSignalingNaN = float64_is_signaling_nan( a );
    bIsNaN = float64_is_nan( b );
    bIsSignalingNaN = float64_is_signaling_nan( b );
    a |= 0x0008000000000000LL;
    b |= 0x0008000000000000LL;
    if ( aIsSignalingNaN | bIsSignalingNaN ) float_raise( float_flag_invalid );
    if ( aIsSignalingNaN ) {
        if ( bIsSignalingNaN ) goto returnLargerSignificand;
        return bIsNaN ? b : a;
    }
    else if ( aIsNaN ) {
        if ( bIsSignalingNaN | ! bIsNaN ) return a;
 returnLargerSignificand:
        if ( (bits64) ( a<<1 ) < (bits64) ( b<<1 ) ) return b;
        if ( (bits64) ( b<<1 ) < (bits64) ( a<<1 ) ) return a;
        return ( a < b ) ? a : b;
    }
    else {
        return b;
    }

}
# 267 "./softfloat-specialize"
flag floatx80_is_nan( floatx80 a )
{

    return ( ( a.high & 0x7FFF ) == 0x7FFF ) && (bits64) ( a.low<<1 );

}






flag floatx80_is_signaling_nan( floatx80 a )
{
    bits64 aLow;

    aLow = a.low & ~ 0x4000000000000000LL;
    return
           ( ( a.high & 0x7FFF ) == 0x7FFF )
        && (bits64) ( aLow<<1 )
        && ( a.low == aLow );

}







static commonNaNT floatx80ToCommonNaN( floatx80 a )
{
    commonNaNT z;

    if ( floatx80_is_signaling_nan( a ) ) float_raise( float_flag_invalid );
    z.sign = a.high>>15;
    z.low = 0;
    z.high = a.low<<1;
    return z;

}






static floatx80 commonNaNToFloatx80( commonNaNT a )
{
    floatx80 z;

    z.low = 0xC000000000000000LL | ( a.high>>1 );
    z.high = ( ( (bits16) a.sign )<<15 ) | 0x7FFF;
    return z;

}







static floatx80 propagateFloatx80NaN( floatx80 a, floatx80 b )
{
    flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;

    aIsNaN = floatx80_is_nan( a );
    aIsSignalingNaN = floatx80_is_signaling_nan( a );
    bIsNaN = floatx80_is_nan( b );
    bIsSignalingNaN = floatx80_is_signaling_nan( b );
    a.low |= 0xC000000000000000LL;
    b.low |= 0xC000000000000000LL;
    if ( aIsSignalingNaN | bIsSignalingNaN ) float_raise( float_flag_invalid );
    if ( aIsSignalingNaN ) {
        if ( bIsSignalingNaN ) goto returnLargerSignificand;
        return bIsNaN ? b : a;
    }
    else if ( aIsNaN ) {
        if ( bIsSignalingNaN | ! bIsNaN ) return a;
 returnLargerSignificand:
        if ( a.low < b.low ) return b;
        if ( b.low < a.low ) return a;
        return ( a.high < b.high ) ? a : b;
    }
    else {
        return b;
    }

}
# 374 "./softfloat-specialize"
flag float128_is_nan( float128 a )
{

    return
           ( 0xFFFE000000000000LL <= (bits64) ( a.high<<1 ) )
        && ( a.low || ( a.high & 0x0000FFFFFFFFFFFFLL ) );

}






flag float128_is_signaling_nan( float128 a )
{

    return
           ( ( ( a.high>>47 ) & 0xFFFF ) == 0xFFFE )
        && ( a.low || ( a.high & 0x00007FFFFFFFFFFFLL ) );

}







static commonNaNT float128ToCommonNaN( float128 a )
{
    commonNaNT z;

    if ( float128_is_signaling_nan( a ) ) float_raise( float_flag_invalid );
    z.sign = a.high>>63;
    shortShift128Left( a.high, a.low, 16, &z.high, &z.low );
    return z;

}






static float128 commonNaNToFloat128( commonNaNT a )
{
    float128 z;

    shift128Right( a.high, a.low, 16, &z.high, &z.low );
    z.high |= ( ( (bits64) a.sign )<<63 ) | 0x7FFF800000000000LL;
    return z;

}







static float128 propagateFloat128NaN( float128 a, float128 b )
{
    flag aIsNaN, aIsSignalingNaN, bIsNaN, bIsSignalingNaN;

    aIsNaN = float128_is_nan( a );
    aIsSignalingNaN = float128_is_signaling_nan( a );
    bIsNaN = float128_is_nan( b );
    bIsSignalingNaN = float128_is_signaling_nan( b );
    a.high |= 0x0000800000000000LL;
    b.high |= 0x0000800000000000LL;
    if ( aIsSignalingNaN | bIsSignalingNaN ) float_raise( float_flag_invalid );
    if ( aIsSignalingNaN ) {
        if ( bIsSignalingNaN ) goto returnLargerSignificand;
        return bIsNaN ? b : a;
    }
    else if ( aIsNaN ) {
        if ( bIsSignalingNaN | ! bIsNaN ) return a;
 returnLargerSignificand:
        if ( lt128( a.high<<1, a.low, b.high<<1, b.low ) ) return b;
        if ( lt128( b.high<<1, b.low, a.high<<1, a.low ) ) return a;
        return ( a.high < b.high ) ? a : b;
    }
    else {
        return b;
    }

}
# 62 "../softfloat.c" 2
# 74 "../softfloat.c"
static int32 roundAndPackInt32( flag zSign, bits64 absZ )
{
    int8 roundingMode;
    flag roundNearestEven;
    int8 roundIncrement, roundBits;
    int32 z;

    roundingMode = float_rounding_mode;
    roundNearestEven = ( roundingMode == float_round_nearest_even );
    roundIncrement = 0x40;
    if ( ! roundNearestEven ) {
        if ( roundingMode == float_round_to_zero ) {
            roundIncrement = 0;
        }
        else {
            roundIncrement = 0x7F;
            if ( zSign ) {
                if ( roundingMode == float_round_up ) roundIncrement = 0;
            }
            else {
                if ( roundingMode == float_round_down ) roundIncrement = 0;
            }
        }
    }
    roundBits = absZ & 0x7F;
    absZ = ( absZ + roundIncrement )>>7;
    absZ &= ~ ( ( ( roundBits ^ 0x40 ) == 0 ) & roundNearestEven );
    z = absZ;
    if ( zSign ) z = - z;
    if ( ( absZ>>32 ) || ( z && ( ( z < 0 ) ^ zSign ) ) ) {
        float_raise( float_flag_invalid );
        return zSign ? (sbits32) 0x80000000 : 0x7FFFFFFF;
    }
    if ( roundBits ) float_exception_flags |= float_flag_inexact;
    return z;

}
# 124 "../softfloat.c"
static int64 roundAndPackInt64( flag zSign, bits64 absZ0, bits64 absZ1 )
{
    int8 roundingMode;
    flag roundNearestEven, increment;
    int64 z;

    roundingMode = float_rounding_mode;
    roundNearestEven = ( roundingMode == float_round_nearest_even );
    increment = ( (sbits64) absZ1 < 0 );
    if ( ! roundNearestEven ) {
        if ( roundingMode == float_round_to_zero ) {
            increment = 0;
        }
        else {
            if ( zSign ) {
                increment = ( roundingMode == float_round_down ) && absZ1;
            }
            else {
                increment = ( roundingMode == float_round_up ) && absZ1;
            }
        }
    }
    if ( increment ) {
        ++absZ0;
        if ( absZ0 == 0 ) goto overflow;
        absZ0 &= ~ ( ( (bits64) ( absZ1<<1 ) == 0 ) & roundNearestEven );
    }
    z = absZ0;
    if ( zSign ) z = - z;
    if ( z && ( ( z < 0 ) ^ zSign ) ) {
 overflow:
        float_raise( float_flag_invalid );
        return
              zSign ? (sbits64) 0x8000000000000000LL
            : 0x7FFFFFFFFFFFFFFFLL;
    }
    if ( absZ1 ) float_exception_flags |= float_flag_inexact;
    return z;

}





extern inline bits32 extractFloat32Frac( float32 a )
{

    return a & 0x007FFFFF;

}





extern inline int16 extractFloat32Exp( float32 a )
{

    return ( a>>23 ) & 0xFF;

}





extern inline flag extractFloat32Sign( float32 a )
{

    return a>>31;

}
# 205 "../softfloat.c"
static void
 normalizeFloat32Subnormal( bits32 aSig, int16 *zExpPtr, bits32 *zSigPtr )
{
    int8 shiftCount;

    shiftCount = countLeadingZeros32( aSig ) - 8;
    *zSigPtr = aSig<<shiftCount;
    *zExpPtr = 1 - shiftCount;

}
# 227 "../softfloat.c"
extern inline float32 packFloat32( flag zSign, int16 zExp, bits32 zSig )
{

    return ( ( (bits32) zSign )<<31 ) + ( ( (bits32) zExp )<<23 ) + zSig;

}
# 256 "../softfloat.c"
static float32 roundAndPackFloat32( flag zSign, int16 zExp, bits32 zSig )
{
    int8 roundingMode;
    flag roundNearestEven;
    int8 roundIncrement, roundBits;
    flag isTiny;

    roundingMode = float_rounding_mode;
    roundNearestEven = ( roundingMode == float_round_nearest_even );
    roundIncrement = 0x40;
    if ( ! roundNearestEven ) {
        if ( roundingMode == float_round_to_zero ) {
            roundIncrement = 0;
        }
        else {
            roundIncrement = 0x7F;
            if ( zSign ) {
                if ( roundingMode == float_round_up ) roundIncrement = 0;
            }
            else {
                if ( roundingMode == float_round_down ) roundIncrement = 0;
            }
        }
    }
    roundBits = zSig & 0x7F;
    if ( 0xFD <= (bits16) zExp ) {
        if ( ( 0xFD < zExp )
             || ( ( zExp == 0xFD )
                  && ( (sbits32) ( zSig + roundIncrement ) < 0 ) )
           ) {
            float_raise( float_flag_overflow | float_flag_inexact );
            return packFloat32( zSign, 0xFF, 0 ) - ( roundIncrement == 0 );
        }
        if ( zExp < 0 ) {
            isTiny =
                   ( float_detect_tininess == float_tininess_before_rounding )
                || ( zExp < -1 )
                || ( zSig + roundIncrement < 0x80000000 );
            shift32RightJamming( zSig, - zExp, &zSig );
            zExp = 0;
            roundBits = zSig & 0x7F;
            if ( isTiny && roundBits ) float_raise( float_flag_underflow );
        }
    }
    if ( roundBits ) float_exception_flags |= float_flag_inexact;
    zSig = ( zSig + roundIncrement )>>7;
    zSig &= ~ ( ( ( roundBits ^ 0x40 ) == 0 ) & roundNearestEven );
    if ( zSig == 0 ) zExp = 0;
    return packFloat32( zSign, zExp, zSig );

}
# 317 "../softfloat.c"
static float32
 normalizeRoundAndPackFloat32( flag zSign, int16 zExp, bits32 zSig )
{
    int8 shiftCount;

    shiftCount = countLeadingZeros32( zSig ) - 1;
    return roundAndPackFloat32( zSign, zExp - shiftCount, zSig<<shiftCount );

}





extern inline bits64 extractFloat64Frac( float64 a )
{

    return a & 0x000FFFFFFFFFFFFFLL;

}





extern inline int16 extractFloat64Exp( float64 a )
{

    return ( a>>52 ) & 0x7FF;

}





extern inline flag extractFloat64Sign( float64 a )
{

    return a>>63;

}
# 367 "../softfloat.c"
static void
 normalizeFloat64Subnormal( bits64 aSig, int16 *zExpPtr, bits64 *zSigPtr )
{
    int8 shiftCount;

    shiftCount = countLeadingZeros64( aSig ) - 11;
    *zSigPtr = aSig<<shiftCount;
    *zExpPtr = 1 - shiftCount;

}
# 389 "../softfloat.c"
extern inline float64 packFloat64( flag zSign, int16 zExp, bits64 zSig )
{

    return ( ( (bits64) zSign )<<63 ) + ( ( (bits64) zExp )<<52 ) + zSig;

}
# 418 "../softfloat.c"
static float64 roundAndPackFloat64( flag zSign, int16 zExp, bits64 zSig )
{
    int8 roundingMode;
    flag roundNearestEven;
    int16 roundIncrement, roundBits;
    flag isTiny;

    roundingMode = float_rounding_mode;
    roundNearestEven = ( roundingMode == float_round_nearest_even );
    roundIncrement = 0x200;
    if ( ! roundNearestEven ) {
        if ( roundingMode == float_round_to_zero ) {
            roundIncrement = 0;
        }
        else {
            roundIncrement = 0x3FF;
            if ( zSign ) {
                if ( roundingMode == float_round_up ) roundIncrement = 0;
            }
            else {
                if ( roundingMode == float_round_down ) roundIncrement = 0;
            }
        }
    }
    roundBits = zSig & 0x3FF;
    if ( 0x7FD <= (bits16) zExp ) {
        if ( ( 0x7FD < zExp )
             || ( ( zExp == 0x7FD )
                  && ( (sbits64) ( zSig + roundIncrement ) < 0 ) )
           ) {
            float_raise( float_flag_overflow | float_flag_inexact );
            return packFloat64( zSign, 0x7FF, 0 ) - ( roundIncrement == 0 );
        }
        if ( zExp < 0 ) {
            isTiny =
                   ( float_detect_tininess == float_tininess_before_rounding )
                || ( zExp < -1 )
                || ( zSig + roundIncrement < 0x8000000000000000LL );
            shift64RightJamming( zSig, - zExp, &zSig );
            zExp = 0;
            roundBits = zSig & 0x3FF;
            if ( isTiny && roundBits ) float_raise( float_flag_underflow );
        }
    }
    if ( roundBits ) float_exception_flags |= float_flag_inexact;
    zSig = ( zSig + roundIncrement )>>10;
    zSig &= ~ ( ( ( roundBits ^ 0x200 ) == 0 ) & roundNearestEven );
    if ( zSig == 0 ) zExp = 0;
    return packFloat64( zSign, zExp, zSig );

}
# 479 "../softfloat.c"
static float64
 normalizeRoundAndPackFloat64( flag zSign, int16 zExp, bits64 zSig )
{
    int8 shiftCount;

    shiftCount = countLeadingZeros64( zSig ) - 1;
    return roundAndPackFloat64( zSign, zExp - shiftCount, zSig<<shiftCount );

}
# 496 "../softfloat.c"
extern inline bits64 extractFloatx80Frac( floatx80 a )
{

    return a.low;

}






extern inline int32 extractFloatx80Exp( floatx80 a )
{

    return a.high & 0x7FFF;

}






extern inline flag extractFloatx80Sign( floatx80 a )
{

    return a.high>>15;

}
# 534 "../softfloat.c"
static void
 normalizeFloatx80Subnormal( bits64 aSig, int32 *zExpPtr, bits64 *zSigPtr )
{
    int8 shiftCount;

    shiftCount = countLeadingZeros64( aSig );
    *zSigPtr = aSig<<shiftCount;
    *zExpPtr = 1 - shiftCount;

}






extern inline floatx80 packFloatx80( flag zSign, int32 zExp, bits64 zSig )
{
    floatx80 z;

    z.low = zSig;
    z.high = ( ( (bits16) zSign )<<15 ) + zExp;
    return z;

}
# 584 "../softfloat.c"
static floatx80
 roundAndPackFloatx80(
     int8 roundingPrecision, flag zSign, int32 zExp, bits64 zSig0, bits64 zSig1
 )
{
    int8 roundingMode;
    flag roundNearestEven, increment, isTiny;
    int64 roundIncrement, roundMask, roundBits;

    roundingMode = float_rounding_mode;
    roundNearestEven = ( roundingMode == float_round_nearest_even );
    if ( roundingPrecision == 80 ) goto precision80;
    if ( roundingPrecision == 64 ) {
        roundIncrement = 0x0000000000000400LL;
        roundMask = 0x00000000000007FFLL;
    }
    else if ( roundingPrecision == 32 ) {
        roundIncrement = 0x0000008000000000LL;
        roundMask = 0x000000FFFFFFFFFFLL;
    }
    else {
        goto precision80;
    }
    zSig0 |= ( zSig1 != 0 );
    if ( ! roundNearestEven ) {
        if ( roundingMode == float_round_to_zero ) {
            roundIncrement = 0;
        }
        else {
            roundIncrement = roundMask;
            if ( zSign ) {
                if ( roundingMode == float_round_up ) roundIncrement = 0;
            }
            else {
                if ( roundingMode == float_round_down ) roundIncrement = 0;
            }
        }
    }
    roundBits = zSig0 & roundMask;
    if ( 0x7FFD <= (bits32) ( zExp - 1 ) ) {
        if ( ( 0x7FFE < zExp )
             || ( ( zExp == 0x7FFE ) && ( zSig0 + roundIncrement < zSig0 ) )
           ) {
            goto overflow;
        }
        if ( zExp <= 0 ) {
            isTiny =
                   ( float_detect_tininess == float_tininess_before_rounding )
                || ( zExp < 0 )
                || ( zSig0 <= zSig0 + roundIncrement );
            shift64RightJamming( zSig0, 1 - zExp, &zSig0 );
            zExp = 0;
            roundBits = zSig0 & roundMask;
            if ( isTiny && roundBits ) float_raise( float_flag_underflow );
            if ( roundBits ) float_exception_flags |= float_flag_inexact;
            zSig0 += roundIncrement;
            if ( (sbits64) zSig0 < 0 ) zExp = 1;
            roundIncrement = roundMask + 1;
            if ( roundNearestEven && ( roundBits<<1 == roundIncrement ) ) {
                roundMask |= roundIncrement;
            }
            zSig0 &= ~ roundMask;
            return packFloatx80( zSign, zExp, zSig0 );
        }
    }
    if ( roundBits ) float_exception_flags |= float_flag_inexact;
    zSig0 += roundIncrement;
    if ( zSig0 < roundIncrement ) {
        ++zExp;
        zSig0 = 0x8000000000000000LL;
    }
    roundIncrement = roundMask + 1;
    if ( roundNearestEven && ( roundBits<<1 == roundIncrement ) ) {
        roundMask |= roundIncrement;
    }
    zSig0 &= ~ roundMask;
    if ( zSig0 == 0 ) zExp = 0;
    return packFloatx80( zSign, zExp, zSig0 );
 precision80:
    increment = ( (sbits64) zSig1 < 0 );
    if ( ! roundNearestEven ) {
        if ( roundingMode == float_round_to_zero ) {
            increment = 0;
        }
        else {
            if ( zSign ) {
                increment = ( roundingMode == float_round_down ) && zSig1;
            }
            else {
                increment = ( roundingMode == float_round_up ) && zSig1;
            }
        }
    }
    if ( 0x7FFD <= (bits32) ( zExp - 1 ) ) {
        if ( ( 0x7FFE < zExp )
             || ( ( zExp == 0x7FFE )
                  && ( zSig0 == 0xFFFFFFFFFFFFFFFFLL )
                  && increment
                )
           ) {
            roundMask = 0;
 overflow:
            float_raise( float_flag_overflow | float_flag_inexact );
            if ( ( roundingMode == float_round_to_zero )
                 || ( zSign && ( roundingMode == float_round_up ) )
                 || ( ! zSign && ( roundingMode == float_round_down ) )
               ) {
                return packFloatx80( zSign, 0x7FFE, ~ roundMask );
            }
            return packFloatx80( zSign, 0x7FFF, 0x8000000000000000LL );
        }
        if ( zExp <= 0 ) {
            isTiny =
                   ( float_detect_tininess == float_tininess_before_rounding )
                || ( zExp < 0 )
                || ! increment
                || ( zSig0 < 0xFFFFFFFFFFFFFFFFLL );
            shift64ExtraRightJamming( zSig0, zSig1, 1 - zExp, &zSig0, &zSig1 );
            zExp = 0;
            if ( isTiny && zSig1 ) float_raise( float_flag_underflow );
            if ( zSig1 ) float_exception_flags |= float_flag_inexact;
            if ( roundNearestEven ) {
                increment = ( (sbits64) zSig1 < 0 );
            }
            else {
                if ( zSign ) {
                    increment = ( roundingMode == float_round_down ) && zSig1;
                }
                else {
                    increment = ( roundingMode == float_round_up ) && zSig1;
                }
            }
            if ( increment ) {
                ++zSig0;
                zSig0 &=
                    ~ ( ( (bits64) ( zSig1<<1 ) == 0 ) & roundNearestEven );
                if ( (sbits64) zSig0 < 0 ) zExp = 1;
            }
            return packFloatx80( zSign, zExp, zSig0 );
        }
    }
    if ( zSig1 ) float_exception_flags |= float_flag_inexact;
    if ( increment ) {
        ++zSig0;
        if ( zSig0 == 0 ) {
            ++zExp;
            zSig0 = 0x8000000000000000LL;
        }
        else {
            zSig0 &= ~ ( ( (bits64) ( zSig1<<1 ) == 0 ) & roundNearestEven );
        }
    }
    else {
        if ( zSig0 == 0 ) zExp = 0;
    }
    return packFloatx80( zSign, zExp, zSig0 );

}
# 752 "../softfloat.c"
static floatx80
 normalizeRoundAndPackFloatx80(
     int8 roundingPrecision, flag zSign, int32 zExp, bits64 zSig0, bits64 zSig1
 )
{
    int8 shiftCount;

    if ( zSig0 == 0 ) {
        zSig0 = zSig1;
        zSig1 = 0;
        zExp -= 64;
    }
    shiftCount = countLeadingZeros64( zSig0 );
    shortShift128Left( zSig0, zSig1, shiftCount, &zSig0, &zSig1 );
    zExp -= shiftCount;
    return
        roundAndPackFloatx80( roundingPrecision, zSign, zExp, zSig0, zSig1 );

}
# 781 "../softfloat.c"
extern inline bits64 extractFloat128Frac1( float128 a )
{

    return a.low;

}






extern inline bits64 extractFloat128Frac0( float128 a )
{

    return a.high & 0x0000FFFFFFFFFFFFLL;

}






extern inline int32 extractFloat128Exp( float128 a )
{

    return ( a.high>>48 ) & 0x7FFF;

}





extern inline flag extractFloat128Sign( float128 a )
{

    return a.high>>63;

}
# 833 "../softfloat.c"
static void
 normalizeFloat128Subnormal(
     bits64 aSig0,
     bits64 aSig1,
     int32 *zExpPtr,
     bits64 *zSig0Ptr,
     bits64 *zSig1Ptr
 )
{
    int8 shiftCount;

    if ( aSig0 == 0 ) {
        shiftCount = countLeadingZeros64( aSig1 ) - 15;
        if ( shiftCount < 0 ) {
            *zSig0Ptr = aSig1>>( - shiftCount );
            *zSig1Ptr = aSig1<<( shiftCount & 63 );
        }
        else {
            *zSig0Ptr = aSig1<<shiftCount;
            *zSig1Ptr = 0;
        }
        *zExpPtr = - shiftCount - 63;
    }
    else {
        shiftCount = countLeadingZeros64( aSig0 ) - 15;
        shortShift128Left( aSig0, aSig1, shiftCount, zSig0Ptr, zSig1Ptr );
        *zExpPtr = 1 - shiftCount;
    }

}
# 877 "../softfloat.c"
extern inline float128
 packFloat128( flag zSign, int32 zExp, bits64 zSig0, bits64 zSig1 )
{
    float128 z;

    z.low = zSig1;
    z.high = ( ( (bits64) zSign )<<63 ) + ( ( (bits64) zExp )<<48 ) + zSig0;
    return z;

}
# 909 "../softfloat.c"
static float128
 roundAndPackFloat128(
     flag zSign, int32 zExp, bits64 zSig0, bits64 zSig1, bits64 zSig2 )
{
    int8 roundingMode;
    flag roundNearestEven, increment, isTiny;

    roundingMode = float_rounding_mode;
    roundNearestEven = ( roundingMode == float_round_nearest_even );
    increment = ( (sbits64) zSig2 < 0 );
    if ( ! roundNearestEven ) {
        if ( roundingMode == float_round_to_zero ) {
            increment = 0;
        }
        else {
            if ( zSign ) {
                increment = ( roundingMode == float_round_down ) && zSig2;
            }
            else {
                increment = ( roundingMode == float_round_up ) && zSig2;
            }
        }
    }
    if ( 0x7FFD <= (bits32) zExp ) {
        if ( ( 0x7FFD < zExp )
             || ( ( zExp == 0x7FFD )
                  && eq128(
                         0x0001FFFFFFFFFFFFLL,
                         0xFFFFFFFFFFFFFFFFLL,
                         zSig0,
                         zSig1
                     )
                  && increment
                )
           ) {
            float_raise( float_flag_overflow | float_flag_inexact );
            if ( ( roundingMode == float_round_to_zero )
                 || ( zSign && ( roundingMode == float_round_up ) )
                 || ( ! zSign && ( roundingMode == float_round_down ) )
               ) {
                return
                    packFloat128(
                        zSign,
                        0x7FFE,
                        0x0000FFFFFFFFFFFFLL,
                        0xFFFFFFFFFFFFFFFFLL
                    );
            }
            return packFloat128( zSign, 0x7FFF, 0, 0 );
        }
        if ( zExp < 0 ) {
            isTiny =
                   ( float_detect_tininess == float_tininess_before_rounding )
                || ( zExp < -1 )
                || ! increment
                || lt128(
                       zSig0,
                       zSig1,
                       0x0001FFFFFFFFFFFFLL,
                       0xFFFFFFFFFFFFFFFFLL
                   );
            shift128ExtraRightJamming(
                zSig0, zSig1, zSig2, - zExp, &zSig0, &zSig1, &zSig2 );
            zExp = 0;
            if ( isTiny && zSig2 ) float_raise( float_flag_underflow );
            if ( roundNearestEven ) {
                increment = ( (sbits64) zSig2 < 0 );
            }
            else {
                if ( zSign ) {
                    increment = ( roundingMode == float_round_down ) && zSig2;
                }
                else {
                    increment = ( roundingMode == float_round_up ) && zSig2;
                }
            }
        }
    }
    if ( zSig2 ) float_exception_flags |= float_flag_inexact;
    if ( increment ) {
        add128( zSig0, zSig1, 0, 1, &zSig0, &zSig1 );
        zSig1 &= ~ ( ( zSig2 + zSig2 == 0 ) & roundNearestEven );
    }
    else {
        if ( ( zSig0 | zSig1 ) == 0 ) zExp = 0;
    }
    return packFloat128( zSign, zExp, zSig0, zSig1 );

}
# 1009 "../softfloat.c"
static float128
 normalizeRoundAndPackFloat128(
     flag zSign, int32 zExp, bits64 zSig0, bits64 zSig1 )
{
    int8 shiftCount;
    bits64 zSig2;

    if ( zSig0 == 0 ) {
        zSig0 = zSig1;
        zSig1 = 0;
        zExp -= 64;
    }
    shiftCount = countLeadingZeros64( zSig0 ) - 15;
    if ( 0 <= shiftCount ) {
        zSig2 = 0;
        shortShift128Left( zSig0, zSig1, shiftCount, &zSig0, &zSig1 );
    }
    else {
        shift128ExtraRightJamming(
            zSig0, zSig1, 0, - shiftCount, &zSig0, &zSig1, &zSig2 );
    }
    zExp -= shiftCount;
    return roundAndPackFloat128( zSign, zExp, zSig0, zSig1, zSig2 );

}
# 1043 "../softfloat.c"
float32 int32_to_float32( int32 a )
{
    flag zSign;

    if ( a == 0 ) return 0;
    if ( a == (sbits32) 0x80000000 ) return packFloat32( 1, 0x9E, 0 );
    zSign = ( a < 0 );
    return normalizeRoundAndPackFloat32( zSign, 0x9C, zSign ? - a : a );

}







float64 int32_to_float64( int32 a )
{
    flag zSign;
    uint32 absA;
    int8 shiftCount;
    bits64 zSig;

    if ( a == 0 ) return 0;
    zSign = ( a < 0 );
    absA = zSign ? - a : a;
    shiftCount = countLeadingZeros32( absA ) + 21;
    zSig = absA;
    return packFloat64( zSign, 0x432 - shiftCount, zSig<<shiftCount );

}
# 1085 "../softfloat.c"
floatx80 int32_to_floatx80( int32 a )
{
    flag zSign;
    uint32 absA;
    int8 shiftCount;
    bits64 zSig;

    if ( a == 0 ) return packFloatx80( 0, 0, 0 );
    zSign = ( a < 0 );
    absA = zSign ? - a : a;
    shiftCount = countLeadingZeros32( absA ) + 32;
    zSig = absA;
    return packFloatx80( zSign, 0x403E - shiftCount, zSig<<shiftCount );

}
# 1111 "../softfloat.c"
float128 int32_to_float128( int32 a )
{
    flag zSign;
    uint32 absA;
    int8 shiftCount;
    bits64 zSig0;

    if ( a == 0 ) return packFloat128( 0, 0, 0, 0 );
    zSign = ( a < 0 );
    absA = zSign ? - a : a;
    shiftCount = countLeadingZeros32( absA ) + 17;
    zSig0 = absA;
    return packFloat128( zSign, 0x402E - shiftCount, zSig0<<shiftCount, 0 );

}
# 1135 "../softfloat.c"
float32 int64_to_float32( int64 a )
{
    flag zSign;
    uint64 absA;
    int8 shiftCount;
    bits32 zSig;

    if ( a == 0 ) return 0;
    zSign = ( a < 0 );
    absA = zSign ? - a : a;
    shiftCount = countLeadingZeros64( absA ) - 40;
    if ( 0 <= shiftCount ) {
        return packFloat32( zSign, 0x95 - shiftCount, absA<<shiftCount );
    }
    else {
        shiftCount += 7;
        if ( shiftCount < 0 ) {
            shift64RightJamming( absA, - shiftCount, &absA );
        }
        else {
            absA <<= shiftCount;
        }
        return roundAndPackFloat32( zSign, 0x9C - shiftCount, absA );
    }

}







float64 int64_to_float64( int64 a )
{
    flag zSign;

    if ( a == 0 ) return 0;
    if ( a == (sbits64) 0x8000000000000000LL ) {
        return packFloat64( 1, 0x43E, 0 );
    }
    zSign = ( a < 0 );
    return normalizeRoundAndPackFloat64( zSign, 0x43C, zSign ? - a : a );

}
# 1190 "../softfloat.c"
floatx80 int64_to_floatx80( int64 a )
{
    flag zSign;
    uint64 absA;
    int8 shiftCount;

    if ( a == 0 ) return packFloatx80( 0, 0, 0 );
    zSign = ( a < 0 );
    absA = zSign ? - a : a;
    shiftCount = countLeadingZeros64( absA );
    return packFloatx80( zSign, 0x403E - shiftCount, absA<<shiftCount );

}
# 1214 "../softfloat.c"
float128 int64_to_float128( int64 a )
{
    flag zSign;
    uint64 absA;
    int8 shiftCount;
    int32 zExp;
    bits64 zSig0, zSig1;

    if ( a == 0 ) return packFloat128( 0, 0, 0, 0 );
    zSign = ( a < 0 );
    absA = zSign ? - a : a;
    shiftCount = countLeadingZeros64( absA ) + 49;
    zExp = 0x406E - shiftCount;
    if ( 64 <= shiftCount ) {
        zSig1 = 0;
        zSig0 = absA;
        shiftCount -= 64;
    }
    else {
        zSig1 = absA;
        zSig0 = 0;
    }
    shortShift128Left( zSig0, zSig1, shiftCount, &zSig0, &zSig1 );
    return packFloat128( zSign, zExp, zSig0, zSig1 );

}
# 1253 "../softfloat.c"
int32 float32_to_int32( float32 a )
{
    flag aSign;
    int16 aExp, shiftCount;
    bits32 aSig;
    bits64 aSig64;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    aSign = extractFloat32Sign( a );
    if ( ( aExp == 0xFF ) && aSig ) aSign = 0;
    if ( aExp ) aSig |= 0x00800000;
    shiftCount = 0xAF - aExp;
    aSig64 = aSig;
    aSig64 <<= 32;
    if ( 0 < shiftCount ) shift64RightJamming( aSig64, shiftCount, &aSig64 );
    return roundAndPackInt32( aSign, aSig64 );

}
# 1283 "../softfloat.c"
int32 float32_to_int32_round_to_zero( float32 a )
{
    flag aSign;
    int16 aExp, shiftCount;
    bits32 aSig;
    int32 z;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    aSign = extractFloat32Sign( a );
    shiftCount = aExp - 0x9E;
    if ( 0 <= shiftCount ) {
        if ( a != 0xCF000000 ) {
            float_raise( float_flag_invalid );
            if ( ! aSign || ( ( aExp == 0xFF ) && aSig ) ) return 0x7FFFFFFF;
        }
        return (sbits32) 0x80000000;
    }
    else if ( aExp <= 0x7E ) {
        if ( aExp | aSig ) float_exception_flags |= float_flag_inexact;
        return 0;
    }
    aSig = ( aSig | 0x00800000 )<<8;
    z = aSig>>( - shiftCount );
    if ( (bits32) ( aSig<<( shiftCount & 31 ) ) ) {
        float_exception_flags |= float_flag_inexact;
    }
    if ( aSign ) z = - z;
    return z;

}
# 1325 "../softfloat.c"
int64 float32_to_int64( float32 a )
{
    flag aSign;
    int16 aExp, shiftCount;
    bits32 aSig;
    bits64 aSig64, aSigExtra;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    aSign = extractFloat32Sign( a );
    shiftCount = 0xBE - aExp;
    if ( shiftCount < 0 ) {
        float_raise( float_flag_invalid );
        if ( ! aSign || ( ( aExp == 0xFF ) && aSig ) ) {
            return 0x7FFFFFFFFFFFFFFFLL;
        }
        return (sbits64) 0x8000000000000000LL;
    }
    if ( aExp ) aSig |= 0x00800000;
    aSig64 = aSig;
    aSig64 <<= 40;
    shift64ExtraRightJamming( aSig64, 0, shiftCount, &aSig64, &aSigExtra );
    return roundAndPackInt64( aSign, aSig64, aSigExtra );

}
# 1361 "../softfloat.c"
int64 float32_to_int64_round_to_zero( float32 a )
{
    flag aSign;
    int16 aExp, shiftCount;
    bits32 aSig;
    bits64 aSig64;
    int64 z;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    aSign = extractFloat32Sign( a );
    shiftCount = aExp - 0xBE;
    if ( 0 <= shiftCount ) {
        if ( a != 0xDF000000 ) {
            float_raise( float_flag_invalid );
            if ( ! aSign || ( ( aExp == 0xFF ) && aSig ) ) {
                return 0x7FFFFFFFFFFFFFFFLL;
            }
        }
        return (sbits64) 0x8000000000000000LL;
    }
    else if ( aExp <= 0x7E ) {
        if ( aExp | aSig ) float_exception_flags |= float_flag_inexact;
        return 0;
    }
    aSig64 = aSig | 0x00800000;
    aSig64 <<= 40;
    z = aSig64>>( - shiftCount );
    if ( (bits64) ( aSig64<<( shiftCount & 63 ) ) ) {
        float_exception_flags |= float_flag_inexact;
    }
    if ( aSign ) z = - z;
    return z;

}
# 1404 "../softfloat.c"
float64 float32_to_float64( float32 a )
{
    flag aSign;
    int16 aExp;
    bits32 aSig;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    aSign = extractFloat32Sign( a );
    if ( aExp == 0xFF ) {
        if ( aSig ) return commonNaNToFloat64( float32ToCommonNaN( a ) );
        return packFloat64( aSign, 0x7FF, 0 );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return packFloat64( aSign, 0, 0 );
        normalizeFloat32Subnormal( aSig, &aExp, &aSig );
        --aExp;
    }
    return packFloat64( aSign, aExp + 0x380, ( (bits64) aSig )<<29 );

}
# 1435 "../softfloat.c"
floatx80 float32_to_floatx80( float32 a )
{
    flag aSign;
    int16 aExp;
    bits32 aSig;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    aSign = extractFloat32Sign( a );
    if ( aExp == 0xFF ) {
        if ( aSig ) return commonNaNToFloatx80( float32ToCommonNaN( a ) );
        return packFloatx80( aSign, 0x7FFF, 0x8000000000000000LL );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return packFloatx80( aSign, 0, 0 );
        normalizeFloat32Subnormal( aSig, &aExp, &aSig );
    }
    aSig |= 0x00800000;
    return packFloatx80( aSign, aExp + 0x3F80, ( (bits64) aSig )<<40 );

}
# 1468 "../softfloat.c"
float128 float32_to_float128( float32 a )
{
    flag aSign;
    int16 aExp;
    bits32 aSig;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    aSign = extractFloat32Sign( a );
    if ( aExp == 0xFF ) {
        if ( aSig ) return commonNaNToFloat128( float32ToCommonNaN( a ) );
        return packFloat128( aSign, 0x7FFF, 0, 0 );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return packFloat128( aSign, 0, 0, 0 );
        normalizeFloat32Subnormal( aSig, &aExp, &aSig );
        --aExp;
    }
    return packFloat128( aSign, aExp + 0x3F80, ( (bits64) aSig )<<25, 0 );

}
# 1499 "../softfloat.c"
float32 float32_round_to_int( float32 a )
{
    flag aSign;
    int16 aExp;
    bits32 lastBitMask, roundBitsMask;
    int8 roundingMode;
    float32 z;

    aExp = extractFloat32Exp( a );
    if ( 0x96 <= aExp ) {
        if ( ( aExp == 0xFF ) && extractFloat32Frac( a ) ) {
            return propagateFloat32NaN( a, a );
        }
        return a;
    }
    if ( aExp <= 0x7E ) {
        if ( (bits32) ( a<<1 ) == 0 ) return a;
        float_exception_flags |= float_flag_inexact;
        aSign = extractFloat32Sign( a );
        switch ( float_rounding_mode ) {
         case float_round_nearest_even:
            if ( ( aExp == 0x7E ) && extractFloat32Frac( a ) ) {
                return packFloat32( aSign, 0x7F, 0 );
            }
            break;
         case float_round_down:
            return aSign ? 0xBF800000 : 0;
         case float_round_up:
            return aSign ? 0x80000000 : 0x3F800000;
        }
        return packFloat32( aSign, 0, 0 );
    }
    lastBitMask = 1;
    lastBitMask <<= 0x96 - aExp;
    roundBitsMask = lastBitMask - 1;
    z = a;
    roundingMode = float_rounding_mode;
    if ( roundingMode == float_round_nearest_even ) {
        z += lastBitMask>>1;
        if ( ( z & roundBitsMask ) == 0 ) z &= ~ lastBitMask;
    }
    else if ( roundingMode != float_round_to_zero ) {
        if ( extractFloat32Sign( z ) ^ ( roundingMode == float_round_up ) ) {
            z += roundBitsMask;
        }
    }
    z &= ~ roundBitsMask;
    if ( z != a ) float_exception_flags |= float_flag_inexact;
    return z;

}
# 1559 "../softfloat.c"
static float32 addFloat32Sigs( float32 a, float32 b, flag zSign )
{
    int16 aExp, bExp, zExp;
    bits32 aSig, bSig, zSig;
    int16 expDiff;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    bSig = extractFloat32Frac( b );
    bExp = extractFloat32Exp( b );
    expDiff = aExp - bExp;
    aSig <<= 6;
    bSig <<= 6;
    if ( 0 < expDiff ) {
        if ( aExp == 0xFF ) {
            if ( aSig ) return propagateFloat32NaN( a, b );
            return a;
        }
        if ( bExp == 0 ) {
            --expDiff;
        }
        else {
            bSig |= 0x20000000;
        }
        shift32RightJamming( bSig, expDiff, &bSig );
        zExp = aExp;
    }
    else if ( expDiff < 0 ) {
        if ( bExp == 0xFF ) {
            if ( bSig ) return propagateFloat32NaN( a, b );
            return packFloat32( zSign, 0xFF, 0 );
        }
        if ( aExp == 0 ) {
            ++expDiff;
        }
        else {
            aSig |= 0x20000000;
        }
        shift32RightJamming( aSig, - expDiff, &aSig );
        zExp = bExp;
    }
    else {
        if ( aExp == 0xFF ) {
            if ( aSig | bSig ) return propagateFloat32NaN( a, b );
            return a;
        }
        if ( aExp == 0 ) return packFloat32( zSign, 0, ( aSig + bSig )>>6 );
        zSig = 0x40000000 + aSig + bSig;
        zExp = aExp;
        goto roundAndPack;
    }
    aSig |= 0x20000000;
    zSig = ( aSig + bSig )<<1;
    --zExp;
    if ( (sbits32) zSig < 0 ) {
        zSig = aSig + bSig;
        ++zExp;
    }
 roundAndPack:
    return roundAndPackFloat32( zSign, zExp, zSig );

}
# 1630 "../softfloat.c"
static float32 subFloat32Sigs( float32 a, float32 b, flag zSign )
{
    int16 aExp, bExp, zExp;
    bits32 aSig, bSig, zSig;
    int16 expDiff;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    bSig = extractFloat32Frac( b );
    bExp = extractFloat32Exp( b );
    expDiff = aExp - bExp;
    aSig <<= 7;
    bSig <<= 7;
    if ( 0 < expDiff ) goto aExpBigger;
    if ( expDiff < 0 ) goto bExpBigger;
    if ( aExp == 0xFF ) {
        if ( aSig | bSig ) return propagateFloat32NaN( a, b );
        float_raise( float_flag_invalid );
        return 0xFFC00000;
    }
    if ( aExp == 0 ) {
        aExp = 1;
        bExp = 1;
    }
    if ( bSig < aSig ) goto aBigger;
    if ( aSig < bSig ) goto bBigger;
    return packFloat32( float_rounding_mode == float_round_down, 0, 0 );
 bExpBigger:
    if ( bExp == 0xFF ) {
        if ( bSig ) return propagateFloat32NaN( a, b );
        return packFloat32( zSign ^ 1, 0xFF, 0 );
    }
    if ( aExp == 0 ) {
        ++expDiff;
    }
    else {
        aSig |= 0x40000000;
    }
    shift32RightJamming( aSig, - expDiff, &aSig );
    bSig |= 0x40000000;
 bBigger:
    zSig = bSig - aSig;
    zExp = bExp;
    zSign ^= 1;
    goto normalizeRoundAndPack;
 aExpBigger:
    if ( aExp == 0xFF ) {
        if ( aSig ) return propagateFloat32NaN( a, b );
        return a;
    }
    if ( bExp == 0 ) {
        --expDiff;
    }
    else {
        bSig |= 0x40000000;
    }
    shift32RightJamming( bSig, expDiff, &bSig );
    aSig |= 0x40000000;
 aBigger:
    zSig = aSig - bSig;
    zExp = aExp;
 normalizeRoundAndPack:
    --zExp;
    return normalizeRoundAndPackFloat32( zSign, zExp, zSig );

}







float32 float32_add( float32 a, float32 b )
{
    flag aSign, bSign;

    aSign = extractFloat32Sign( a );
    bSign = extractFloat32Sign( b );
    if ( aSign == bSign ) {
        return addFloat32Sigs( a, b, aSign );
    }
    else {
        return subFloat32Sigs( a, b, aSign );
    }

}







float32 float32_sub( float32 a, float32 b )
{
    flag aSign, bSign;

    aSign = extractFloat32Sign( a );
    bSign = extractFloat32Sign( b );
    if ( aSign == bSign ) {
        return subFloat32Sigs( a, b, aSign );
    }
    else {
        return addFloat32Sigs( a, b, aSign );
    }

}







float32 float32_mul( float32 a, float32 b )
{
    flag aSign, bSign, zSign;
    int16 aExp, bExp, zExp;
    bits32 aSig, bSig;
    bits64 zSig64;
    bits32 zSig;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    aSign = extractFloat32Sign( a );
    bSig = extractFloat32Frac( b );
    bExp = extractFloat32Exp( b );
    bSign = extractFloat32Sign( b );
    zSign = aSign ^ bSign;
    if ( aExp == 0xFF ) {
        if ( aSig || ( ( bExp == 0xFF ) && bSig ) ) {
            return propagateFloat32NaN( a, b );
        }
        if ( ( bExp | bSig ) == 0 ) {
            float_raise( float_flag_invalid );
            return 0xFFC00000;
        }
        return packFloat32( zSign, 0xFF, 0 );
    }
    if ( bExp == 0xFF ) {
        if ( bSig ) return propagateFloat32NaN( a, b );
        if ( ( aExp | aSig ) == 0 ) {
            float_raise( float_flag_invalid );
            return 0xFFC00000;
        }
        return packFloat32( zSign, 0xFF, 0 );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return packFloat32( zSign, 0, 0 );
        normalizeFloat32Subnormal( aSig, &aExp, &aSig );
    }
    if ( bExp == 0 ) {
        if ( bSig == 0 ) return packFloat32( zSign, 0, 0 );
        normalizeFloat32Subnormal( bSig, &bExp, &bSig );
    }
    zExp = aExp + bExp - 0x7F;
    aSig = ( aSig | 0x00800000 )<<7;
    bSig = ( bSig | 0x00800000 )<<8;
    shift64RightJamming( ( (bits64) aSig ) * bSig, 32, &zSig64 );
    zSig = zSig64;
    if ( 0 <= (sbits32) ( zSig<<1 ) ) {
        zSig <<= 1;
        --zExp;
    }
    return roundAndPackFloat32( zSign, zExp, zSig );

}







float32 float32_div( float32 a, float32 b )
{
    flag aSign, bSign, zSign;
    int16 aExp, bExp, zExp;
    bits32 aSig, bSig, zSig;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    aSign = extractFloat32Sign( a );
    bSig = extractFloat32Frac( b );
    bExp = extractFloat32Exp( b );
    bSign = extractFloat32Sign( b );
    zSign = aSign ^ bSign;
    if ( aExp == 0xFF ) {
        if ( aSig ) return propagateFloat32NaN( a, b );
        if ( bExp == 0xFF ) {
            if ( bSig ) return propagateFloat32NaN( a, b );
            float_raise( float_flag_invalid );
            return 0xFFC00000;
        }
        return packFloat32( zSign, 0xFF, 0 );
    }
    if ( bExp == 0xFF ) {
        if ( bSig ) return propagateFloat32NaN( a, b );
        return packFloat32( zSign, 0, 0 );
    }
    if ( bExp == 0 ) {
        if ( bSig == 0 ) {
            if ( ( aExp | aSig ) == 0 ) {
                float_raise( float_flag_invalid );
                return 0xFFC00000;
            }
            float_raise( float_flag_divbyzero );
            return packFloat32( zSign, 0xFF, 0 );
        }
        normalizeFloat32Subnormal( bSig, &bExp, &bSig );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return packFloat32( zSign, 0, 0 );
        normalizeFloat32Subnormal( aSig, &aExp, &aSig );
    }
    zExp = aExp - bExp + 0x7D;
    aSig = ( aSig | 0x00800000 )<<7;
    bSig = ( bSig | 0x00800000 )<<8;
    if ( bSig <= ( aSig + aSig ) ) {
        aSig >>= 1;
        ++zExp;
    }
    zSig = ( ( (bits64) aSig )<<32 ) / bSig;
    if ( ( zSig & 0x3F ) == 0 ) {
        zSig |= ( (bits64) bSig * zSig != ( (bits64) aSig )<<32 );
    }
    return roundAndPackFloat32( zSign, zExp, zSig );

}







float32 float32_rem( float32 a, float32 b )
{
    flag aSign, bSign, zSign;
    int16 aExp, bExp, expDiff;
    bits32 aSig, bSig;
    bits32 q;
    bits64 aSig64, bSig64, q64;
    bits32 alternateASig;
    sbits32 sigMean;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    aSign = extractFloat32Sign( a );
    bSig = extractFloat32Frac( b );
    bExp = extractFloat32Exp( b );
    bSign = extractFloat32Sign( b );
    if ( aExp == 0xFF ) {
        if ( aSig || ( ( bExp == 0xFF ) && bSig ) ) {
            return propagateFloat32NaN( a, b );
        }
        float_raise( float_flag_invalid );
        return 0xFFC00000;
    }
    if ( bExp == 0xFF ) {
        if ( bSig ) return propagateFloat32NaN( a, b );
        return a;
    }
    if ( bExp == 0 ) {
        if ( bSig == 0 ) {
            float_raise( float_flag_invalid );
            return 0xFFC00000;
        }
        normalizeFloat32Subnormal( bSig, &bExp, &bSig );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return a;
        normalizeFloat32Subnormal( aSig, &aExp, &aSig );
    }
    expDiff = aExp - bExp;
    aSig |= 0x00800000;
    bSig |= 0x00800000;
    if ( expDiff < 32 ) {
        aSig <<= 8;
        bSig <<= 8;
        if ( expDiff < 0 ) {
            if ( expDiff < -1 ) return a;
            aSig >>= 1;
        }
        q = ( bSig <= aSig );
        if ( q ) aSig -= bSig;
        if ( 0 < expDiff ) {
            q = ( ( (bits64) aSig )<<32 ) / bSig;
            q >>= 32 - expDiff;
            bSig >>= 2;
            aSig = ( ( aSig>>1 )<<( expDiff - 1 ) ) - bSig * q;
        }
        else {
            aSig >>= 2;
            bSig >>= 2;
        }
    }
    else {
        if ( bSig <= aSig ) aSig -= bSig;
        aSig64 = ( (bits64) aSig )<<40;
        bSig64 = ( (bits64) bSig )<<40;
        expDiff -= 64;
        while ( 0 < expDiff ) {
            q64 = estimateDiv128To64( aSig64, 0, bSig64 );
            q64 = ( 2 < q64 ) ? q64 - 2 : 0;
            aSig64 = - ( ( bSig * q64 )<<38 );
            expDiff -= 62;
        }
        expDiff += 64;
        q64 = estimateDiv128To64( aSig64, 0, bSig64 );
        q64 = ( 2 < q64 ) ? q64 - 2 : 0;
        q = q64>>( 64 - expDiff );
        bSig <<= 6;
        aSig = ( ( aSig64>>33 )<<( expDiff - 1 ) ) - bSig * q;
    }
    do {
        alternateASig = aSig;
        ++q;
        aSig -= bSig;
    } while ( 0 <= (sbits32) aSig );
    sigMean = aSig + alternateASig;
    if ( ( sigMean < 0 ) || ( ( sigMean == 0 ) && ( q & 1 ) ) ) {
        aSig = alternateASig;
    }
    zSign = ( (sbits32) aSig < 0 );
    if ( zSign ) aSig = - aSig;
    return normalizeRoundAndPackFloat32( aSign ^ zSign, bExp, aSig );

}







float32 float32_sqrt( float32 a )
{
    flag aSign;
    int16 aExp, zExp;
    bits32 aSig, zSig;
    bits64 rem, term;

    aSig = extractFloat32Frac( a );
    aExp = extractFloat32Exp( a );
    aSign = extractFloat32Sign( a );
    if ( aExp == 0xFF ) {
        if ( aSig ) return propagateFloat32NaN( a, 0 );
        if ( ! aSign ) return a;
        float_raise( float_flag_invalid );
        return 0xFFC00000;
    }
    if ( aSign ) {
        if ( ( aExp | aSig ) == 0 ) return a;
        float_raise( float_flag_invalid );
        return 0xFFC00000;
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return 0;
        normalizeFloat32Subnormal( aSig, &aExp, &aSig );
    }
    zExp = ( ( aExp - 0x7F )>>1 ) + 0x7E;
    aSig = ( aSig | 0x00800000 )<<8;
    zSig = estimateSqrt32( aExp, aSig ) + 2;
    if ( ( zSig & 0x7F ) <= 5 ) {
        if ( zSig < 2 ) {
            zSig = 0x7FFFFFFF;
            goto roundAndPack;
        }
        aSig >>= aExp & 1;
        term = ( (bits64) zSig ) * zSig;
        rem = ( ( (bits64) aSig )<<32 ) - term;
        while ( (sbits64) rem < 0 ) {
            --zSig;
            rem += ( ( (bits64) zSig )<<1 ) | 1;
        }
        zSig |= ( rem != 0 );
    }
    shift32RightJamming( zSig, 1, &zSig );
 roundAndPack:
    return roundAndPackFloat32( 0, zExp, zSig );

}







flag float32_eq( float32 a, float32 b )
{

    if ( ( ( extractFloat32Exp( a ) == 0xFF ) && extractFloat32Frac( a ) )
         || ( ( extractFloat32Exp( b ) == 0xFF ) && extractFloat32Frac( b ) )
       ) {
        if ( float32_is_signaling_nan( a ) || float32_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    return ( a == b ) || ( (bits32) ( ( a | b )<<1 ) == 0 );

}
# 2043 "../softfloat.c"
flag float32_le( float32 a, float32 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloat32Exp( a ) == 0xFF ) && extractFloat32Frac( a ) )
         || ( ( extractFloat32Exp( b ) == 0xFF ) && extractFloat32Frac( b ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    aSign = extractFloat32Sign( a );
    bSign = extractFloat32Sign( b );
    if ( aSign != bSign ) return aSign || ( (bits32) ( ( a | b )<<1 ) == 0 );
    return ( a == b ) || ( aSign ^ ( a < b ) );

}







flag float32_lt( float32 a, float32 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloat32Exp( a ) == 0xFF ) && extractFloat32Frac( a ) )
         || ( ( extractFloat32Exp( b ) == 0xFF ) && extractFloat32Frac( b ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    aSign = extractFloat32Sign( a );
    bSign = extractFloat32Sign( b );
    if ( aSign != bSign ) return aSign && ( (bits32) ( ( a | b )<<1 ) != 0 );
    return ( a != b ) && ( aSign ^ ( a < b ) );

}
# 2090 "../softfloat.c"
flag float32_eq_signaling( float32 a, float32 b )
{

    if ( ( ( extractFloat32Exp( a ) == 0xFF ) && extractFloat32Frac( a ) )
         || ( ( extractFloat32Exp( b ) == 0xFF ) && extractFloat32Frac( b ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    return ( a == b ) || ( (bits32) ( ( a | b )<<1 ) == 0 );

}
# 2110 "../softfloat.c"
flag float32_le_quiet( float32 a, float32 b )
{
    flag aSign, bSign;
    int16 aExp, bExp;

    if ( ( ( extractFloat32Exp( a ) == 0xFF ) && extractFloat32Frac( a ) )
         || ( ( extractFloat32Exp( b ) == 0xFF ) && extractFloat32Frac( b ) )
       ) {
        if ( float32_is_signaling_nan( a ) || float32_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    aSign = extractFloat32Sign( a );
    bSign = extractFloat32Sign( b );
    if ( aSign != bSign ) return aSign || ( (bits32) ( ( a | b )<<1 ) == 0 );
    return ( a == b ) || ( aSign ^ ( a < b ) );

}
# 2137 "../softfloat.c"
flag float32_lt_quiet( float32 a, float32 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloat32Exp( a ) == 0xFF ) && extractFloat32Frac( a ) )
         || ( ( extractFloat32Exp( b ) == 0xFF ) && extractFloat32Frac( b ) )
       ) {
        if ( float32_is_signaling_nan( a ) || float32_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    aSign = extractFloat32Sign( a );
    bSign = extractFloat32Sign( b );
    if ( aSign != bSign ) return aSign && ( (bits32) ( ( a | b )<<1 ) != 0 );
    return ( a != b ) && ( aSign ^ ( a < b ) );

}
# 2166 "../softfloat.c"
int32 float64_to_int32( float64 a )
{
    flag aSign;
    int16 aExp, shiftCount;
    bits64 aSig;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    aSign = extractFloat64Sign( a );
    if ( ( aExp == 0x7FF ) && aSig ) aSign = 0;
    if ( aExp ) aSig |= 0x0010000000000000LL;
    shiftCount = 0x42C - aExp;
    if ( 0 < shiftCount ) shift64RightJamming( aSig, shiftCount, &aSig );
    return roundAndPackInt32( aSign, aSig );

}
# 2193 "../softfloat.c"
int32 float64_to_int32_round_to_zero( float64 a )
{
    flag aSign;
    int16 aExp, shiftCount;
    bits64 aSig, savedASig;
    int32 z;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    aSign = extractFloat64Sign( a );
    if ( 0x41E < aExp ) {
        if ( ( aExp == 0x7FF ) && aSig ) aSign = 0;
        goto invalid;
    }
    else if ( aExp < 0x3FF ) {
        if ( aExp || aSig ) float_exception_flags |= float_flag_inexact;
        return 0;
    }
    aSig |= 0x0010000000000000LL;
    shiftCount = 0x433 - aExp;
    savedASig = aSig;
    aSig >>= shiftCount;
    z = aSig;
    if ( aSign ) z = - z;
    if ( ( z < 0 ) ^ aSign ) {
 invalid:
        float_raise( float_flag_invalid );
        return aSign ? (sbits32) 0x80000000 : 0x7FFFFFFF;
    }
    if ( ( aSig<<shiftCount ) != savedASig ) {
        float_exception_flags |= float_flag_inexact;
    }
    return z;

}
# 2239 "../softfloat.c"
int64 float64_to_int64( float64 a )
{
    flag aSign;
    int16 aExp, shiftCount;
    bits64 aSig, aSigExtra;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    aSign = extractFloat64Sign( a );
    if ( aExp ) aSig |= 0x0010000000000000LL;
    shiftCount = 0x433 - aExp;
    if ( shiftCount <= 0 ) {
        if ( 0x43E < aExp ) {
            float_raise( float_flag_invalid );
            if ( ! aSign
                 || ( ( aExp == 0x7FF )
                      && ( aSig != 0x0010000000000000LL ) )
               ) {
                return 0x7FFFFFFFFFFFFFFFLL;
            }
            return (sbits64) 0x8000000000000000LL;
        }
        aSigExtra = 0;
        aSig <<= - shiftCount;
    }
    else {
        shift64ExtraRightJamming( aSig, 0, shiftCount, &aSig, &aSigExtra );
    }
    return roundAndPackInt64( aSign, aSig, aSigExtra );

}
# 2281 "../softfloat.c"
int64 float64_to_int64_round_to_zero( float64 a )
{
    flag aSign;
    int16 aExp, shiftCount;
    bits64 aSig;
    int64 z;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    aSign = extractFloat64Sign( a );
    if ( aExp ) aSig |= 0x0010000000000000LL;
    shiftCount = aExp - 0x433;
    if ( 0 <= shiftCount ) {
        if ( 0x43E <= aExp ) {
            if ( a != 0xC3E0000000000000LL ) {
                float_raise( float_flag_invalid );
                if ( ! aSign
                     || ( ( aExp == 0x7FF )
                          && ( aSig != 0x0010000000000000LL ) )
                   ) {
                    return 0x7FFFFFFFFFFFFFFFLL;
                }
            }
            return (sbits64) 0x8000000000000000LL;
        }
        z = aSig<<shiftCount;
    }
    else {
        if ( aExp < 0x3FE ) {
            if ( aExp | aSig ) float_exception_flags |= float_flag_inexact;
            return 0;
        }
        z = aSig>>( - shiftCount );
        if ( (bits64) ( aSig<<( shiftCount & 63 ) ) ) {
            float_exception_flags |= float_flag_inexact;
        }
    }
    if ( aSign ) z = - z;
    return z;

}
# 2330 "../softfloat.c"
float32 float64_to_float32( float64 a )
{
    flag aSign;
    int16 aExp;
    bits64 aSig;
    bits32 zSig;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    aSign = extractFloat64Sign( a );
    if ( aExp == 0x7FF ) {
        if ( aSig ) return commonNaNToFloat32( float64ToCommonNaN( a ) );
        return packFloat32( aSign, 0xFF, 0 );
    }
    shift64RightJamming( aSig, 22, &aSig );
    zSig = aSig;
    if ( aExp || zSig ) {
        zSig |= 0x40000000;
        aExp -= 0x381;
    }
    return roundAndPackFloat32( aSign, aExp, zSig );

}
# 2363 "../softfloat.c"
floatx80 float64_to_floatx80( float64 a )
{
    flag aSign;
    int16 aExp;
    bits64 aSig;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    aSign = extractFloat64Sign( a );
    if ( aExp == 0x7FF ) {
        if ( aSig ) return commonNaNToFloatx80( float64ToCommonNaN( a ) );
        return packFloatx80( aSign, 0x7FFF, 0x8000000000000000LL );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return packFloatx80( aSign, 0, 0 );
        normalizeFloat64Subnormal( aSig, &aExp, &aSig );
    }
    return
        packFloatx80(
            aSign, aExp + 0x3C00, ( aSig | 0x0010000000000000LL )<<11 );

}
# 2397 "../softfloat.c"
float128 float64_to_float128( float64 a )
{
    flag aSign;
    int16 aExp;
    bits64 aSig, zSig0, zSig1;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    aSign = extractFloat64Sign( a );
    if ( aExp == 0x7FF ) {
        if ( aSig ) return commonNaNToFloat128( float64ToCommonNaN( a ) );
        return packFloat128( aSign, 0x7FFF, 0, 0 );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return packFloat128( aSign, 0, 0, 0 );
        normalizeFloat64Subnormal( aSig, &aExp, &aSig );
        --aExp;
    }
    shift128Right( aSig, 0, 4, &zSig0, &zSig1 );
    return packFloat128( aSign, aExp + 0x3C00, zSig0, zSig1 );

}
# 2429 "../softfloat.c"
float64 float64_round_to_int( float64 a )
{
    flag aSign;
    int16 aExp;
    bits64 lastBitMask, roundBitsMask;
    int8 roundingMode;
    float64 z;

    aExp = extractFloat64Exp( a );
    if ( 0x433 <= aExp ) {
        if ( ( aExp == 0x7FF ) && extractFloat64Frac( a ) ) {
            return propagateFloat64NaN( a, a );
        }
        return a;
    }
    if ( aExp < 0x3FF ) {
        if ( (bits64) ( a<<1 ) == 0 ) return a;
        float_exception_flags |= float_flag_inexact;
        aSign = extractFloat64Sign( a );
        switch ( float_rounding_mode ) {
         case float_round_nearest_even:
            if ( ( aExp == 0x3FE ) && extractFloat64Frac( a ) ) {
                return packFloat64( aSign, 0x3FF, 0 );
            }
            break;
         case float_round_down:
            return aSign ? 0xBFF0000000000000LL : 0;
         case float_round_up:
            return
            aSign ? 0x8000000000000000LL : 0x3FF0000000000000LL;
        }
        return packFloat64( aSign, 0, 0 );
    }
    lastBitMask = 1;
    lastBitMask <<= 0x433 - aExp;
    roundBitsMask = lastBitMask - 1;
    z = a;
    roundingMode = float_rounding_mode;
    if ( roundingMode == float_round_nearest_even ) {
        z += lastBitMask>>1;
        if ( ( z & roundBitsMask ) == 0 ) z &= ~ lastBitMask;
    }
    else if ( roundingMode != float_round_to_zero ) {
        if ( extractFloat64Sign( z ) ^ ( roundingMode == float_round_up ) ) {
            z += roundBitsMask;
        }
    }
    z &= ~ roundBitsMask;
    if ( z != a ) float_exception_flags |= float_flag_inexact;
    return z;

}
# 2490 "../softfloat.c"
static float64 addFloat64Sigs( float64 a, float64 b, flag zSign )
{
    int16 aExp, bExp, zExp;
    bits64 aSig, bSig, zSig;
    int16 expDiff;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    bSig = extractFloat64Frac( b );
    bExp = extractFloat64Exp( b );
    expDiff = aExp - bExp;
    aSig <<= 9;
    bSig <<= 9;
    if ( 0 < expDiff ) {
        if ( aExp == 0x7FF ) {
            if ( aSig ) return propagateFloat64NaN( a, b );
            return a;
        }
        if ( bExp == 0 ) {
            --expDiff;
        }
        else {
            bSig |= 0x2000000000000000LL;
        }
        shift64RightJamming( bSig, expDiff, &bSig );
        zExp = aExp;
    }
    else if ( expDiff < 0 ) {
        if ( bExp == 0x7FF ) {
            if ( bSig ) return propagateFloat64NaN( a, b );
            return packFloat64( zSign, 0x7FF, 0 );
        }
        if ( aExp == 0 ) {
            ++expDiff;
        }
        else {
            aSig |= 0x2000000000000000LL;
        }
        shift64RightJamming( aSig, - expDiff, &aSig );
        zExp = bExp;
    }
    else {
        if ( aExp == 0x7FF ) {
            if ( aSig | bSig ) return propagateFloat64NaN( a, b );
            return a;
        }
        if ( aExp == 0 ) return packFloat64( zSign, 0, ( aSig + bSig )>>9 );
        zSig = 0x4000000000000000LL + aSig + bSig;
        zExp = aExp;
        goto roundAndPack;
    }
    aSig |= 0x2000000000000000LL;
    zSig = ( aSig + bSig )<<1;
    --zExp;
    if ( (sbits64) zSig < 0 ) {
        zSig = aSig + bSig;
        ++zExp;
    }
 roundAndPack:
    return roundAndPackFloat64( zSign, zExp, zSig );

}
# 2561 "../softfloat.c"
static float64 subFloat64Sigs( float64 a, float64 b, flag zSign )
{
    int16 aExp, bExp, zExp;
    bits64 aSig, bSig, zSig;
    int16 expDiff;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    bSig = extractFloat64Frac( b );
    bExp = extractFloat64Exp( b );
    expDiff = aExp - bExp;
    aSig <<= 10;
    bSig <<= 10;
    if ( 0 < expDiff ) goto aExpBigger;
    if ( expDiff < 0 ) goto bExpBigger;
    if ( aExp == 0x7FF ) {
        if ( aSig | bSig ) return propagateFloat64NaN( a, b );
        float_raise( float_flag_invalid );
        return 0xFFF8000000000000LL;
    }
    if ( aExp == 0 ) {
        aExp = 1;
        bExp = 1;
    }
    if ( bSig < aSig ) goto aBigger;
    if ( aSig < bSig ) goto bBigger;
    return packFloat64( float_rounding_mode == float_round_down, 0, 0 );
 bExpBigger:
    if ( bExp == 0x7FF ) {
        if ( bSig ) return propagateFloat64NaN( a, b );
        return packFloat64( zSign ^ 1, 0x7FF, 0 );
    }
    if ( aExp == 0 ) {
        ++expDiff;
    }
    else {
        aSig |= 0x4000000000000000LL;
    }
    shift64RightJamming( aSig, - expDiff, &aSig );
    bSig |= 0x4000000000000000LL;
 bBigger:
    zSig = bSig - aSig;
    zExp = bExp;
    zSign ^= 1;
    goto normalizeRoundAndPack;
 aExpBigger:
    if ( aExp == 0x7FF ) {
        if ( aSig ) return propagateFloat64NaN( a, b );
        return a;
    }
    if ( bExp == 0 ) {
        --expDiff;
    }
    else {
        bSig |= 0x4000000000000000LL;
    }
    shift64RightJamming( bSig, expDiff, &bSig );
    aSig |= 0x4000000000000000LL;
 aBigger:
    zSig = aSig - bSig;
    zExp = aExp;
 normalizeRoundAndPack:
    --zExp;
    return normalizeRoundAndPackFloat64( zSign, zExp, zSig );

}







float64 float64_add( float64 a, float64 b )
{
    flag aSign, bSign;

    aSign = extractFloat64Sign( a );
    bSign = extractFloat64Sign( b );
    if ( aSign == bSign ) {
        return addFloat64Sigs( a, b, aSign );
    }
    else {
        return subFloat64Sigs( a, b, aSign );
    }

}







float64 float64_sub( float64 a, float64 b )
{
    flag aSign, bSign;

    aSign = extractFloat64Sign( a );
    bSign = extractFloat64Sign( b );
    if ( aSign == bSign ) {
        return subFloat64Sigs( a, b, aSign );
    }
    else {
        return addFloat64Sigs( a, b, aSign );
    }

}







float64 float64_mul( float64 a, float64 b )
{
    flag aSign, bSign, zSign;
    int16 aExp, bExp, zExp;
    bits64 aSig, bSig, zSig0, zSig1;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    aSign = extractFloat64Sign( a );
    bSig = extractFloat64Frac( b );
    bExp = extractFloat64Exp( b );
    bSign = extractFloat64Sign( b );
    zSign = aSign ^ bSign;
    if ( aExp == 0x7FF ) {
        if ( aSig || ( ( bExp == 0x7FF ) && bSig ) ) {
            return propagateFloat64NaN( a, b );
        }
        if ( ( bExp | bSig ) == 0 ) {
            float_raise( float_flag_invalid );
            return 0xFFF8000000000000LL;
        }
        return packFloat64( zSign, 0x7FF, 0 );
    }
    if ( bExp == 0x7FF ) {
        if ( bSig ) return propagateFloat64NaN( a, b );
        if ( ( aExp | aSig ) == 0 ) {
            float_raise( float_flag_invalid );
            return 0xFFF8000000000000LL;
        }
        return packFloat64( zSign, 0x7FF, 0 );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return packFloat64( zSign, 0, 0 );
        normalizeFloat64Subnormal( aSig, &aExp, &aSig );
    }
    if ( bExp == 0 ) {
        if ( bSig == 0 ) return packFloat64( zSign, 0, 0 );
        normalizeFloat64Subnormal( bSig, &bExp, &bSig );
    }
    zExp = aExp + bExp - 0x3FF;
    aSig = ( aSig | 0x0010000000000000LL )<<10;
    bSig = ( bSig | 0x0010000000000000LL )<<11;
    mul64To128( aSig, bSig, &zSig0, &zSig1 );
    zSig0 |= ( zSig1 != 0 );
    if ( 0 <= (sbits64) ( zSig0<<1 ) ) {
        zSig0 <<= 1;
        --zExp;
    }
    return roundAndPackFloat64( zSign, zExp, zSig0 );

}







float64 float64_div( float64 a, float64 b )
{
    flag aSign, bSign, zSign;
    int16 aExp, bExp, zExp;
    bits64 aSig, bSig, zSig;
    bits64 rem0, rem1;
    bits64 term0, term1;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    aSign = extractFloat64Sign( a );
    bSig = extractFloat64Frac( b );
    bExp = extractFloat64Exp( b );
    bSign = extractFloat64Sign( b );
    zSign = aSign ^ bSign;
    if ( aExp == 0x7FF ) {
        if ( aSig ) return propagateFloat64NaN( a, b );
        if ( bExp == 0x7FF ) {
            if ( bSig ) return propagateFloat64NaN( a, b );
            float_raise( float_flag_invalid );
            return 0xFFF8000000000000LL;
        }
        return packFloat64( zSign, 0x7FF, 0 );
    }
    if ( bExp == 0x7FF ) {
        if ( bSig ) return propagateFloat64NaN( a, b );
        return packFloat64( zSign, 0, 0 );
    }
    if ( bExp == 0 ) {
        if ( bSig == 0 ) {
            if ( ( aExp | aSig ) == 0 ) {
                float_raise( float_flag_invalid );
                return 0xFFF8000000000000LL;
            }
            float_raise( float_flag_divbyzero );
            return packFloat64( zSign, 0x7FF, 0 );
        }
        normalizeFloat64Subnormal( bSig, &bExp, &bSig );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return packFloat64( zSign, 0, 0 );
        normalizeFloat64Subnormal( aSig, &aExp, &aSig );
    }
    zExp = aExp - bExp + 0x3FD;
    aSig = ( aSig | 0x0010000000000000LL )<<10;
    bSig = ( bSig | 0x0010000000000000LL )<<11;
    if ( bSig <= ( aSig + aSig ) ) {
        aSig >>= 1;
        ++zExp;
    }
    zSig = estimateDiv128To64( aSig, 0, bSig );
    if ( ( zSig & 0x1FF ) <= 2 ) {
        mul64To128( bSig, zSig, &term0, &term1 );
        sub128( aSig, 0, term0, term1, &rem0, &rem1 );
        while ( (sbits64) rem0 < 0 ) {
            --zSig;
            add128( rem0, rem1, 0, bSig, &rem0, &rem1 );
        }
        zSig |= ( rem1 != 0 );
    }
    return roundAndPackFloat64( zSign, zExp, zSig );

}







float64 float64_rem( float64 a, float64 b )
{
    flag aSign, bSign, zSign;
    int16 aExp, bExp, expDiff;
    bits64 aSig, bSig;
    bits64 q, alternateASig;
    sbits64 sigMean;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    aSign = extractFloat64Sign( a );
    bSig = extractFloat64Frac( b );
    bExp = extractFloat64Exp( b );
    bSign = extractFloat64Sign( b );
    if ( aExp == 0x7FF ) {
        if ( aSig || ( ( bExp == 0x7FF ) && bSig ) ) {
            return propagateFloat64NaN( a, b );
        }
        float_raise( float_flag_invalid );
        return 0xFFF8000000000000LL;
    }
    if ( bExp == 0x7FF ) {
        if ( bSig ) return propagateFloat64NaN( a, b );
        return a;
    }
    if ( bExp == 0 ) {
        if ( bSig == 0 ) {
            float_raise( float_flag_invalid );
            return 0xFFF8000000000000LL;
        }
        normalizeFloat64Subnormal( bSig, &bExp, &bSig );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return a;
        normalizeFloat64Subnormal( aSig, &aExp, &aSig );
    }
    expDiff = aExp - bExp;
    aSig = ( aSig | 0x0010000000000000LL )<<11;
    bSig = ( bSig | 0x0010000000000000LL )<<11;
    if ( expDiff < 0 ) {
        if ( expDiff < -1 ) return a;
        aSig >>= 1;
    }
    q = ( bSig <= aSig );
    if ( q ) aSig -= bSig;
    expDiff -= 64;
    while ( 0 < expDiff ) {
        q = estimateDiv128To64( aSig, 0, bSig );
        q = ( 2 < q ) ? q - 2 : 0;
        aSig = - ( ( bSig>>2 ) * q );
        expDiff -= 62;
    }
    expDiff += 64;
    if ( 0 < expDiff ) {
        q = estimateDiv128To64( aSig, 0, bSig );
        q = ( 2 < q ) ? q - 2 : 0;
        q >>= 64 - expDiff;
        bSig >>= 2;
        aSig = ( ( aSig>>1 )<<( expDiff - 1 ) ) - bSig * q;
    }
    else {
        aSig >>= 2;
        bSig >>= 2;
    }
    do {
        alternateASig = aSig;
        ++q;
        aSig -= bSig;
    } while ( 0 <= (sbits64) aSig );
    sigMean = aSig + alternateASig;
    if ( ( sigMean < 0 ) || ( ( sigMean == 0 ) && ( q & 1 ) ) ) {
        aSig = alternateASig;
    }
    zSign = ( (sbits64) aSig < 0 );
    if ( zSign ) aSig = - aSig;
    return normalizeRoundAndPackFloat64( aSign ^ zSign, bExp, aSig );

}







float64 float64_sqrt( float64 a )
{
    flag aSign;
    int16 aExp, zExp;
    bits64 aSig, zSig, doubleZSig;
    bits64 rem0, rem1, term0, term1;
    float64 z;

    aSig = extractFloat64Frac( a );
    aExp = extractFloat64Exp( a );
    aSign = extractFloat64Sign( a );
    if ( aExp == 0x7FF ) {
        if ( aSig ) return propagateFloat64NaN( a, a );
        if ( ! aSign ) return a;
        float_raise( float_flag_invalid );
        return 0xFFF8000000000000LL;
    }
    if ( aSign ) {
        if ( ( aExp | aSig ) == 0 ) return a;
        float_raise( float_flag_invalid );
        return 0xFFF8000000000000LL;
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return 0;
        normalizeFloat64Subnormal( aSig, &aExp, &aSig );
    }
    zExp = ( ( aExp - 0x3FF )>>1 ) + 0x3FE;
    aSig |= 0x0010000000000000LL;
    zSig = estimateSqrt32( aExp, aSig>>21 );
    aSig <<= 9 - ( aExp & 1 );
    zSig = estimateDiv128To64( aSig, 0, zSig<<32 ) + ( zSig<<30 );
    if ( ( zSig & 0x1FF ) <= 5 ) {
        doubleZSig = zSig<<1;
        mul64To128( zSig, zSig, &term0, &term1 );
        sub128( aSig, 0, term0, term1, &rem0, &rem1 );
        while ( (sbits64) rem0 < 0 ) {
            --zSig;
            doubleZSig -= 2;
            add128( rem0, rem1, zSig>>63, doubleZSig | 1, &rem0, &rem1 );
        }
        zSig |= ( ( rem0 | rem1 ) != 0 );
    }
    return roundAndPackFloat64( 0, zExp, zSig );

}







flag float64_eq( float64 a, float64 b )
{

    if ( ( ( extractFloat64Exp( a ) == 0x7FF ) && extractFloat64Frac( a ) )
         || ( ( extractFloat64Exp( b ) == 0x7FF ) && extractFloat64Frac( b ) )
       ) {
        if ( float64_is_signaling_nan( a ) || float64_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    return ( a == b ) || ( (bits64) ( ( a | b )<<1 ) == 0 );

}
# 2963 "../softfloat.c"
flag float64_le( float64 a, float64 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloat64Exp( a ) == 0x7FF ) && extractFloat64Frac( a ) )
         || ( ( extractFloat64Exp( b ) == 0x7FF ) && extractFloat64Frac( b ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    aSign = extractFloat64Sign( a );
    bSign = extractFloat64Sign( b );
    if ( aSign != bSign ) return aSign || ( (bits64) ( ( a | b )<<1 ) == 0 );
    return ( a == b ) || ( aSign ^ ( a < b ) );

}







flag float64_lt( float64 a, float64 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloat64Exp( a ) == 0x7FF ) && extractFloat64Frac( a ) )
         || ( ( extractFloat64Exp( b ) == 0x7FF ) && extractFloat64Frac( b ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    aSign = extractFloat64Sign( a );
    bSign = extractFloat64Sign( b );
    if ( aSign != bSign ) return aSign && ( (bits64) ( ( a | b )<<1 ) != 0 );
    return ( a != b ) && ( aSign ^ ( a < b ) );

}
# 3010 "../softfloat.c"
flag float64_eq_signaling( float64 a, float64 b )
{

    if ( ( ( extractFloat64Exp( a ) == 0x7FF ) && extractFloat64Frac( a ) )
         || ( ( extractFloat64Exp( b ) == 0x7FF ) && extractFloat64Frac( b ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    return ( a == b ) || ( (bits64) ( ( a | b )<<1 ) == 0 );

}
# 3030 "../softfloat.c"
flag float64_le_quiet( float64 a, float64 b )
{
    flag aSign, bSign;
    int16 aExp, bExp;

    if ( ( ( extractFloat64Exp( a ) == 0x7FF ) && extractFloat64Frac( a ) )
         || ( ( extractFloat64Exp( b ) == 0x7FF ) && extractFloat64Frac( b ) )
       ) {
        if ( float64_is_signaling_nan( a ) || float64_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    aSign = extractFloat64Sign( a );
    bSign = extractFloat64Sign( b );
    if ( aSign != bSign ) return aSign || ( (bits64) ( ( a | b )<<1 ) == 0 );
    return ( a == b ) || ( aSign ^ ( a < b ) );

}
# 3057 "../softfloat.c"
flag float64_lt_quiet( float64 a, float64 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloat64Exp( a ) == 0x7FF ) && extractFloat64Frac( a ) )
         || ( ( extractFloat64Exp( b ) == 0x7FF ) && extractFloat64Frac( b ) )
       ) {
        if ( float64_is_signaling_nan( a ) || float64_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    aSign = extractFloat64Sign( a );
    bSign = extractFloat64Sign( b );
    if ( aSign != bSign ) return aSign && ( (bits64) ( ( a | b )<<1 ) != 0 );
    return ( a != b ) && ( aSign ^ ( a < b ) );

}
# 3088 "../softfloat.c"
int32 floatx80_to_int32( floatx80 a )
{
    flag aSign;
    int32 aExp, shiftCount;
    bits64 aSig;

    aSig = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    aSign = extractFloatx80Sign( a );
    if ( ( aExp == 0x7FFF ) && (bits64) ( aSig<<1 ) ) aSign = 0;
    shiftCount = 0x4037 - aExp;
    if ( shiftCount <= 0 ) shiftCount = 1;
    shift64RightJamming( aSig, shiftCount, &aSig );
    return roundAndPackInt32( aSign, aSig );

}
# 3115 "../softfloat.c"
int32 floatx80_to_int32_round_to_zero( floatx80 a )
{
    flag aSign;
    int32 aExp, shiftCount;
    bits64 aSig, savedASig;
    int32 z;

    aSig = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    aSign = extractFloatx80Sign( a );
    if ( 0x401E < aExp ) {
        if ( ( aExp == 0x7FFF ) && (bits64) ( aSig<<1 ) ) aSign = 0;
        goto invalid;
    }
    else if ( aExp < 0x3FFF ) {
        if ( aExp || aSig ) float_exception_flags |= float_flag_inexact;
        return 0;
    }
    shiftCount = 0x403E - aExp;
    savedASig = aSig;
    aSig >>= shiftCount;
    z = aSig;
    if ( aSign ) z = - z;
    if ( ( z < 0 ) ^ aSign ) {
 invalid:
        float_raise( float_flag_invalid );
        return aSign ? (sbits32) 0x80000000 : 0x7FFFFFFF;
    }
    if ( ( aSig<<shiftCount ) != savedASig ) {
        float_exception_flags |= float_flag_inexact;
    }
    return z;

}
# 3160 "../softfloat.c"
int64 floatx80_to_int64( floatx80 a )
{
    flag aSign;
    int32 aExp, shiftCount;
    bits64 aSig, aSigExtra;

    aSig = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    aSign = extractFloatx80Sign( a );
    shiftCount = 0x403E - aExp;
    if ( shiftCount <= 0 ) {
        if ( shiftCount ) {
            float_raise( float_flag_invalid );
            if ( ! aSign
                 || ( ( aExp == 0x7FFF )
                      && ( aSig != 0x8000000000000000LL ) )
               ) {
                return 0x7FFFFFFFFFFFFFFFLL;
            }
            return (sbits64) 0x8000000000000000LL;
        }
        aSigExtra = 0;
    }
    else {
        shift64ExtraRightJamming( aSig, 0, shiftCount, &aSig, &aSigExtra );
    }
    return roundAndPackInt64( aSign, aSig, aSigExtra );

}
# 3200 "../softfloat.c"
int64 floatx80_to_int64_round_to_zero( floatx80 a )
{
    flag aSign;
    int32 aExp, shiftCount;
    bits64 aSig;
    int64 z;

    aSig = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    aSign = extractFloatx80Sign( a );
    shiftCount = aExp - 0x403E;
    if ( 0 <= shiftCount ) {
        aSig &= 0x7FFFFFFFFFFFFFFFLL;
        if ( ( a.high != 0xC03E ) || aSig ) {
            float_raise( float_flag_invalid );
            if ( ! aSign || ( ( aExp == 0x7FFF ) && aSig ) ) {
                return 0x7FFFFFFFFFFFFFFFLL;
            }
        }
        return (sbits64) 0x8000000000000000LL;
    }
    else if ( aExp < 0x3FFF ) {
        if ( aExp | aSig ) float_exception_flags |= float_flag_inexact;
        return 0;
    }
    z = aSig>>( - shiftCount );
    if ( (bits64) ( aSig<<( shiftCount & 63 ) ) ) {
        float_exception_flags |= float_flag_inexact;
    }
    if ( aSign ) z = - z;
    return z;

}
# 3241 "../softfloat.c"
float32 floatx80_to_float32( floatx80 a )
{
    flag aSign;
    int32 aExp;
    bits64 aSig;

    aSig = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    aSign = extractFloatx80Sign( a );
    if ( aExp == 0x7FFF ) {
        if ( (bits64) ( aSig<<1 ) ) {
            return commonNaNToFloat32( floatx80ToCommonNaN( a ) );
        }
        return packFloat32( aSign, 0xFF, 0 );
    }
    shift64RightJamming( aSig, 33, &aSig );
    if ( aExp || aSig ) aExp -= 0x3F81;
    return roundAndPackFloat32( aSign, aExp, aSig );

}
# 3269 "../softfloat.c"
float64 floatx80_to_float64( floatx80 a )
{
    flag aSign;
    int32 aExp;
    bits64 aSig, zSig;

    aSig = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    aSign = extractFloatx80Sign( a );
    if ( aExp == 0x7FFF ) {
        if ( (bits64) ( aSig<<1 ) ) {
            return commonNaNToFloat64( floatx80ToCommonNaN( a ) );
        }
        return packFloat64( aSign, 0x7FF, 0 );
    }
    shift64RightJamming( aSig, 1, &zSig );
    if ( aExp || aSig ) aExp -= 0x3C01;
    return roundAndPackFloat64( aSign, aExp, zSig );

}
# 3299 "../softfloat.c"
float128 floatx80_to_float128( floatx80 a )
{
    flag aSign;
    int16 aExp;
    bits64 aSig, zSig0, zSig1;

    aSig = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    aSign = extractFloatx80Sign( a );
    if ( ( aExp == 0x7FFF ) && (bits64) ( aSig<<1 ) ) {
        return commonNaNToFloat128( floatx80ToCommonNaN( a ) );
    }
    shift128Right( aSig<<1, 0, 16, &zSig0, &zSig1 );
    return packFloat128( aSign, aExp, zSig0, zSig1 );

}
# 3325 "../softfloat.c"
floatx80 floatx80_round_to_int( floatx80 a )
{
    flag aSign;
    int32 aExp;
    bits64 lastBitMask, roundBitsMask;
    int8 roundingMode;
    floatx80 z;

    aExp = extractFloatx80Exp( a );
    if ( 0x403E <= aExp ) {
        if ( ( aExp == 0x7FFF ) && (bits64) ( extractFloatx80Frac( a )<<1 ) ) {
            return propagateFloatx80NaN( a, a );
        }
        return a;
    }
    if ( aExp < 0x3FFF ) {
        if ( ( aExp == 0 )
             && ( (bits64) ( extractFloatx80Frac( a )<<1 ) == 0 ) ) {
            return a;
        }
        float_exception_flags |= float_flag_inexact;
        aSign = extractFloatx80Sign( a );
        switch ( float_rounding_mode ) {
         case float_round_nearest_even:
            if ( ( aExp == 0x3FFE ) && (bits64) ( extractFloatx80Frac( a )<<1 )
               ) {
                return
                    packFloatx80( aSign, 0x3FFF, 0x8000000000000000LL );
            }
            break;
         case float_round_down:
            return
                  aSign ?
                      packFloatx80( 1, 0x3FFF, 0x8000000000000000LL )
                : packFloatx80( 0, 0, 0 );
         case float_round_up:
            return
                  aSign ? packFloatx80( 1, 0, 0 )
                : packFloatx80( 0, 0x3FFF, 0x8000000000000000LL );
        }
        return packFloatx80( aSign, 0, 0 );
    }
    lastBitMask = 1;
    lastBitMask <<= 0x403E - aExp;
    roundBitsMask = lastBitMask - 1;
    z = a;
    roundingMode = float_rounding_mode;
    if ( roundingMode == float_round_nearest_even ) {
        z.low += lastBitMask>>1;
        if ( ( z.low & roundBitsMask ) == 0 ) z.low &= ~ lastBitMask;
    }
    else if ( roundingMode != float_round_to_zero ) {
        if ( extractFloatx80Sign( z ) ^ ( roundingMode == float_round_up ) ) {
            z.low += roundBitsMask;
        }
    }
    z.low &= ~ roundBitsMask;
    if ( z.low == 0 ) {
        ++z.high;
        z.low = 0x8000000000000000LL;
    }
    if ( z.low != a.low ) float_exception_flags |= float_flag_inexact;
    return z;

}
# 3399 "../softfloat.c"
static floatx80 addFloatx80Sigs( floatx80 a, floatx80 b, flag zSign )
{
    int32 aExp, bExp, zExp;
    bits64 aSig, bSig, zSig0, zSig1;
    int32 expDiff;

    aSig = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    bSig = extractFloatx80Frac( b );
    bExp = extractFloatx80Exp( b );
    expDiff = aExp - bExp;
    if ( 0 < expDiff ) {
        if ( aExp == 0x7FFF ) {
            if ( (bits64) ( aSig<<1 ) ) return propagateFloatx80NaN( a, b );
            return a;
        }
        if ( bExp == 0 ) --expDiff;
        shift64ExtraRightJamming( bSig, 0, expDiff, &bSig, &zSig1 );
        zExp = aExp;
    }
    else if ( expDiff < 0 ) {
        if ( bExp == 0x7FFF ) {
            if ( (bits64) ( bSig<<1 ) ) return propagateFloatx80NaN( a, b );
            return packFloatx80( zSign, 0x7FFF, 0x8000000000000000LL );
        }
        if ( aExp == 0 ) ++expDiff;
        shift64ExtraRightJamming( aSig, 0, - expDiff, &aSig, &zSig1 );
        zExp = bExp;
    }
    else {
        if ( aExp == 0x7FFF ) {
            if ( (bits64) ( ( aSig | bSig )<<1 ) ) {
                return propagateFloatx80NaN( a, b );
            }
            return a;
        }
        zSig1 = 0;
        zSig0 = aSig + bSig;
        if ( aExp == 0 ) {
            normalizeFloatx80Subnormal( zSig0, &zExp, &zSig0 );
            goto roundAndPack;
        }
        zExp = aExp;
        goto shiftRight1;
    }
    zSig0 = aSig + bSig;
    if ( (sbits64) zSig0 < 0 ) goto roundAndPack;
 shiftRight1:
    shift64ExtraRightJamming( zSig0, zSig1, 1, &zSig0, &zSig1 );
    zSig0 |= 0x8000000000000000LL;
    ++zExp;
 roundAndPack:
    return
        roundAndPackFloatx80(
            floatx80_rounding_precision, zSign, zExp, zSig0, zSig1 );

}
# 3465 "../softfloat.c"
static floatx80 subFloatx80Sigs( floatx80 a, floatx80 b, flag zSign )
{
    int32 aExp, bExp, zExp;
    bits64 aSig, bSig, zSig0, zSig1;
    int32 expDiff;
    floatx80 z;

    aSig = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    bSig = extractFloatx80Frac( b );
    bExp = extractFloatx80Exp( b );
    expDiff = aExp - bExp;
    if ( 0 < expDiff ) goto aExpBigger;
    if ( expDiff < 0 ) goto bExpBigger;
    if ( aExp == 0x7FFF ) {
        if ( (bits64) ( ( aSig | bSig )<<1 ) ) {
            return propagateFloatx80NaN( a, b );
        }
        float_raise( float_flag_invalid );
        z.low = 0xC000000000000000LL;
        z.high = 0xFFFF;
        return z;
    }
    if ( aExp == 0 ) {
        aExp = 1;
        bExp = 1;
    }
    zSig1 = 0;
    if ( bSig < aSig ) goto aBigger;
    if ( aSig < bSig ) goto bBigger;
    return packFloatx80( float_rounding_mode == float_round_down, 0, 0 );
 bExpBigger:
    if ( bExp == 0x7FFF ) {
        if ( (bits64) ( bSig<<1 ) ) return propagateFloatx80NaN( a, b );
        return packFloatx80( zSign ^ 1, 0x7FFF, 0x8000000000000000LL );
    }
    if ( aExp == 0 ) ++expDiff;
    shift128RightJamming( aSig, 0, - expDiff, &aSig, &zSig1 );
 bBigger:
    sub128( bSig, 0, aSig, zSig1, &zSig0, &zSig1 );
    zExp = bExp;
    zSign ^= 1;
    goto normalizeRoundAndPack;
 aExpBigger:
    if ( aExp == 0x7FFF ) {
        if ( (bits64) ( aSig<<1 ) ) return propagateFloatx80NaN( a, b );
        return a;
    }
    if ( bExp == 0 ) --expDiff;
    shift128RightJamming( bSig, 0, expDiff, &bSig, &zSig1 );
 aBigger:
    sub128( aSig, 0, bSig, zSig1, &zSig0, &zSig1 );
    zExp = aExp;
 normalizeRoundAndPack:
    return
        normalizeRoundAndPackFloatx80(
            floatx80_rounding_precision, zSign, zExp, zSig0, zSig1 );

}







floatx80 floatx80_add( floatx80 a, floatx80 b )
{
    flag aSign, bSign;

    aSign = extractFloatx80Sign( a );
    bSign = extractFloatx80Sign( b );
    if ( aSign == bSign ) {
        return addFloatx80Sigs( a, b, aSign );
    }
    else {
        return subFloatx80Sigs( a, b, aSign );
    }

}







floatx80 floatx80_sub( floatx80 a, floatx80 b )
{
    flag aSign, bSign;

    aSign = extractFloatx80Sign( a );
    bSign = extractFloatx80Sign( b );
    if ( aSign == bSign ) {
        return subFloatx80Sigs( a, b, aSign );
    }
    else {
        return addFloatx80Sigs( a, b, aSign );
    }

}







floatx80 floatx80_mul( floatx80 a, floatx80 b )
{
    flag aSign, bSign, zSign;
    int32 aExp, bExp, zExp;
    bits64 aSig, bSig, zSig0, zSig1;
    floatx80 z;

    aSig = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    aSign = extractFloatx80Sign( a );
    bSig = extractFloatx80Frac( b );
    bExp = extractFloatx80Exp( b );
    bSign = extractFloatx80Sign( b );
    zSign = aSign ^ bSign;
    if ( aExp == 0x7FFF ) {
        if ( (bits64) ( aSig<<1 )
             || ( ( bExp == 0x7FFF ) && (bits64) ( bSig<<1 ) ) ) {
            return propagateFloatx80NaN( a, b );
        }
        if ( ( bExp | bSig ) == 0 ) goto invalid;
        return packFloatx80( zSign, 0x7FFF, 0x8000000000000000LL );
    }
    if ( bExp == 0x7FFF ) {
        if ( (bits64) ( bSig<<1 ) ) return propagateFloatx80NaN( a, b );
        if ( ( aExp | aSig ) == 0 ) {
 invalid:
            float_raise( float_flag_invalid );
            z.low = 0xC000000000000000LL;
            z.high = 0xFFFF;
            return z;
        }
        return packFloatx80( zSign, 0x7FFF, 0x8000000000000000LL );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return packFloatx80( zSign, 0, 0 );
        normalizeFloatx80Subnormal( aSig, &aExp, &aSig );
    }
    if ( bExp == 0 ) {
        if ( bSig == 0 ) return packFloatx80( zSign, 0, 0 );
        normalizeFloatx80Subnormal( bSig, &bExp, &bSig );
    }
    zExp = aExp + bExp - 0x3FFE;
    mul64To128( aSig, bSig, &zSig0, &zSig1 );
    if ( 0 < (sbits64) zSig0 ) {
        shortShift128Left( zSig0, zSig1, 1, &zSig0, &zSig1 );
        --zExp;
    }
    return
        roundAndPackFloatx80(
            floatx80_rounding_precision, zSign, zExp, zSig0, zSig1 );

}







floatx80 floatx80_div( floatx80 a, floatx80 b )
{
    flag aSign, bSign, zSign;
    int32 aExp, bExp, zExp;
    bits64 aSig, bSig, zSig0, zSig1;
    bits64 rem0, rem1, rem2, term0, term1, term2;
    floatx80 z;

    aSig = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    aSign = extractFloatx80Sign( a );
    bSig = extractFloatx80Frac( b );
    bExp = extractFloatx80Exp( b );
    bSign = extractFloatx80Sign( b );
    zSign = aSign ^ bSign;
    if ( aExp == 0x7FFF ) {
        if ( (bits64) ( aSig<<1 ) ) return propagateFloatx80NaN( a, b );
        if ( bExp == 0x7FFF ) {
            if ( (bits64) ( bSig<<1 ) ) return propagateFloatx80NaN( a, b );
            goto invalid;
        }
        return packFloatx80( zSign, 0x7FFF, 0x8000000000000000LL );
    }
    if ( bExp == 0x7FFF ) {
        if ( (bits64) ( bSig<<1 ) ) return propagateFloatx80NaN( a, b );
        return packFloatx80( zSign, 0, 0 );
    }
    if ( bExp == 0 ) {
        if ( bSig == 0 ) {
            if ( ( aExp | aSig ) == 0 ) {
 invalid:
                float_raise( float_flag_invalid );
                z.low = 0xC000000000000000LL;
                z.high = 0xFFFF;
                return z;
            }
            float_raise( float_flag_divbyzero );
            return packFloatx80( zSign, 0x7FFF, 0x8000000000000000LL );
        }
        normalizeFloatx80Subnormal( bSig, &bExp, &bSig );
    }
    if ( aExp == 0 ) {
        if ( aSig == 0 ) return packFloatx80( zSign, 0, 0 );
        normalizeFloatx80Subnormal( aSig, &aExp, &aSig );
    }
    zExp = aExp - bExp + 0x3FFE;
    rem1 = 0;
    if ( bSig <= aSig ) {
        shift128Right( aSig, 0, 1, &aSig, &rem1 );
        ++zExp;
    }
    zSig0 = estimateDiv128To64( aSig, rem1, bSig );
    mul64To128( bSig, zSig0, &term0, &term1 );
    sub128( aSig, rem1, term0, term1, &rem0, &rem1 );
    while ( (sbits64) rem0 < 0 ) {
        --zSig0;
        add128( rem0, rem1, 0, bSig, &rem0, &rem1 );
    }
    zSig1 = estimateDiv128To64( rem1, 0, bSig );
    if ( (bits64) ( zSig1<<1 ) <= 8 ) {
        mul64To128( bSig, zSig1, &term1, &term2 );
        sub128( rem1, 0, term1, term2, &rem1, &rem2 );
        while ( (sbits64) rem1 < 0 ) {
            --zSig1;
            add128( rem1, rem2, 0, bSig, &rem1, &rem2 );
        }
        zSig1 |= ( ( rem1 | rem2 ) != 0 );
    }
    return
        roundAndPackFloatx80(
            floatx80_rounding_precision, zSign, zExp, zSig0, zSig1 );

}







floatx80 floatx80_rem( floatx80 a, floatx80 b )
{
    flag aSign, bSign, zSign;
    int32 aExp, bExp, expDiff;
    bits64 aSig0, aSig1, bSig;
    bits64 q, term0, term1, alternateASig0, alternateASig1;
    floatx80 z;

    aSig0 = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    aSign = extractFloatx80Sign( a );
    bSig = extractFloatx80Frac( b );
    bExp = extractFloatx80Exp( b );
    bSign = extractFloatx80Sign( b );
    if ( aExp == 0x7FFF ) {
        if ( (bits64) ( aSig0<<1 )
             || ( ( bExp == 0x7FFF ) && (bits64) ( bSig<<1 ) ) ) {
            return propagateFloatx80NaN( a, b );
        }
        goto invalid;
    }
    if ( bExp == 0x7FFF ) {
        if ( (bits64) ( bSig<<1 ) ) return propagateFloatx80NaN( a, b );
        return a;
    }
    if ( bExp == 0 ) {
        if ( bSig == 0 ) {
 invalid:
            float_raise( float_flag_invalid );
            z.low = 0xC000000000000000LL;
            z.high = 0xFFFF;
            return z;
        }
        normalizeFloatx80Subnormal( bSig, &bExp, &bSig );
    }
    if ( aExp == 0 ) {
        if ( (bits64) ( aSig0<<1 ) == 0 ) return a;
        normalizeFloatx80Subnormal( aSig0, &aExp, &aSig0 );
    }
    bSig |= 0x8000000000000000LL;
    zSign = aSign;
    expDiff = aExp - bExp;
    aSig1 = 0;
    if ( expDiff < 0 ) {
        if ( expDiff < -1 ) return a;
        shift128Right( aSig0, 0, 1, &aSig0, &aSig1 );
        expDiff = 0;
    }
    q = ( bSig <= aSig0 );
    if ( q ) aSig0 -= bSig;
    expDiff -= 64;
    while ( 0 < expDiff ) {
        q = estimateDiv128To64( aSig0, aSig1, bSig );
        q = ( 2 < q ) ? q - 2 : 0;
        mul64To128( bSig, q, &term0, &term1 );
        sub128( aSig0, aSig1, term0, term1, &aSig0, &aSig1 );
        shortShift128Left( aSig0, aSig1, 62, &aSig0, &aSig1 );
        expDiff -= 62;
    }
    expDiff += 64;
    if ( 0 < expDiff ) {
        q = estimateDiv128To64( aSig0, aSig1, bSig );
        q = ( 2 < q ) ? q - 2 : 0;
        q >>= 64 - expDiff;
        mul64To128( bSig, q<<( 64 - expDiff ), &term0, &term1 );
        sub128( aSig0, aSig1, term0, term1, &aSig0, &aSig1 );
        shortShift128Left( 0, bSig, 64 - expDiff, &term0, &term1 );
        while ( le128( term0, term1, aSig0, aSig1 ) ) {
            ++q;
            sub128( aSig0, aSig1, term0, term1, &aSig0, &aSig1 );
        }
    }
    else {
        term1 = 0;
        term0 = bSig;
    }
    sub128( term0, term1, aSig0, aSig1, &alternateASig0, &alternateASig1 );
    if ( lt128( alternateASig0, alternateASig1, aSig0, aSig1 )
         || ( eq128( alternateASig0, alternateASig1, aSig0, aSig1 )
              && ( q & 1 ) )
       ) {
        aSig0 = alternateASig0;
        aSig1 = alternateASig1;
        zSign = ! zSign;
    }
    return
        normalizeRoundAndPackFloatx80(
            80, zSign, bExp + expDiff, aSig0, aSig1 );

}







floatx80 floatx80_sqrt( floatx80 a )
{
    flag aSign;
    int32 aExp, zExp;
    bits64 aSig0, aSig1, zSig0, zSig1, doubleZSig0;
    bits64 rem0, rem1, rem2, rem3, term0, term1, term2, term3;
    floatx80 z;

    aSig0 = extractFloatx80Frac( a );
    aExp = extractFloatx80Exp( a );
    aSign = extractFloatx80Sign( a );
    if ( aExp == 0x7FFF ) {
        if ( (bits64) ( aSig0<<1 ) ) return propagateFloatx80NaN( a, a );
        if ( ! aSign ) return a;
        goto invalid;
    }
    if ( aSign ) {
        if ( ( aExp | aSig0 ) == 0 ) return a;
 invalid:
        float_raise( float_flag_invalid );
        z.low = 0xC000000000000000LL;
        z.high = 0xFFFF;
        return z;
    }
    if ( aExp == 0 ) {
        if ( aSig0 == 0 ) return packFloatx80( 0, 0, 0 );
        normalizeFloatx80Subnormal( aSig0, &aExp, &aSig0 );
    }
    zExp = ( ( aExp - 0x3FFF )>>1 ) + 0x3FFF;
    zSig0 = estimateSqrt32( aExp, aSig0>>32 );
    shift128Right( aSig0, 0, 2 + ( aExp & 1 ), &aSig0, &aSig1 );
    zSig0 = estimateDiv128To64( aSig0, aSig1, zSig0<<32 ) + ( zSig0<<30 );
    doubleZSig0 = zSig0<<1;
    mul64To128( zSig0, zSig0, &term0, &term1 );
    sub128( aSig0, aSig1, term0, term1, &rem0, &rem1 );
    while ( (sbits64) rem0 < 0 ) {
        --zSig0;
        doubleZSig0 -= 2;
        add128( rem0, rem1, zSig0>>63, doubleZSig0 | 1, &rem0, &rem1 );
    }
    zSig1 = estimateDiv128To64( rem1, 0, doubleZSig0 );
    if ( ( zSig1 & 0x3FFFFFFFFFFFFFFFLL ) <= 5 ) {
        if ( zSig1 == 0 ) zSig1 = 1;
        mul64To128( doubleZSig0, zSig1, &term1, &term2 );
        sub128( rem1, 0, term1, term2, &rem1, &rem2 );
        mul64To128( zSig1, zSig1, &term2, &term3 );
        sub192( rem1, rem2, 0, 0, term2, term3, &rem1, &rem2, &rem3 );
        while ( (sbits64) rem1 < 0 ) {
            --zSig1;
            shortShift128Left( 0, zSig1, 1, &term2, &term3 );
            term3 |= 1;
            term2 |= doubleZSig0;
            add192( rem1, rem2, rem3, 0, term2, term3, &rem1, &rem2, &rem3 );
        }
        zSig1 |= ( ( rem1 | rem2 | rem3 ) != 0 );
    }
    shortShift128Left( 0, zSig1, 1, &zSig0, &zSig1 );
    zSig0 |= doubleZSig0;
    return
        roundAndPackFloatx80(
            floatx80_rounding_precision, 0, zExp, zSig0, zSig1 );

}
# 3880 "../softfloat.c"
flag floatx80_eq( floatx80 a, floatx80 b )
{

    if ( ( ( extractFloatx80Exp( a ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( a )<<1 ) )
         || ( ( extractFloatx80Exp( b ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( b )<<1 ) )
       ) {
        if ( floatx80_is_signaling_nan( a )
             || floatx80_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    return
           ( a.low == b.low )
        && ( ( a.high == b.high )
             || ( ( a.low == 0 )
                  && ( (bits16) ( ( a.high | b.high )<<1 ) == 0 ) )
           );

}
# 3910 "../softfloat.c"
flag floatx80_le( floatx80 a, floatx80 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloatx80Exp( a ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( a )<<1 ) )
         || ( ( extractFloatx80Exp( b ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( b )<<1 ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    aSign = extractFloatx80Sign( a );
    bSign = extractFloatx80Sign( b );
    if ( aSign != bSign ) {
        return
               aSign
            || ( ( ( (bits16) ( ( a.high | b.high )<<1 ) ) | a.low | b.low )
                 == 0 );
    }
    return
          aSign ? le128( b.high, b.low, a.high, a.low )
        : le128( a.high, a.low, b.high, b.low );

}
# 3943 "../softfloat.c"
flag floatx80_lt( floatx80 a, floatx80 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloatx80Exp( a ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( a )<<1 ) )
         || ( ( extractFloatx80Exp( b ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( b )<<1 ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    aSign = extractFloatx80Sign( a );
    bSign = extractFloatx80Sign( b );
    if ( aSign != bSign ) {
        return
               aSign
            && ( ( ( (bits16) ( ( a.high | b.high )<<1 ) ) | a.low | b.low )
                 != 0 );
    }
    return
          aSign ? lt128( b.high, b.low, a.high, a.low )
        : lt128( a.high, a.low, b.high, b.low );

}
# 3976 "../softfloat.c"
flag floatx80_eq_signaling( floatx80 a, floatx80 b )
{

    if ( ( ( extractFloatx80Exp( a ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( a )<<1 ) )
         || ( ( extractFloatx80Exp( b ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( b )<<1 ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    return
           ( a.low == b.low )
        && ( ( a.high == b.high )
             || ( ( a.low == 0 )
                  && ( (bits16) ( ( a.high | b.high )<<1 ) == 0 ) )
           );

}
# 4003 "../softfloat.c"
flag floatx80_le_quiet( floatx80 a, floatx80 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloatx80Exp( a ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( a )<<1 ) )
         || ( ( extractFloatx80Exp( b ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( b )<<1 ) )
       ) {
        if ( floatx80_is_signaling_nan( a )
             || floatx80_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    aSign = extractFloatx80Sign( a );
    bSign = extractFloatx80Sign( b );
    if ( aSign != bSign ) {
        return
               aSign
            || ( ( ( (bits16) ( ( a.high | b.high )<<1 ) ) | a.low | b.low )
                 == 0 );
    }
    return
          aSign ? le128( b.high, b.low, a.high, a.low )
        : le128( a.high, a.low, b.high, b.low );

}
# 4039 "../softfloat.c"
flag floatx80_lt_quiet( floatx80 a, floatx80 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloatx80Exp( a ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( a )<<1 ) )
         || ( ( extractFloatx80Exp( b ) == 0x7FFF )
              && (bits64) ( extractFloatx80Frac( b )<<1 ) )
       ) {
        if ( floatx80_is_signaling_nan( a )
             || floatx80_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    aSign = extractFloatx80Sign( a );
    bSign = extractFloatx80Sign( b );
    if ( aSign != bSign ) {
        return
               aSign
            && ( ( ( (bits16) ( ( a.high | b.high )<<1 ) ) | a.low | b.low )
                 != 0 );
    }
    return
          aSign ? lt128( b.high, b.low, a.high, a.low )
        : lt128( a.high, a.low, b.high, b.low );

}
# 4082 "../softfloat.c"
int32 float128_to_int32( float128 a )
{
    flag aSign;
    int32 aExp, shiftCount;
    bits64 aSig0, aSig1;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    aSign = extractFloat128Sign( a );
    if ( ( aExp == 0x7FFF ) && ( aSig0 | aSig1 ) ) aSign = 0;
    if ( aExp ) aSig0 |= 0x0001000000000000LL;
    aSig0 |= ( aSig1 != 0 );
    shiftCount = 0x4028 - aExp;
    if ( 0 < shiftCount ) shift64RightJamming( aSig0, shiftCount, &aSig0 );
    return roundAndPackInt32( aSign, aSig0 );

}
# 4111 "../softfloat.c"
int32 float128_to_int32_round_to_zero( float128 a )
{
    flag aSign;
    int32 aExp, shiftCount;
    bits64 aSig0, aSig1, savedASig;
    int32 z;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    aSign = extractFloat128Sign( a );
    aSig0 |= ( aSig1 != 0 );
    if ( 0x401E < aExp ) {
        if ( ( aExp == 0x7FFF ) && aSig0 ) aSign = 0;
        goto invalid;
    }
    else if ( aExp < 0x3FFF ) {
        if ( aExp || aSig0 ) float_exception_flags |= float_flag_inexact;
        return 0;
    }
    aSig0 |= 0x0001000000000000LL;
    shiftCount = 0x402F - aExp;
    savedASig = aSig0;
    aSig0 >>= shiftCount;
    z = aSig0;
    if ( aSign ) z = - z;
    if ( ( z < 0 ) ^ aSign ) {
 invalid:
        float_raise( float_flag_invalid );
        return aSign ? (sbits32) 0x80000000 : 0x7FFFFFFF;
    }
    if ( ( aSig0<<shiftCount ) != savedASig ) {
        float_exception_flags |= float_flag_inexact;
    }
    return z;

}
# 4159 "../softfloat.c"
int64 float128_to_int64( float128 a )
{
    flag aSign;
    int32 aExp, shiftCount;
    bits64 aSig0, aSig1;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    aSign = extractFloat128Sign( a );
    if ( aExp ) aSig0 |= 0x0001000000000000LL;
    shiftCount = 0x402F - aExp;
    if ( shiftCount <= 0 ) {
        if ( 0x403E < aExp ) {
            float_raise( float_flag_invalid );
            if ( ! aSign
                 || ( ( aExp == 0x7FFF )
                      && ( aSig1 || ( aSig0 != 0x0001000000000000LL ) )
                    )
               ) {
                return 0x7FFFFFFFFFFFFFFFLL;
            }
            return (sbits64) 0x8000000000000000LL;
        }
        shortShift128Left( aSig0, aSig1, - shiftCount, &aSig0, &aSig1 );
    }
    else {
        shift64ExtraRightJamming( aSig0, aSig1, shiftCount, &aSig0, &aSig1 );
    }
    return roundAndPackInt64( aSign, aSig0, aSig1 );

}
# 4202 "../softfloat.c"
int64 float128_to_int64_round_to_zero( float128 a )
{
    flag aSign;
    int32 aExp, shiftCount;
    bits64 aSig0, aSig1;
    int64 z;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    aSign = extractFloat128Sign( a );
    if ( aExp ) aSig0 |= 0x0001000000000000LL;
    shiftCount = aExp - 0x402F;
    if ( 0 < shiftCount ) {
        if ( 0x403E <= aExp ) {
            aSig0 &= 0x0000FFFFFFFFFFFFLL;
            if ( ( a.high == 0xC03E000000000000LL )
                 && ( aSig1 < 0x0002000000000000LL ) ) {
                if ( aSig1 ) float_exception_flags |= float_flag_inexact;
            }
            else {
                float_raise( float_flag_invalid );
                if ( ! aSign || ( ( aExp == 0x7FFF ) && ( aSig0 | aSig1 ) ) ) {
                    return 0x7FFFFFFFFFFFFFFFLL;
                }
            }
            return (sbits64) 0x8000000000000000LL;
        }
        z = ( aSig0<<shiftCount ) | ( aSig1>>( ( - shiftCount ) & 63 ) );
        if ( (bits64) ( aSig1<<shiftCount ) ) {
            float_exception_flags |= float_flag_inexact;
        }
    }
    else {
        if ( aExp < 0x3FFF ) {
            if ( aExp | aSig0 | aSig1 ) {
                float_exception_flags |= float_flag_inexact;
            }
            return 0;
        }
        z = aSig0>>( - shiftCount );
        if ( aSig1
             || ( shiftCount && (bits64) ( aSig0<<( shiftCount & 63 ) ) ) ) {
            float_exception_flags |= float_flag_inexact;
        }
    }
    if ( aSign ) z = - z;
    return z;

}
# 4260 "../softfloat.c"
float32 float128_to_float32( float128 a )
{
    flag aSign;
    int32 aExp;
    bits64 aSig0, aSig1;
    bits32 zSig;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    aSign = extractFloat128Sign( a );
    if ( aExp == 0x7FFF ) {
        if ( aSig0 | aSig1 ) {
            return commonNaNToFloat32( float128ToCommonNaN( a ) );
        }
        return packFloat32( aSign, 0xFF, 0 );
    }
    aSig0 |= ( aSig1 != 0 );
    shift64RightJamming( aSig0, 18, &aSig0 );
    zSig = aSig0;
    if ( aExp || zSig ) {
        zSig |= 0x40000000;
        aExp -= 0x3F81;
    }
    return roundAndPackFloat32( aSign, aExp, zSig );

}
# 4295 "../softfloat.c"
float64 float128_to_float64( float128 a )
{
    flag aSign;
    int32 aExp;
    bits64 aSig0, aSig1;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    aSign = extractFloat128Sign( a );
    if ( aExp == 0x7FFF ) {
        if ( aSig0 | aSig1 ) {
            return commonNaNToFloat64( float128ToCommonNaN( a ) );
        }
        return packFloat64( aSign, 0x7FF, 0 );
    }
    shortShift128Left( aSig0, aSig1, 14, &aSig0, &aSig1 );
    aSig0 |= ( aSig1 != 0 );
    if ( aExp || aSig0 ) {
        aSig0 |= 0x4000000000000000LL;
        aExp -= 0x3C01;
    }
    return roundAndPackFloat64( aSign, aExp, aSig0 );

}
# 4330 "../softfloat.c"
floatx80 float128_to_floatx80( float128 a )
{
    flag aSign;
    int32 aExp;
    bits64 aSig0, aSig1;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    aSign = extractFloat128Sign( a );
    if ( aExp == 0x7FFF ) {
        if ( aSig0 | aSig1 ) {
            return commonNaNToFloatx80( float128ToCommonNaN( a ) );
        }
        return packFloatx80( aSign, 0x7FFF, 0x8000000000000000LL );
    }
    if ( aExp == 0 ) {
        if ( ( aSig0 | aSig1 ) == 0 ) return packFloatx80( aSign, 0, 0 );
        normalizeFloat128Subnormal( aSig0, aSig1, &aExp, &aSig0, &aSig1 );
    }
    else {
        aSig0 |= 0x0001000000000000LL;
    }
    shortShift128Left( aSig0, aSig1, 15, &aSig0, &aSig1 );
    return roundAndPackFloatx80( 80, aSign, aExp, aSig0, aSig1 );

}
# 4367 "../softfloat.c"
float128 float128_round_to_int( float128 a )
{
    flag aSign;
    int32 aExp;
    bits64 lastBitMask, roundBitsMask;
    int8 roundingMode;
    float128 z;

    aExp = extractFloat128Exp( a );
    if ( 0x402F <= aExp ) {
        if ( 0x406F <= aExp ) {
            if ( ( aExp == 0x7FFF )
                 && ( extractFloat128Frac0( a ) | extractFloat128Frac1( a ) )
               ) {
                return propagateFloat128NaN( a, a );
            }
            return a;
        }
        lastBitMask = 1;
        lastBitMask = ( lastBitMask<<( 0x406E - aExp ) )<<1;
        roundBitsMask = lastBitMask - 1;
        z = a;
        roundingMode = float_rounding_mode;
        if ( roundingMode == float_round_nearest_even ) {
            if ( lastBitMask ) {
                add128( z.high, z.low, 0, lastBitMask>>1, &z.high, &z.low );
                if ( ( z.low & roundBitsMask ) == 0 ) z.low &= ~ lastBitMask;
            }
            else {
                if ( (sbits64) z.low < 0 ) {
                    ++z.high;
                    if ( (bits64) ( z.low<<1 ) == 0 ) z.high &= ~1;
                }
            }
        }
        else if ( roundingMode != float_round_to_zero ) {
            if ( extractFloat128Sign( z )
                 ^ ( roundingMode == float_round_up ) ) {
                add128( z.high, z.low, 0, roundBitsMask, &z.high, &z.low );
            }
        }
        z.low &= ~ roundBitsMask;
    }
    else {
        if ( aExp < 0x3FFF ) {
            if ( ( ( (bits64) ( a.high<<1 ) ) | a.low ) == 0 ) return a;
            float_exception_flags |= float_flag_inexact;
            aSign = extractFloat128Sign( a );
            switch ( float_rounding_mode ) {
             case float_round_nearest_even:
                if ( ( aExp == 0x3FFE )
                     && ( extractFloat128Frac0( a )
                          | extractFloat128Frac1( a ) )
                   ) {
                    return packFloat128( aSign, 0x3FFF, 0, 0 );
                }
                break;
             case float_round_down:
                return
                      aSign ? packFloat128( 1, 0x3FFF, 0, 0 )
                    : packFloat128( 0, 0, 0, 0 );
             case float_round_up:
                return
                      aSign ? packFloat128( 1, 0, 0, 0 )
                    : packFloat128( 0, 0x3FFF, 0, 0 );
            }
            return packFloat128( aSign, 0, 0, 0 );
        }
        lastBitMask = 1;
        lastBitMask <<= 0x402F - aExp;
        roundBitsMask = lastBitMask - 1;
        z.low = 0;
        z.high = a.high;
        roundingMode = float_rounding_mode;
        if ( roundingMode == float_round_nearest_even ) {
            z.high += lastBitMask>>1;
            if ( ( ( z.high & roundBitsMask ) | a.low ) == 0 ) {
                z.high &= ~ lastBitMask;
            }
        }
        else if ( roundingMode != float_round_to_zero ) {
            if ( extractFloat128Sign( z )
                 ^ ( roundingMode == float_round_up ) ) {
                z.high |= ( a.low != 0 );
                z.high += roundBitsMask;
            }
        }
        z.high &= ~ roundBitsMask;
    }
    if ( ( z.low != a.low ) || ( z.high != a.high ) ) {
        float_exception_flags |= float_flag_inexact;
    }
    return z;

}
# 4471 "../softfloat.c"
static float128 addFloat128Sigs( float128 a, float128 b, flag zSign )
{
    int32 aExp, bExp, zExp;
    bits64 aSig0, aSig1, bSig0, bSig1, zSig0, zSig1, zSig2;
    int32 expDiff;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    bSig1 = extractFloat128Frac1( b );
    bSig0 = extractFloat128Frac0( b );
    bExp = extractFloat128Exp( b );
    expDiff = aExp - bExp;
    if ( 0 < expDiff ) {
        if ( aExp == 0x7FFF ) {
            if ( aSig0 | aSig1 ) return propagateFloat128NaN( a, b );
            return a;
        }
        if ( bExp == 0 ) {
            --expDiff;
        }
        else {
            bSig0 |= 0x0001000000000000LL;
        }
        shift128ExtraRightJamming(
            bSig0, bSig1, 0, expDiff, &bSig0, &bSig1, &zSig2 );
        zExp = aExp;
    }
    else if ( expDiff < 0 ) {
        if ( bExp == 0x7FFF ) {
            if ( bSig0 | bSig1 ) return propagateFloat128NaN( a, b );
            return packFloat128( zSign, 0x7FFF, 0, 0 );
        }
        if ( aExp == 0 ) {
            ++expDiff;
        }
        else {
            aSig0 |= 0x0001000000000000LL;
        }
        shift128ExtraRightJamming(
            aSig0, aSig1, 0, - expDiff, &aSig0, &aSig1, &zSig2 );
        zExp = bExp;
    }
    else {
        if ( aExp == 0x7FFF ) {
            if ( aSig0 | aSig1 | bSig0 | bSig1 ) {
                return propagateFloat128NaN( a, b );
            }
            return a;
        }
        add128( aSig0, aSig1, bSig0, bSig1, &zSig0, &zSig1 );
        if ( aExp == 0 ) return packFloat128( zSign, 0, zSig0, zSig1 );
        zSig2 = 0;
        zSig0 |= 0x0002000000000000LL;
        zExp = aExp;
        goto shiftRight1;
    }
    aSig0 |= 0x0001000000000000LL;
    add128( aSig0, aSig1, bSig0, bSig1, &zSig0, &zSig1 );
    --zExp;
    if ( zSig0 < 0x0002000000000000LL ) goto roundAndPack;
    ++zExp;
 shiftRight1:
    shift128ExtraRightJamming(
        zSig0, zSig1, zSig2, 1, &zSig0, &zSig1, &zSig2 );
 roundAndPack:
    return roundAndPackFloat128( zSign, zExp, zSig0, zSig1, zSig2 );

}
# 4549 "../softfloat.c"
static float128 subFloat128Sigs( float128 a, float128 b, flag zSign )
{
    int32 aExp, bExp, zExp;
    bits64 aSig0, aSig1, bSig0, bSig1, zSig0, zSig1;
    int32 expDiff;
    float128 z;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    bSig1 = extractFloat128Frac1( b );
    bSig0 = extractFloat128Frac0( b );
    bExp = extractFloat128Exp( b );
    expDiff = aExp - bExp;
    shortShift128Left( aSig0, aSig1, 14, &aSig0, &aSig1 );
    shortShift128Left( bSig0, bSig1, 14, &bSig0, &bSig1 );
    if ( 0 < expDiff ) goto aExpBigger;
    if ( expDiff < 0 ) goto bExpBigger;
    if ( aExp == 0x7FFF ) {
        if ( aSig0 | aSig1 | bSig0 | bSig1 ) {
            return propagateFloat128NaN( a, b );
        }
        float_raise( float_flag_invalid );
        z.low = 0x0000000000000000LL;
        z.high = 0xFFFF800000000000LL;
        return z;
    }
    if ( aExp == 0 ) {
        aExp = 1;
        bExp = 1;
    }
    if ( bSig0 < aSig0 ) goto aBigger;
    if ( aSig0 < bSig0 ) goto bBigger;
    if ( bSig1 < aSig1 ) goto aBigger;
    if ( aSig1 < bSig1 ) goto bBigger;
    return packFloat128( float_rounding_mode == float_round_down, 0, 0, 0 );
 bExpBigger:
    if ( bExp == 0x7FFF ) {
        if ( bSig0 | bSig1 ) return propagateFloat128NaN( a, b );
        return packFloat128( zSign ^ 1, 0x7FFF, 0, 0 );
    }
    if ( aExp == 0 ) {
        ++expDiff;
    }
    else {
        aSig0 |= 0x4000000000000000LL;
    }
    shift128RightJamming( aSig0, aSig1, - expDiff, &aSig0, &aSig1 );
    bSig0 |= 0x4000000000000000LL;
 bBigger:
    sub128( bSig0, bSig1, aSig0, aSig1, &zSig0, &zSig1 );
    zExp = bExp;
    zSign ^= 1;
    goto normalizeRoundAndPack;
 aExpBigger:
    if ( aExp == 0x7FFF ) {
        if ( aSig0 | aSig1 ) return propagateFloat128NaN( a, b );
        return a;
    }
    if ( bExp == 0 ) {
        --expDiff;
    }
    else {
        bSig0 |= 0x4000000000000000LL;
    }
    shift128RightJamming( bSig0, bSig1, expDiff, &bSig0, &bSig1 );
    aSig0 |= 0x4000000000000000LL;
 aBigger:
    sub128( aSig0, aSig1, bSig0, bSig1, &zSig0, &zSig1 );
    zExp = aExp;
 normalizeRoundAndPack:
    --zExp;
    return normalizeRoundAndPackFloat128( zSign, zExp - 14, zSig0, zSig1 );

}







float128 float128_add( float128 a, float128 b )
{
    flag aSign, bSign;

    aSign = extractFloat128Sign( a );
    bSign = extractFloat128Sign( b );
    if ( aSign == bSign ) {
        return addFloat128Sigs( a, b, aSign );
    }
    else {
        return subFloat128Sigs( a, b, aSign );
    }

}







float128 float128_sub( float128 a, float128 b )
{
    flag aSign, bSign;

    aSign = extractFloat128Sign( a );
    bSign = extractFloat128Sign( b );
    if ( aSign == bSign ) {
        return subFloat128Sigs( a, b, aSign );
    }
    else {
        return addFloat128Sigs( a, b, aSign );
    }

}







float128 float128_mul( float128 a, float128 b )
{
    flag aSign, bSign, zSign;
    int32 aExp, bExp, zExp;
    bits64 aSig0, aSig1, bSig0, bSig1, zSig0, zSig1, zSig2, zSig3;
    float128 z;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    aSign = extractFloat128Sign( a );
    bSig1 = extractFloat128Frac1( b );
    bSig0 = extractFloat128Frac0( b );
    bExp = extractFloat128Exp( b );
    bSign = extractFloat128Sign( b );
    zSign = aSign ^ bSign;
    if ( aExp == 0x7FFF ) {
        if ( ( aSig0 | aSig1 )
             || ( ( bExp == 0x7FFF ) && ( bSig0 | bSig1 ) ) ) {
            return propagateFloat128NaN( a, b );
        }
        if ( ( bExp | bSig0 | bSig1 ) == 0 ) goto invalid;
        return packFloat128( zSign, 0x7FFF, 0, 0 );
    }
    if ( bExp == 0x7FFF ) {
        if ( bSig0 | bSig1 ) return propagateFloat128NaN( a, b );
        if ( ( aExp | aSig0 | aSig1 ) == 0 ) {
 invalid:
            float_raise( float_flag_invalid );
            z.low = 0x0000000000000000LL;
            z.high = 0xFFFF800000000000LL;
            return z;
        }
        return packFloat128( zSign, 0x7FFF, 0, 0 );
    }
    if ( aExp == 0 ) {
        if ( ( aSig0 | aSig1 ) == 0 ) return packFloat128( zSign, 0, 0, 0 );
        normalizeFloat128Subnormal( aSig0, aSig1, &aExp, &aSig0, &aSig1 );
    }
    if ( bExp == 0 ) {
        if ( ( bSig0 | bSig1 ) == 0 ) return packFloat128( zSign, 0, 0, 0 );
        normalizeFloat128Subnormal( bSig0, bSig1, &bExp, &bSig0, &bSig1 );
    }
    zExp = aExp + bExp - 0x4000;
    aSig0 |= 0x0001000000000000LL;
    shortShift128Left( bSig0, bSig1, 16, &bSig0, &bSig1 );
    mul128To256( aSig0, aSig1, bSig0, bSig1, &zSig0, &zSig1, &zSig2, &zSig3 );
    add128( zSig0, zSig1, aSig0, aSig1, &zSig0, &zSig1 );
    zSig2 |= ( zSig3 != 0 );
    if ( 0x0002000000000000LL <= zSig0 ) {
        shift128ExtraRightJamming(
            zSig0, zSig1, zSig2, 1, &zSig0, &zSig1, &zSig2 );
        ++zExp;
    }
    return roundAndPackFloat128( zSign, zExp, zSig0, zSig1, zSig2 );

}







float128 float128_div( float128 a, float128 b )
{
    flag aSign, bSign, zSign;
    int32 aExp, bExp, zExp;
    bits64 aSig0, aSig1, bSig0, bSig1, zSig0, zSig1, zSig2;
    bits64 rem0, rem1, rem2, rem3, term0, term1, term2, term3;
    float128 z;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    aSign = extractFloat128Sign( a );
    bSig1 = extractFloat128Frac1( b );
    bSig0 = extractFloat128Frac0( b );
    bExp = extractFloat128Exp( b );
    bSign = extractFloat128Sign( b );
    zSign = aSign ^ bSign;
    if ( aExp == 0x7FFF ) {
        if ( aSig0 | aSig1 ) return propagateFloat128NaN( a, b );
        if ( bExp == 0x7FFF ) {
            if ( bSig0 | bSig1 ) return propagateFloat128NaN( a, b );
            goto invalid;
        }
        return packFloat128( zSign, 0x7FFF, 0, 0 );
    }
    if ( bExp == 0x7FFF ) {
        if ( bSig0 | bSig1 ) return propagateFloat128NaN( a, b );
        return packFloat128( zSign, 0, 0, 0 );
    }
    if ( bExp == 0 ) {
        if ( ( bSig0 | bSig1 ) == 0 ) {
            if ( ( aExp | aSig0 | aSig1 ) == 0 ) {
 invalid:
                float_raise( float_flag_invalid );
                z.low = 0x0000000000000000LL;
                z.high = 0xFFFF800000000000LL;
                return z;
            }
            float_raise( float_flag_divbyzero );
            return packFloat128( zSign, 0x7FFF, 0, 0 );
        }
        normalizeFloat128Subnormal( bSig0, bSig1, &bExp, &bSig0, &bSig1 );
    }
    if ( aExp == 0 ) {
        if ( ( aSig0 | aSig1 ) == 0 ) return packFloat128( zSign, 0, 0, 0 );
        normalizeFloat128Subnormal( aSig0, aSig1, &aExp, &aSig0, &aSig1 );
    }
    zExp = aExp - bExp + 0x3FFD;
    shortShift128Left(
        aSig0 | 0x0001000000000000LL, aSig1, 15, &aSig0, &aSig1 );
    shortShift128Left(
        bSig0 | 0x0001000000000000LL, bSig1, 15, &bSig0, &bSig1 );
    if ( le128( bSig0, bSig1, aSig0, aSig1 ) ) {
        shift128Right( aSig0, aSig1, 1, &aSig0, &aSig1 );
        ++zExp;
    }
    zSig0 = estimateDiv128To64( aSig0, aSig1, bSig0 );
    mul128By64To192( bSig0, bSig1, zSig0, &term0, &term1, &term2 );
    sub192( aSig0, aSig1, 0, term0, term1, term2, &rem0, &rem1, &rem2 );
    while ( (sbits64) rem0 < 0 ) {
        --zSig0;
        add192( rem0, rem1, rem2, 0, bSig0, bSig1, &rem0, &rem1, &rem2 );
    }
    zSig1 = estimateDiv128To64( rem1, rem2, bSig0 );
    if ( ( zSig1 & 0x3FFF ) <= 4 ) {
        mul128By64To192( bSig0, bSig1, zSig1, &term1, &term2, &term3 );
        sub192( rem1, rem2, 0, term1, term2, term3, &rem1, &rem2, &rem3 );
        while ( (sbits64) rem1 < 0 ) {
            --zSig1;
            add192( rem1, rem2, rem3, 0, bSig0, bSig1, &rem1, &rem2, &rem3 );
        }
        zSig1 |= ( ( rem1 | rem2 | rem3 ) != 0 );
    }
    shift128ExtraRightJamming( zSig0, zSig1, 0, 15, &zSig0, &zSig1, &zSig2 );
    return roundAndPackFloat128( zSign, zExp, zSig0, zSig1, zSig2 );

}







float128 float128_rem( float128 a, float128 b )
{
    flag aSign, bSign, zSign;
    int32 aExp, bExp, expDiff;
    bits64 aSig0, aSig1, bSig0, bSig1, q, term0, term1, term2;
    bits64 allZero, alternateASig0, alternateASig1, sigMean1;
    sbits64 sigMean0;
    float128 z;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    aSign = extractFloat128Sign( a );
    bSig1 = extractFloat128Frac1( b );
    bSig0 = extractFloat128Frac0( b );
    bExp = extractFloat128Exp( b );
    bSign = extractFloat128Sign( b );
    if ( aExp == 0x7FFF ) {
        if ( ( aSig0 | aSig1 )
             || ( ( bExp == 0x7FFF ) && ( bSig0 | bSig1 ) ) ) {
            return propagateFloat128NaN( a, b );
        }
        goto invalid;
    }
    if ( bExp == 0x7FFF ) {
        if ( bSig0 | bSig1 ) return propagateFloat128NaN( a, b );
        return a;
    }
    if ( bExp == 0 ) {
        if ( ( bSig0 | bSig1 ) == 0 ) {
 invalid:
            float_raise( float_flag_invalid );
            z.low = 0x0000000000000000LL;
            z.high = 0xFFFF800000000000LL;
            return z;
        }
        normalizeFloat128Subnormal( bSig0, bSig1, &bExp, &bSig0, &bSig1 );
    }
    if ( aExp == 0 ) {
        if ( ( aSig0 | aSig1 ) == 0 ) return a;
        normalizeFloat128Subnormal( aSig0, aSig1, &aExp, &aSig0, &aSig1 );
    }
    expDiff = aExp - bExp;
    if ( expDiff < -1 ) return a;
    shortShift128Left(
        aSig0 | 0x0001000000000000LL,
        aSig1,
        15 - ( expDiff < 0 ),
        &aSig0,
        &aSig1
    );
    shortShift128Left(
        bSig0 | 0x0001000000000000LL, bSig1, 15, &bSig0, &bSig1 );
    q = le128( bSig0, bSig1, aSig0, aSig1 );
    if ( q ) sub128( aSig0, aSig1, bSig0, bSig1, &aSig0, &aSig1 );
    expDiff -= 64;
    while ( 0 < expDiff ) {
        q = estimateDiv128To64( aSig0, aSig1, bSig0 );
        q = ( 4 < q ) ? q - 4 : 0;
        mul128By64To192( bSig0, bSig1, q, &term0, &term1, &term2 );
        shortShift192Left( term0, term1, term2, 61, &term1, &term2, &allZero );
        shortShift128Left( aSig0, aSig1, 61, &aSig0, &allZero );
        sub128( aSig0, 0, term1, term2, &aSig0, &aSig1 );
        expDiff -= 61;
    }
    if ( -64 < expDiff ) {
        q = estimateDiv128To64( aSig0, aSig1, bSig0 );
        q = ( 4 < q ) ? q - 4 : 0;
        q >>= - expDiff;
        shift128Right( bSig0, bSig1, 12, &bSig0, &bSig1 );
        expDiff += 52;
        if ( expDiff < 0 ) {
            shift128Right( aSig0, aSig1, - expDiff, &aSig0, &aSig1 );
        }
        else {
            shortShift128Left( aSig0, aSig1, expDiff, &aSig0, &aSig1 );
        }
        mul128By64To192( bSig0, bSig1, q, &term0, &term1, &term2 );
        sub128( aSig0, aSig1, term1, term2, &aSig0, &aSig1 );
    }
    else {
        shift128Right( aSig0, aSig1, 12, &aSig0, &aSig1 );
        shift128Right( bSig0, bSig1, 12, &bSig0, &bSig1 );
    }
    do {
        alternateASig0 = aSig0;
        alternateASig1 = aSig1;
        ++q;
        sub128( aSig0, aSig1, bSig0, bSig1, &aSig0, &aSig1 );
    } while ( 0 <= (sbits64) aSig0 );
    add128(
        aSig0, aSig1, alternateASig0, alternateASig1, &sigMean0, &sigMean1 );
    if ( ( sigMean0 < 0 )
         || ( ( ( sigMean0 | sigMean1 ) == 0 ) && ( q & 1 ) ) ) {
        aSig0 = alternateASig0;
        aSig1 = alternateASig1;
    }
    zSign = ( (sbits64) aSig0 < 0 );
    if ( zSign ) sub128( 0, 0, aSig0, aSig1, &aSig0, &aSig1 );
    return
        normalizeRoundAndPackFloat128( aSign ^ zSign, bExp - 4, aSig0, aSig1 );

}







float128 float128_sqrt( float128 a )
{
    flag aSign;
    int32 aExp, zExp;
    bits64 aSig0, aSig1, zSig0, zSig1, zSig2, doubleZSig0;
    bits64 rem0, rem1, rem2, rem3, term0, term1, term2, term3;
    float128 z;

    aSig1 = extractFloat128Frac1( a );
    aSig0 = extractFloat128Frac0( a );
    aExp = extractFloat128Exp( a );
    aSign = extractFloat128Sign( a );
    if ( aExp == 0x7FFF ) {
        if ( aSig0 | aSig1 ) return propagateFloat128NaN( a, a );
        if ( ! aSign ) return a;
        goto invalid;
    }
    if ( aSign ) {
        if ( ( aExp | aSig0 | aSig1 ) == 0 ) return a;
 invalid:
        float_raise( float_flag_invalid );
        z.low = 0x0000000000000000LL;
        z.high = 0xFFFF800000000000LL;
        return z;
    }
    if ( aExp == 0 ) {
        if ( ( aSig0 | aSig1 ) == 0 ) return packFloat128( 0, 0, 0, 0 );
        normalizeFloat128Subnormal( aSig0, aSig1, &aExp, &aSig0, &aSig1 );
    }
    zExp = ( ( aExp - 0x3FFF )>>1 ) + 0x3FFE;
    aSig0 |= 0x0001000000000000LL;
    zSig0 = estimateSqrt32( aExp, aSig0>>17 );
    shortShift128Left( aSig0, aSig1, 13 - ( aExp & 1 ), &aSig0, &aSig1 );
    zSig0 = estimateDiv128To64( aSig0, aSig1, zSig0<<32 ) + ( zSig0<<30 );
    doubleZSig0 = zSig0<<1;
    mul64To128( zSig0, zSig0, &term0, &term1 );
    sub128( aSig0, aSig1, term0, term1, &rem0, &rem1 );
    while ( (sbits64) rem0 < 0 ) {
        --zSig0;
        doubleZSig0 -= 2;
        add128( rem0, rem1, zSig0>>63, doubleZSig0 | 1, &rem0, &rem1 );
    }
    zSig1 = estimateDiv128To64( rem1, 0, doubleZSig0 );
    if ( ( zSig1 & 0x1FFF ) <= 5 ) {
        if ( zSig1 == 0 ) zSig1 = 1;
        mul64To128( doubleZSig0, zSig1, &term1, &term2 );
        sub128( rem1, 0, term1, term2, &rem1, &rem2 );
        mul64To128( zSig1, zSig1, &term2, &term3 );
        sub192( rem1, rem2, 0, 0, term2, term3, &rem1, &rem2, &rem3 );
        while ( (sbits64) rem1 < 0 ) {
            --zSig1;
            shortShift128Left( 0, zSig1, 1, &term2, &term3 );
            term3 |= 1;
            term2 |= doubleZSig0;
            add192( rem1, rem2, rem3, 0, term2, term3, &rem1, &rem2, &rem3 );
        }
        zSig1 |= ( ( rem1 | rem2 | rem3 ) != 0 );
    }
    shift128ExtraRightJamming( zSig0, zSig1, 0, 14, &zSig0, &zSig1, &zSig2 );
    return roundAndPackFloat128( 0, zExp, zSig0, zSig1, zSig2 );

}







flag float128_eq( float128 a, float128 b )
{

    if ( ( ( extractFloat128Exp( a ) == 0x7FFF )
              && ( extractFloat128Frac0( a ) | extractFloat128Frac1( a ) ) )
         || ( ( extractFloat128Exp( b ) == 0x7FFF )
              && ( extractFloat128Frac0( b ) | extractFloat128Frac1( b ) ) )
       ) {
        if ( float128_is_signaling_nan( a )
             || float128_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    return
           ( a.low == b.low )
        && ( ( a.high == b.high )
             || ( ( a.low == 0 )
                  && ( (bits64) ( ( a.high | b.high )<<1 ) == 0 ) )
           );

}
# 5030 "../softfloat.c"
flag float128_le( float128 a, float128 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloat128Exp( a ) == 0x7FFF )
              && ( extractFloat128Frac0( a ) | extractFloat128Frac1( a ) ) )
         || ( ( extractFloat128Exp( b ) == 0x7FFF )
              && ( extractFloat128Frac0( b ) | extractFloat128Frac1( b ) ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    aSign = extractFloat128Sign( a );
    bSign = extractFloat128Sign( b );
    if ( aSign != bSign ) {
        return
               aSign
            || ( ( ( (bits64) ( ( a.high | b.high )<<1 ) ) | a.low | b.low )
                 == 0 );
    }
    return
          aSign ? le128( b.high, b.low, a.high, a.low )
        : le128( a.high, a.low, b.high, b.low );

}







flag float128_lt( float128 a, float128 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloat128Exp( a ) == 0x7FFF )
              && ( extractFloat128Frac0( a ) | extractFloat128Frac1( a ) ) )
         || ( ( extractFloat128Exp( b ) == 0x7FFF )
              && ( extractFloat128Frac0( b ) | extractFloat128Frac1( b ) ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    aSign = extractFloat128Sign( a );
    bSign = extractFloat128Sign( b );
    if ( aSign != bSign ) {
        return
               aSign
            && ( ( ( (bits64) ( ( a.high | b.high )<<1 ) ) | a.low | b.low )
                 != 0 );
    }
    return
          aSign ? lt128( b.high, b.low, a.high, a.low )
        : lt128( a.high, a.low, b.high, b.low );

}
# 5095 "../softfloat.c"
flag float128_eq_signaling( float128 a, float128 b )
{

    if ( ( ( extractFloat128Exp( a ) == 0x7FFF )
              && ( extractFloat128Frac0( a ) | extractFloat128Frac1( a ) ) )
         || ( ( extractFloat128Exp( b ) == 0x7FFF )
              && ( extractFloat128Frac0( b ) | extractFloat128Frac1( b ) ) )
       ) {
        float_raise( float_flag_invalid );
        return 0;
    }
    return
           ( a.low == b.low )
        && ( ( a.high == b.high )
             || ( ( a.low == 0 )
                  && ( (bits64) ( ( a.high | b.high )<<1 ) == 0 ) )
           );

}
# 5122 "../softfloat.c"
flag float128_le_quiet( float128 a, float128 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloat128Exp( a ) == 0x7FFF )
              && ( extractFloat128Frac0( a ) | extractFloat128Frac1( a ) ) )
         || ( ( extractFloat128Exp( b ) == 0x7FFF )
              && ( extractFloat128Frac0( b ) | extractFloat128Frac1( b ) ) )
       ) {
        if ( float128_is_signaling_nan( a )
             || float128_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    aSign = extractFloat128Sign( a );
    bSign = extractFloat128Sign( b );
    if ( aSign != bSign ) {
        return
               aSign
            || ( ( ( (bits64) ( ( a.high | b.high )<<1 ) ) | a.low | b.low )
                 == 0 );
    }
    return
          aSign ? le128( b.high, b.low, a.high, a.low )
        : le128( a.high, a.low, b.high, b.low );

}
# 5158 "../softfloat.c"
flag float128_lt_quiet( float128 a, float128 b )
{
    flag aSign, bSign;

    if ( ( ( extractFloat128Exp( a ) == 0x7FFF )
              && ( extractFloat128Frac0( a ) | extractFloat128Frac1( a ) ) )
         || ( ( extractFloat128Exp( b ) == 0x7FFF )
              && ( extractFloat128Frac0( b ) | extractFloat128Frac1( b ) ) )
       ) {
        if ( float128_is_signaling_nan( a )
             || float128_is_signaling_nan( b ) ) {
            float_raise( float_flag_invalid );
        }
        return 0;
    }
    aSign = extractFloat128Sign( a );
    bSign = extractFloat128Sign( b );
    if ( aSign != bSign ) {
        return
               aSign
            && ( ( ( (bits64) ( ( a.high | b.high )<<1 ) ) | a.low | b.low )
                 != 0 );
    }
    return
          aSign ? lt128( b.high, b.low, a.high, a.low )
        : lt128( a.high, a.low, b.high, b.low );

}
