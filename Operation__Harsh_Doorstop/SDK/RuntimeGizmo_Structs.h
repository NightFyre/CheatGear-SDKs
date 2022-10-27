#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum RuntimeGizmo.EGizmoAxis
	 */
	enum class EGizmoAxis : uint8_t
	{
		None = 0,
		X    = 1,
		Y    = 2,
		Z    = 3,
		XY   = 4,
		YZ   = 5,
		XZ   = 6,
		XYZ  = 7,
		MAX  = 8
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
