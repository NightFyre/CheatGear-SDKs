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
	 * Function UMGExtensions.ComboBoxText.SetSelectedOption
	 */
	struct UComboBoxText_SetSelectedOption_Params
	{
	public:
		class FText                                                Option;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMGExtensions.ComboBoxText.SetSelectedIndex
	 */
	struct UComboBoxText_SetSelectedIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMGExtensions.ComboBoxText.RemoveOption
	 */
	struct UComboBoxText_RemoveOption_Params
	{
	public:
		class FText                                                Option;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMGExtensions.ComboBoxText.RefreshOptions
	 */
	struct UComboBoxText_RefreshOptions_Params
	{	};

	/**
	 * DelegateFunction UMGExtensions.ComboBoxText.OnSelectionChangedEvent__DelegateSignature
	 */
	struct UComboBoxText_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                SelectedItem;                                            // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		ESelectInfo                                                SelectionType;                                           // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMGExtensions.ComboBoxText.OnOpeningEvent__DelegateSignature
	 */
	struct UComboBoxText_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMGExtensions.ComboBoxText.GetSelectedOption
	 */
	struct UComboBoxText_GetSelectedOption_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMGExtensions.ComboBoxText.GetSelectedIndex
	 */
	struct UComboBoxText_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMGExtensions.ComboBoxText.GetOptionCount
	 */
	struct UComboBoxText_GetOptionCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMGExtensions.ComboBoxText.GetOptionAtIndex
	 */
	struct UComboBoxText_GetOptionAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ME7P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMGExtensions.ComboBoxText.FindOptionIndex
	 */
	struct UComboBoxText_FindOptionIndex_Params
	{
	public:
		class FText                                                Option;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMGExtensions.ComboBoxText.ClearSelection
	 */
	struct UComboBoxText_ClearSelection_Params
	{	};

	/**
	 * Function UMGExtensions.ComboBoxText.ClearOptions
	 */
	struct UComboBoxText_ClearOptions_Params
	{	};

	/**
	 * Function UMGExtensions.ComboBoxText.AddOption
	 */
	struct UComboBoxText_AddOption_Params
	{
	public:
		class FText                                                Option;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMGExtensions.NWIUMGStatics.GetAllChildrenRecursive
	 */
	struct UNWIUMGStatics_GetAllChildrenRecursive_Params
	{
	public:
		class UPanelWidget*                                        Panel;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UWidget*>                                     ReturnValue;                                             // 0x0008(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMGExtensions.SaberInvalidationBox.SetCanCache
	 */
	struct USaberInvalidationBox_SetCanCache_Params
	{
	public:
		bool                                                       CanCache;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMGExtensions.SaberInvalidationBox.InvalidateCache
	 */
	struct USaberInvalidationBox_InvalidateCache_Params
	{	};

	/**
	 * Function UMGExtensions.SaberInvalidationBox.GetCanCache
	 */
	struct USaberInvalidationBox_GetCanCache_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
