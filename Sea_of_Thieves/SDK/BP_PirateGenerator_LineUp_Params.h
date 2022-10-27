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
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.GetPirateSelector
	 */
	struct ABP_PirateGenerator_LineUp_C_GetPirateSelector_Params
	{
	public:
		class UPirateSelector*                                     PirateSelectorComponent;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Reset
	 */
	struct ABP_PirateGenerator_LineUp_C_Reset_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.DelayBasedOnAngle
	 */
	struct ABP_PirateGenerator_LineUp_C_DelayBasedOnAngle_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.FadeProps
	 */
	struct ABP_PirateGenerator_LineUp_C_FadeProps_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ActivateGhostMaterial
	 */
	struct ABP_PirateGenerator_LineUp_C_ActivateGhostMaterial_Params
	{
	public:
		class UMeshComponent*                                      MeshComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FadeIn;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E7YT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Duration;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ClearProps
	 */
	struct ABP_PirateGenerator_LineUp_C_ClearProps_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.SetProp
	 */
	struct ABP_PirateGenerator_LineUp_C_SetProp_Params
	{
	public:
		struct FBP_LineUp_Props                                    BP_LineUp_Props;                                         // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       Primary;                                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UpdateAnimation
	 */
	struct ABP_PirateGenerator_LineUp_C_UpdateAnimation_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirate
	 */
	struct ABP_PirateGenerator_LineUp_C_RandomizePirate_Params
	{
	public:
		int32_t                                                    PoseIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_26IG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPirateDescription                                  PirateDesc;                                              // 0x0008(0x0080)  (Parm)
		TArray<class UClass*>                                      Outfit;                                                  // 0x0088(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.UserConstructionScript
	 */
	struct ABP_PirateGenerator_LineUp_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.PlayMontage
	 */
	struct ABP_PirateGenerator_LineUp_C_PlayMontage_Params
	{
	public:
		class UAnimInstance*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequence*                                       OutOf;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequence*                                       LoopAnim;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimInstance*                                       Prop;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequence*                                       OutOf2;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequence*                                       PropLoop;                                                // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Highlighted
	 */
	struct ABP_PirateGenerator_LineUp_C_Highlighted_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OutOfHighlight
	 */
	struct ABP_PirateGenerator_LineUp_C_OutOfHighlight_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.Selected
	 */
	struct ABP_PirateGenerator_LineUp_C_Selected_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnEndGeneratingPirate
	 */
	struct ABP_PirateGenerator_LineUp_C_OnEndGeneratingPirate_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnBeginGeneratingPirate
	 */
	struct ABP_PirateGenerator_LineUp_C_OnBeginGeneratingPirate_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.RandomizePirateEvent
	 */
	struct ABP_PirateGenerator_LineUp_C_RandomizePirateEvent_Params
	{
	public:
		struct FPirateDescription                                  PirateDesc;                                              // 0x0000(0x0080)  (Parm)
		TArray<class UClass*>                                      Outfit;                                                  // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ShipSelect
	 */
	struct ABP_PirateGenerator_LineUp_C_ShipSelect_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ReceiveTick
	 */
	struct ABP_PirateGenerator_LineUp_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.OnSignalSpawnIn
	 */
	struct ABP_PirateGenerator_LineUp_C_OnSignalSpawnIn_Params
	{	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.ExecuteUbergraph_BP_PirateGenerator_LineUp
	 */
	struct ABP_PirateGenerator_LineUp_C_ExecuteUbergraph_BP_PirateGenerator_LineUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2V9Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PirateGenerator_LineUp.BP_PirateGenerator_LineUp_C.LineUpPirateInitializedDispatcher__DelegateSignature
	 */
	struct ABP_PirateGenerator_LineUp_C_LineUpPirateInitializedDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
