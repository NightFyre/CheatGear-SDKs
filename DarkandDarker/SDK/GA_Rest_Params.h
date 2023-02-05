#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function GA_Rest.GA_Rest_C.EventReceived_1354684B4ED7CD1780504781985CC179
	 */
	struct UGA_Rest_C_EventReceived_1354684B4ED7CD1780504781985CC179_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.OnCancelled_1354684B4ED7CD1780504781985CC179
	 */
	struct UGA_Rest_C_OnCancelled_1354684B4ED7CD1780504781985CC179_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.OnInterrupted_1354684B4ED7CD1780504781985CC179
	 */
	struct UGA_Rest_C_OnInterrupted_1354684B4ED7CD1780504781985CC179_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.OnBlendOut_1354684B4ED7CD1780504781985CC179
	 */
	struct UGA_Rest_C_OnBlendOut_1354684B4ED7CD1780504781985CC179_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.OnCompleted_1354684B4ED7CD1780504781985CC179
	 */
	struct UGA_Rest_C_OnCompleted_1354684B4ED7CD1780504781985CC179_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.OnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B
	 */
	struct UGA_Rest_C_OnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B_Params
	{	};

	/**
	 * Function GA_Rest.GA_Rest_C.Removed_D6EA05E04C84E42B757C98B704B33CD4
	 */
	struct UGA_Rest_C_Removed_D6EA05E04C84E42B757C98B704B33CD4_Params
	{	};

	/**
	 * Function GA_Rest.GA_Rest_C.OnSync_F91698B446A3FF36AB7603AD2D824105
	 */
	struct UGA_Rest_C_OnSync_F91698B446A3FF36AB7603AD2D824105_Params
	{	};

	/**
	 * Function GA_Rest.GA_Rest_C.OnFinished_08B6AFA441544B64E6F9A8854A58A87C
	 */
	struct UGA_Rest_C_OnFinished_08B6AFA441544B64E6F9A8854A58A87C_Params
	{
	public:
		int32_t                                                    ActionNumber;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C
	 */
	struct UGA_Rest_C_OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C_Params
	{
	public:
		int32_t                                                    ActionNumber;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.InputActionCompleted_3E8A5B98486BF3C623D730942B6F7EB0
	 */
	struct UGA_Rest_C_InputActionCompleted_3E8A5B98486BF3C623D730942B6F7EB0_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.InputActionStarted_3E8A5B98486BF3C623D730942B6F7EB0
	 */
	struct UGA_Rest_C_InputActionStarted_3E8A5B98486BF3C623D730942B6F7EB0_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.InputActionTriggered_3E8A5B98486BF3C623D730942B6F7EB0
	 */
	struct UGA_Rest_C_InputActionTriggered_3E8A5B98486BF3C623D730942B6F7EB0_Params
	{
	public:
		struct FInputActionValue                                   InputActionValue;                                        // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.OnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B
	 */
	struct UGA_Rest_C_OnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B_Params
	{	};

	/**
	 * Function GA_Rest.GA_Rest_C.K2_OnEndAbility
	 */
	struct UGA_Rest_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.K2_ActivateAbilityFromEvent
	 */
	struct UGA_Rest_C_K2_ActivateAbilityFromEvent_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Rest.GA_Rest_C.OnRestEnd
	 */
	struct UGA_Rest_C_OnRestEnd_Params
	{	};

	/**
	 * Function GA_Rest.GA_Rest_C.ExecuteUbergraph_GA_Rest
	 */
	struct UGA_Rest_C_ExecuteUbergraph_GA_Rest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
