#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_BindSettings.BP_BindSettings_C.OnFocusReceived
	 */
	struct UBP_BindSettings_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.CreateKeyConflictDialog
	 */
	struct UBP_BindSettings_C_CreateKeyConflictDialog_Params
	{
	public:
		struct FKeyBindingOption                                   KeyBindingOption;                                        // 0x0000(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FKey                                                ConflictingKey;                                          // 0x0130(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FName                                                ConflictingActionName;                                   // 0x0148(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_OptionsRow_KeyInput_C*                           KeyWidget;                                               // 0x0150(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.OnReplaceKeyBinding
	 */
	struct UBP_BindSettings_C_OnReplaceKeyBinding_Params
	{
	public:
		struct FKeyBindingOption                                   BindingOption;                                           // 0x0000(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FKey                                                ConflictedKey;                                           // 0x0130(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FName                                                ConflictAction;                                          // 0x0148(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.PopulateKeyBindings
	 */
	struct UBP_BindSettings_C_PopulateKeyBindings_Params
	{	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.OnActionKeyUpdated
	 */
	struct UBP_BindSettings_C_OnActionKeyUpdated_Params
	{
	public:
		struct FKeyBindingOption                                   KeyBindOption;                                           // 0x0000(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FInputChord                                         NewKey;                                                  // 0x0130(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UBP_OptionsRow_KeyInput_C*                           KeyWidget;                                               // 0x0150(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.Get_BtnSaveChanges_bIsEnabled_1
	 */
	struct UBP_BindSettings_C_Get_BtnSaveChanges_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LSA1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.PopulateOptions
	 */
	struct UBP_BindSettings_C_PopulateOptions_Params
	{	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.OnTabSelected
	 */
	struct UBP_BindSettings_C_OnTabSelected_Params
	{	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.Construct
	 */
	struct UBP_BindSettings_C_Construct_Params
	{	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.BlueprintResetToDefaults
	 */
	struct UBP_BindSettings_C_BlueprintResetToDefaults_Params
	{	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.BlueprintApplyChanges
	 */
	struct UBP_BindSettings_C_BlueprintApplyChanges_Params
	{	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.OnKeyBindHovered
	 */
	struct UBP_BindSettings_C_OnKeyBindHovered_Params
	{
	public:
		class FText                                                HoveredKeyTitle;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                HoveredKeyDescription;                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.BlueprintRefreshSettings
	 */
	struct UBP_BindSettings_C_BlueprintRefreshSettings_Params
	{	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.OnProfileBlockLoadedDelegate_Event_1
	 */
	struct UBP_BindSettings_C_OnProfileBlockLoadedDelegate_Event_1_Params
	{
	public:
		EProfileBlockType                                          Type;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromCloud;                                              // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BindSettings.BP_BindSettings_C.ExecuteUbergraph_BP_BindSettings
	 */
	struct UBP_BindSettings_C_ExecuteUbergraph_BP_BindSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WYIB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
