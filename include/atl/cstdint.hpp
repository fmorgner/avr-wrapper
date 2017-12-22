#ifndef ATL_CSTDINT_HPP
#define ATL_CSTDINT_HPP

namespace atl
  {

  /**
   * An signed integer type that is exactly 8 bit wide
   */
  using int8_t = __INT8_TYPE__;

  /**
   * An signed integer type that is exactly 16 bit wide
   */
  using int16_t = __INT16_TYPE__;

  /**
   * An signed integer type that is exactly 32 bit wide
   */
  using int32_t = __INT32_TYPE__;

  /**
   * An signed integer type that is exactly 64 bit wide
   */
  using int64_t = __INT64_TYPE__;

  /**
   * An unsigned integer type that is exactly 8 bit wide
   */
  using uint8_t = __UINT8_TYPE__;

  /**
   * An unsigned integer type that is exactly 16 bit wide
   */
  using uint16_t = __UINT16_TYPE__;

  /**
   * An unsigned integer type that is exactly 32 bit wide
   */
  using uint32_t = __UINT32_TYPE__;

  /**
   * An unsigned integer type that is exactly 64 bit wide
   */
  using uint64_t = __UINT64_TYPE__;


  }

#endif
