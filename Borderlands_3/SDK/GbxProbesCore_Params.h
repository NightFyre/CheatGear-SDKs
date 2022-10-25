#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GbxProbesCore.GbxProbeInterface.GetGbxProbeId
	 */
	struct UGbxProbeInterface_GetGbxProbeId_Params
	{
	public:
		struct FGbxProbeId                                         OutId;                                                   // 0x0000(0x0018)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
