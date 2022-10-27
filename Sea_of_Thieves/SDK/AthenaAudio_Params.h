#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function AthenaAudio.AudioPortalComponent.SetParentShip
	 */
	struct UAudioPortalComponent_SetParentShip_Params
	{
	public:
		class AActor*                                              ParentShip;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAudio.AudioPortalInterface.UnregisterPortal
	 */
	struct UAudioPortalInterface_UnregisterPortal_Params
	{
	public:
		class UAudioPortalComponent*                               AudioPortal;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAudio.AudioPortalInterface.RegisterPortal
	 */
	struct UAudioPortalInterface_RegisterPortal_Params
	{
	public:
		class UAudioPortalComponent*                               AudioPortal;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OwningActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
	 */
	struct UAudioPortalInterface_GetAllRegisteredPortalsInSpecificSpace_Params
	{
	public:
		class UAudioSpaceDataAsset*                                AudioSpace;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OwningActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<TWeakObjectPtr<class UAudioPortalComponent>>        ReturnValue;                                             // 0x0010(0x0010)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, UObjectWrapper)
	};

	/**
	 * Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortals
	 */
	struct UAudioPortalInterface_GetAllRegisteredPortals_Params
	{
	public:
		TArray<TWeakObjectPtr<class UAudioPortalComponent>>        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, UObjectWrapper)
	};

	/**
	 * Function AthenaAudio.MultiEmitter.ResetNamingCount
	 */
	struct AMultiEmitter_ResetNamingCount_Params
	{	};

	/**
	 * Function AthenaAudio.MultiEmitter.CreateAndAddMergedEmitterComponentToRoot
	 */
	struct AMultiEmitter_CreateAndAddMergedEmitterComponentToRoot_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InOffset;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6SUO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWwiseEvent*                                         InWwiseEvent;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseObjectPoolWrapper*                             InPool;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
