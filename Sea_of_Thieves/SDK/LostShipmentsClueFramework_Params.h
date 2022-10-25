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
	 * Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo
	 */
	struct UClueDestinationDescriptor_OnRep_DestinationInfo_Params
	{	};

	/**
	 * Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite
	 */
	struct UClueConnectionBlueprintFunctionLibrary_CreateCluePointingToSite_Params
	{
	public:
		class UClueConnectionConfig*                               ConnectionConfiguration;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Difficulty;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M24X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UClass*>                                      AllowedClueTypes;                                        // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
		class UTaleQuestSelectorService*                           SelectorService;                                         // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SourceLocation;                                          // 0x0028(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C1Q6[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FClueSite                                           TargetSite;                                              // 0x0038(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UClueDescriptor*                                     ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant
	 */
	struct UClueLifetimeBlueprintFunctionLibrary_GiveClueToParticipant_Params
	{
	public:
		class AActor*                                              Participant;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClueDescriptor*                                     Clue;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ClueSite;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites
	 */
	struct UTaleQuestClueSiteService_GetClueSites_Params
	{
	public:
		TArray<struct FClueSite>                                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
