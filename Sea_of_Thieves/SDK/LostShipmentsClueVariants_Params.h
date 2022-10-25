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
	 * Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText
	 */
	struct UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentTitleText_Params
	{	};

	/**
	 * Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination
	 */
	struct UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentClueDestination_Params
	{	};

	/**
	 * Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData
	 */
	struct AClueSiteCircleMapWieldable_OnRep_MapRadialIconData_Params
	{	};

	/**
	 * Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem
	 */
	struct UClueVariantsBlueprintFunctionLibrary_GiveClueDescriptorToItem_Params
	{
	public:
		class AItemInfo*                                           ItemInfo;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClueDescriptor*                                     Clue;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo
	 */
	struct UCompositeClueDestinationDescriptor_OnRep_DestinationInfo_Params
	{	};

	/**
	 * Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue
	 */
	struct UGooseChaseClueBlueprintFunctionLibrary_CreateEndOfGooseChaseClue_Params
	{
	public:
		class UClueDescriptor*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck
	 */
	struct UShipwreckClueBlueprintFunctionLibrary_CreateCluePointingToShipwreck_Params
	{
	public:
		class UClueConnectionConfig*                               ConnectionConfiguration;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Difficulty;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WR0K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UClass*>                                      AllowedClueTypes;                                        // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
		class UTaleQuestSelectorService*                           SelectorService;                                         // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SourceLocation;                                          // 0x0028(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JSXR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShipwreck*                                          Shipwreck;                                               // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClueDescriptor*                                     ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText
	 */
	struct UTaleQuestClueInventoryService_SetClueTitleText_Params
	{
	public:
		class FText                                                InTitleText;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount
	 */
	struct UTaleQuestClueInventoryService_GetCollectedClueCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
