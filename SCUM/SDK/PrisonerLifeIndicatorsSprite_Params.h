#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_MPI_CanvasPanel_Visibility
	 */
	struct UPrisonerLifeIndicatorsSprite_C_Get_MPI_CanvasPanel_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KE5E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetAIDetectionBarPercent
	 */
	struct UPrisonerLifeIndicatorsSprite_C_GetAIDetectionBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetNoiseBarPercent
	 */
	struct UPrisonerLifeIndicatorsSprite_C_GetNoiseBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_BloodDropBox_Visibility_1
	 */
	struct UPrisonerLifeIndicatorsSprite_C_Get_BloodDropBox_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility
	 */
	struct UPrisonerLifeIndicatorsSprite_C_SetImageVisibility_Params
	{
	public:
		EBodyPart                                                  bodyPart;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MQEH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UImage*                                              Image;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner
	 */
	struct UPrisonerLifeIndicatorsSprite_C_GetDefaultPrisoner_Params
	{
	public:
		class APrisoner*                                           Prisoner;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar
	 */
	struct UPrisonerLifeIndicatorsSprite_C_GetProgressBar_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QO3V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCircularProgressBarSprites_C*                       circularProgresBar;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor
	 */
	struct UPrisonerLifeIndicatorsSprite_C_SetDefaultPrisonerToMonitor_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3RLJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators
	 */
	struct UPrisonerLifeIndicatorsSprite_C_UpdateIndicators_Params
	{	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor
	 */
	struct UPrisonerLifeIndicatorsSprite_C_SetPrisonerToMonitor_Params
	{
	public:
		class APrisoner*                                           Prisoner;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct
	 */
	struct UPrisonerLifeIndicatorsSprite_C_Construct_Params
	{	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent
	 */
	struct UPrisonerLifeIndicatorsSprite_C_UpdateLifeIndicatorsEvent_Params
	{	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet
	 */
	struct UPrisonerLifeIndicatorsSprite_C_OnPrisonerSet_Params
	{	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick
	 */
	struct UPrisonerLifeIndicatorsSprite_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetNoiseBarPercent
	 */
	struct UPrisonerLifeIndicatorsSprite_C_SetNoiseBarPercent_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetAIDetectionBarPercent
	 */
	struct UPrisonerLifeIndicatorsSprite_C_SetAIDetectionBarPercent_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite
	 */
	struct UPrisonerLifeIndicatorsSprite_C_ExecuteUbergraph_PrisonerLifeIndicatorsSprite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
