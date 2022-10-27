#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectItemBySlotNum
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_SelectItemBySlotNum_Params
	{
	public:
		int32_t                                                    SlotNum;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.GetSelectedItem
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_GetSelectedItem_Params
	{
	public:
		struct FFEqpSlotData                                       OutSlotData;                                             // 0x0000(0x0018)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFoundItem;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4FWB[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.GetMinSlotIndex
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_GetMinSlotIndex_Params
	{
	public:
		TArray<struct FFEqpSlotData>                               SlotDataArray;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		int32_t                                                    MinSlotIndex;                                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.CreateAndAddEquipmentWidget
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_CreateAndAddEquipmentWidget_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SlotNum;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEnabled;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M4JQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AHDBaseWeapon*                                       EqpItem;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.ClearEquipmentList
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_ClearEquipmentList_Params
	{	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.RemoveEquipmentAtSlotNum
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_RemoveEquipmentAtSlotNum_Params
	{
	public:
		int32_t                                                    SlotNum;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRemoved;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4SJV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.RebuildEquipmentList
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_RebuildEquipmentList_Params
	{	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.AddEquipment
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_AddEquipment_Params
	{
	public:
		struct FHDItemEntry                                        EqpInfo;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AHDBaseWeapon*                                       EqpItem;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectItem
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_SelectItem_Params
	{
	public:
		int32_t                                                    NewSlotIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectPrevItem
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_SelectPrevItem_Params
	{	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.SelectNextItem
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_SelectNextItem_Params
	{	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.PreConstruct
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.LoadEquipmentAsset
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_LoadEquipmentAsset_Params
	{
	public:
		unsigned char                                              UnknownData_XEIL[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotNum;                                                 // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YVVO[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AHDBaseWeapon*                                       EqpItem;                                                 // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.OnEquipmentListModified
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_OnEquipmentListModified_Params
	{	};

	/**
	 * Function WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C.ExecuteUbergraph_WBP_HUDElement_EquipmentSelect
	 */
	struct UWBP_HUDElement_EquipmentSelect_C_ExecuteUbergraph_WBP_HUDElement_EquipmentSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q8AO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
