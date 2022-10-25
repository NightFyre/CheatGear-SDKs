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
	 * Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.SetVerticleBoxNavigation
	 */
	struct UBP_FuncLibrary_Widget_C_SetVerticleBoxNavigation_Params
	{
	public:
		class UVerticalBox*                                        bpp__VerticalBox__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.SetVerticalPanelNavigation
	 */
	struct UBP_FuncLibrary_Widget_C_SetVerticalPanelNavigation_Params
	{
	public:
		class UPanelWidget*                                        bpp__VerticalPanel__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.ScrollWithRightStick
	 */
	struct UBP_FuncLibrary_Widget_C_ScrollWithRightStick_Params
	{
	public:
		struct FAnalogInputEvent                                   bpp__AnalogInputEvent__pf;                               // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class UScrollBox*                                          bpp__Scrollbox__pf;                                      // 0x0040(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__ScrollSpeed__pf;                                    // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WSLD[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEventReply                                         bpp__Reply__pf;                                          // 0x0058(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.GetVisibleChildrenCount
	 */
	struct UBP_FuncLibrary_Widget_C_GetVisibleChildrenCount_Params
	{
	public:
		class UPanelWidget*                                        bpp__Target__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__Count__pf;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.GetFirstFocusableChild
	 */
	struct UBP_FuncLibrary_Widget_C_GetFirstFocusableChild_Params
	{
	public:
		class UPanelWidget*                                        bpp__Target__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Reversed__pf;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CIUW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             bpp__Child__pf;                                          // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_FuncLibrary_Widget.BP_FuncLibrary_Widget_C.GetFirstFocusableAndVisibleChild
	 */
	struct UBP_FuncLibrary_Widget_C_GetFirstFocusableAndVisibleChild_Params
	{
	public:
		class UPanelWidget*                                        bpp__Target__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Reversed__pf;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1A16[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             bpp__Child__pf;                                          // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
