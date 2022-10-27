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
	 * Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.OnBegin
	 */
	struct UBP_CE_Operative_Digiclone_Provoke_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.OnEnd
	 */
	struct UBP_CE_Operative_Digiclone_Provoke_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_57EU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.ProvokeSoundStop
	 */
	struct UBP_CE_Operative_Digiclone_Provoke_C_ProvokeSoundStop_Params
	{	};

	/**
	 * Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke
	 */
	struct UBP_CE_Operative_Digiclone_Provoke_C_ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A94A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
