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
	 * Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.GetUnSelectedTags
	 */
	struct UBP_Widget_ModTagGroup_C_GetUnSelectedTags_Params
	{	};

	/**
	 * Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.GetSelectedTags
	 */
	struct UBP_Widget_ModTagGroup_C_GetSelectedTags_Params
	{	};

	/**
	 * Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.UpdateSelectedTags
	 */
	struct UBP_Widget_ModTagGroup_C_UpdateSelectedTags_Params
	{	};

	/**
	 * Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.PreConstruct
	 */
	struct UBP_Widget_ModTagGroup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.OnOptionToggled
	 */
	struct UBP_Widget_ModTagGroup_C_OnOptionToggled_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Toggled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.ExecuteUbergraph_BP_Widget_ModTagGroup
	 */
	struct UBP_Widget_ModTagGroup_C_ExecuteUbergraph_BP_Widget_ModTagGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YIRS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.OnTagsUpdated__DelegateSignature
	 */
	struct UBP_Widget_ModTagGroup_C_OnTagsUpdated__DelegateSignature_Params
	{
	public:
		class UBP_Widget_ModTagGroup_C*                            Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
