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
	 * Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.StartSeperationAnxietyNova
	 */
	struct UInterface_Operative_DigiClone_C_StartSeperationAnxietyNova_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.NotifyPanicButtonTriggered
	 */
	struct UInterface_Operative_DigiClone_C_NotifyPanicButtonTriggered_Params
	{	};

	/**
	 * Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.GetDigiCloneReference
	 */
	struct UInterface_Operative_DigiClone_C_GetDigiCloneReference_Params
	{
	public:
		class AActor*                                              Digiclone;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.Is DigiClone Active
	 */
	struct UInterface_Operative_DigiClone_C_Is_DigiClone_Active_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
