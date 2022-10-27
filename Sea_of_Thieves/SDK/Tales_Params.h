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
	 * Function Tales.TaleQuestStepInterface.Signal
	 */
	struct UTaleQuestStepInterface_Signal_Params
	{	};

	/**
	 * Function Tales.TaleQuestCargoRunContractsService.GetContract
	 */
	struct UTaleQuestCargoRunContractsService_GetContract_Params
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTaleQuestCargoRunContract*                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestCargoRunContractsService.AddContract
	 */
	struct UTaleQuestCargoRunContractsService_AddContract_Params
	{
	public:
		TArray<class UClass*>                                      InItems;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, UObjectWrapper)
		class AActor*                                              InCollectFromNPC;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              InDeliverToNPC;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTimeLimitInMinutes;                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGuid                                               ReturnValue;                                             // 0x0024(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestMerchantContractsService.GetContract
	 */
	struct UTaleQuestMerchantContractsService_GetContract_Params
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTaleQuestMerchantContract*                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestMerchantContractsService.AddContract
	 */
	struct UTaleQuestMerchantContractsService_AddContract_Params
	{
	public:
		TArray<struct FTaleQuestDeliveryRequest>                   Requests;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class FName                                                InDeliveryDestination;                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InTimeLimit;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGuid                                               ReturnValue;                                             // 0x001C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed
	 */
	struct UTaleQuestSelectorServiceBlueprintFunctionLibrary_SetDebugVoyageSeed_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed
	 */
	struct UTaleQuestSelectorServiceBlueprintFunctionLibrary_ResetVoyageDebugSeed_Params
	{	};

	/**
	 * Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator
	 */
	struct UCutsceneResponsesTaleService_TrackResponseCoordinator_Params
	{
	public:
		class UCutsceneResponseCoordinator*                        Coordinator;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet
	 */
	struct UCutsceneResponsesTaleService_StartCutsceneResponseSheet_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VRMU[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ResponseSheetClass;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UCutsceneResponseSheet*                              ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets
	 */
	struct UCutsceneResponsesTaleService_ClearAllActiveResponseSheets_Params
	{	};

	/**
	 * Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor
	 */
	struct UCutsceneResponsesTaleService_AddResponseSheetRelevantActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestInteractionPreventionService.PreventInteractionWithTargetActor
	 */
	struct UTaleQuestInteractionPreventionService_PreventInteractionWithTargetActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestInteractionPreventionService.EnableInteractionWithTargetActor
	 */
	struct UTaleQuestInteractionPreventionService_EnableInteractionWithTargetActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange
	 */
	struct UTaleQuestSelectorService_GetRandomIntegerInRange_Params
	{
	public:
		int32_t                                                    Minimum;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Maximum;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestSelectorService.GetRandomFloatInRange
	 */
	struct UTaleQuestSelectorService_GetRandomFloatInRange_Params
	{
	public:
		float                                                      Minimum;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Maximum;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToEnable
	 */
	struct UTaleQuestToggleInteractionDescriptionService_TargetActorInteractionToEnable_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToDisable
	 */
	struct UTaleQuestToggleInteractionDescriptionService_TargetActorInteractionToDisable_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.SelectNamedPointStepDesc.GetNamedPointsGroups
	 */
	struct USelectNamedPointStepDesc_GetNamedPointsGroups_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Tales.TaleQuestActorFunctionLibrary.SpawnActor
	 */
	struct UTaleQuestActorFunctionLibrary_SpawnActor_Params
	{
	public:
		class UClass*                                              What;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q178[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Where;                                                   // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       TrackActor;                                              // 0x0040(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AutomaticallyGatherForMigration;                         // 0x0041(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4P5R[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestActorFunctionLibrary.ResolveActor
	 */
	struct UTaleQuestActorFunctionLibrary_ResolveActor_Params
	{
	public:
		TAssetPtr<class AActor>                                    ActorReference;                                          // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
		class AActor*                                              ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestActorFunctionLibrary.GetInterface
	 */
	struct UTaleQuestActorFunctionLibrary_GetInterface_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InterfaceClass;                                          // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestActorFunctionLibrary.GetActorTransform
	 */
	struct UTaleQuestActorFunctionLibrary_GetActorTransform_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OA4B[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestAnimationStepFunctionLibrary.MakePosseableSequence
	 */
	struct UTaleQuestAnimationStepFunctionLibrary_MakePosseableSequence_Params
	{
	public:
		class AActor*                                              ActorToPossess;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              TrackNameToPossess;                                      // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FPossessableSequence                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.Subtract_Int
	 */
	struct UTaleQuestIntMathsFunctionLibrary_Subtract_Int_Params
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.NotEquals
	 */
	struct UTaleQuestIntMathsFunctionLibrary_NotEquals_Params
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.Multiply_Int
	 */
	struct UTaleQuestIntMathsFunctionLibrary_Multiply_Int_Params
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.Modulus_Int
	 */
	struct UTaleQuestIntMathsFunctionLibrary_Modulus_Int_Params
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.LessThanOrEqual
	 */
	struct UTaleQuestIntMathsFunctionLibrary_LessThanOrEqual_Params
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.LessThan
	 */
	struct UTaleQuestIntMathsFunctionLibrary_LessThan_Params
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.Increment_Int
	 */
	struct UTaleQuestIntMathsFunctionLibrary_Increment_Int_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThanOrEqual
	 */
	struct UTaleQuestIntMathsFunctionLibrary_GreaterThanOrEqual_Params
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThan
	 */
	struct UTaleQuestIntMathsFunctionLibrary_GreaterThan_Params
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.Equals
	 */
	struct UTaleQuestIntMathsFunctionLibrary_Equals_Params
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.Divide_Int
	 */
	struct UTaleQuestIntMathsFunctionLibrary_Divide_Int_Params
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.Decrement_Int
	 */
	struct UTaleQuestIntMathsFunctionLibrary_Decrement_Int_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestIntMathsFunctionLibrary.Add_Int
	 */
	struct UTaleQuestIntMathsFunctionLibrary_Add_Int_Params
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Right;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestNamedPointsFunctionLibrary.GetNamedPointsFromGroup
	 */
	struct UTaleQuestNamedPointsFunctionLibrary_GetNamedPointsFromGroup_Params
	{
	public:
		TAssetPtr<class AActor>                                    PointsContainer;                                         // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
		class FName                                                GroupName;                                               // 0x0020(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESpaceType                                                 ReturnSpace;                                             // 0x0028(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LFT0[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOrientedPoint>                              Points;                                                  // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Tales.TaleQuestNPCHideFunctionLibrary.FadeOut
	 */
	struct UTaleQuestNPCHideFunctionLibrary_FadeOut_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestNPCHideFunctionLibrary.FadeIn
	 */
	struct UTaleQuestNPCHideFunctionLibrary_FadeIn_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestStoryFunctionLibrary.WaitForStory
	 */
	struct UTaleQuestStoryFunctionLibrary_WaitForStory_Params
	{
	public:
		class FName                                                StoryName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldBeActive;                                          // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestStoryFunctionLibrary.IsStoryActive
	 */
	struct UTaleQuestStoryFunctionLibrary_IsStoryActive_Params
	{
	public:
		class FName                                                StoryName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestStoryBranchFunctionLibrary.BranchOnStory
	 */
	struct UTaleQuestStoryBranchFunctionLibrary_BranchOnStory_Params
	{
	public:
		class FName                                                StoryName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestTransformMathsFunctionLibrary.ToWorld_Transform
	 */
	struct UTaleQuestTransformMathsFunctionLibrary_ToWorld_Transform_Params
	{
	public:
		struct FTransform                                          RootTransform;                                           // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FTransform                                          RelativeTransform;                                       // 0x0030(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FTransform                                          ReturnValue;                                             // 0x0060(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromVector
	 */
	struct UTaleQuestTransfromConversionFunctionLibrary_FromVector_Params
	{
	public:
		struct FVector                                             InTranslation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JLWU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromOrientedPoint
	 */
	struct UTaleQuestTransfromConversionFunctionLibrary_FromOrientedPoint_Params
	{
	public:
		struct FOrientedPoint                                      InOrientedPoint;                                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		unsigned char                                              UnknownData_ENI2[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0020(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestUObjectFunctionLibrary.IsValid
	 */
	struct UTaleQuestUObjectFunctionLibrary_IsValid_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestUtilityFunctionLibrary.FailTale
	 */
	struct UTaleQuestUtilityFunctionLibrary_FailTale_Params
	{
	public:
		class FText                                                FailureMessage;                                          // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Tales.TaleQuestWaterVolumeFunctionLibrary.SetExactWaterLevel
	 */
	struct UTaleQuestWaterVolumeFunctionLibrary_SetExactWaterLevel_Params
	{
	public:
		class AWaterVolume*                                        WaterVolume;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WaterLevel;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestWaterVolumeFunctionLibrary.IsWaterVolumeFull
	 */
	struct UTaleQuestWaterVolumeFunctionLibrary_IsWaterVolumeFull_Params
	{
	public:
		class AWaterVolume*                                        WaterVolume;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tales.TaleQuestWaterVolumeFunctionLibrary.EmptyWaterVolume
	 */
	struct UTaleQuestWaterVolumeFunctionLibrary_EmptyWaterVolume_Params
	{
	public:
		class AWaterVolume*                                        WaterVolume;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestWaterVolumeFunctionLibrary.AddWaterAmount
	 */
	struct UTaleQuestWaterVolumeFunctionLibrary_AddWaterAmount_Params
	{
	public:
		class AWaterVolume*                                        WaterVolume;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AmountToAdd;                                             // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LerpRate;                                                // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tales.TaleQuestMapService.UpdateMerchantMap
	 */
	struct UTaleQuestMapService_UpdateMerchantMap_Params
	{
	public:
		class FName                                                MapID;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I3FL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTaleQuestDeliverableItem                           Deliverable;                                             // 0x0010(0x0040)  (Parm)
	};

	/**
	 * Function Tales.TaleQuestMapService.AdvanceRiddleMap
	 */
	struct UTaleQuestMapService_AdvanceRiddleMap_Params
	{
	public:
		class FName                                                MapID;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
